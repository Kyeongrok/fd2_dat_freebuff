#!/usr/bin/env python3
"""
FD2 Intro Animation Extractor

Extracts the complete intro animation sequence from FDOTHER.DAT based on
reverse-engineered function sub_1F894.

Intro Animation Flow (from decompiled code):
1. Load resources 77, 76, 74 from FDOTHER.DAT
2. Draw title (res 74) to screen
3. Apply palette, screen refresh, video effects
4. Load resources 69-73 (5 animation frames, each 320x147 except res 73 which is 320x200)
5. Stitch frames into a 320x(147*5) = 320x735 buffer
6. Play 535-frame animation at 30ms per frame (16.05 seconds)
   - Frame 535: screen refresh
   - Frame 450: special effect (sub_1F73F with params 100, 99)
   - Frame 330: sound effect (sub_1F81E with params 4, 90, 99)
   - Frame 210: sound effect (sub_1F81E with params 6, 90, 99)
   - Frame 110: sound effect (sub_1F81E with params 8, 90, 99)
   - Frame 25: menu appears
   - Frame 10: special effect (sub_1F73F with params 75, 76)
   - Frame 0: 1000ms delay
7. Fade out (40 steps, 8ms each)
8. Display menu

Usage:
    python3 extract_intro.py --game game --output output/intro
"""

from __future__ import annotations

import argparse
import struct
import json
from pathlib import Path
from typing import Optional

DAT_MAGIC = b"LLLLLL"
SCREEN_WIDTH = 320
SCREEN_HEIGHT = 200


def read_dat_file(path: Path) -> tuple[bytes, list[int]]:
    """Read a DAT file and return (data, offsets)."""
    data = path.read_bytes()
    if data[:6] != DAT_MAGIC:
        raise ValueError(f"Not a valid DAT file: {path}")
    
    resource_count = struct.unpack_from("<I", data, 6)[0]
    offsets = []
    for i in range(resource_count):
        offset = 10 + i * 4
        if offset + 4 > len(data):
            break
        offsets.append(struct.unpack_from("<I", data, offset)[0])
    
    return data, offsets


def get_resource(data: bytes, offsets: list[int], idx: int) -> bytes:
    """Extract resource data by index."""
    start = offsets[idx]
    end = offsets[idx + 1] if idx + 1 < len(offsets) else len(data)
    return data[start:end]


def decompress_rle(data: bytes, width: int, height: int) -> bytes:
    """Decompress FD2 RLE data (IDA sub_4E98D)."""
    expected = width * height
    img = bytearray(expected)
    
    num4 = 0
    num3 = len(data) - 1
    num7 = 0
    num8 = 0
    num9 = 0
    b = 0
    num10 = 0  # x
    num11 = 0  # y
    pixel_idx = 0
    
    while num4 <= num3 and pixel_idx < expected:
        flag = num8 != 0
        
        if not flag:
            num7 = 0
            num8 = 0
            num9 = 0
            
            if num4 < len(data):
                b = data[num4]
                if b >= 192:
                    num7 = b - 192 + 1
                elif b >= 128:
                    num8 = b - 128 + 1
                elif b >= 64:
                    num9 = b - 64
                    num8 = 1
                else:
                    num8 = 1
                    num9 = b
            
            num10 += num7
            if num10 >= width:
                num10 = 0
                num11 += 1
        else:
            num12 = num9
            num13 = 0
            while num13 <= num12:
                if 64 <= b < 128:
                    num10 += 1
                if num4 < len(data):
                    index = data[num4]
                    if 0 <= num10 < width and 0 <= num11 < height:
                        if pixel_idx < expected:
                            img[pixel_idx] = index
                            pixel_idx += 1
                num10 += 1
                if num10 >= width:
                    num10 = 0
                    num11 += 1
                num13 += 1
            num8 -= 1
        
        num4 += 1
        if num11 >= height:
            break
    
    return bytes(img[:pixel_idx])


def write_bmp(path: Path, width: int, height: int, palette: Optional[bytes], pixels: bytes) -> None:
    """Write an 8-bit indexed BMP file."""
    total = width * height
    if len(pixels) < total:
        pixels = pixels + bytes(total - len(pixels))
    elif len(pixels) > total:
        pixels = pixels[:total]
    
    palette_data = b""
    if palette and len(palette) >= 768:
        for i in range(256):
            if i * 3 + 2 < len(palette):
                r, g, b = palette[i * 3], palette[i * 3 + 1], palette[i * 3 + 2]
            else:
                r = g = b = i
            palette_data += struct.pack("<BBBB", b, g, r, 0)
    else:
        for i in range(256):
            palette_data += struct.pack("<BBBB", i, i, i, 0)
    
    row_size = (width + 3) & ~3
    image_size = row_size * height
    data_offset = 14 + 40 + len(palette_data)
    
    bmp = b"BM"
    bmp += struct.pack("<I", data_offset + image_size)
    bmp += struct.pack("<HH", 0, 0)
    bmp += struct.pack("<I", data_offset)
    
    bmp += struct.pack("<IiiHHIIiiII",
        40, width, height, 1, 8, 0, image_size, 0, 0, 256, 0
    )
    
    bmp += palette_data
    
    for y in range(height - 1, -1, -1):
        row_start = y * width
        bmp += pixels[row_start:row_start + width]
        padding = row_size - width
        if padding > 0:
            bmp += b"\x00" * padding
    
    path.write_bytes(bmp)


def extract_intro(game_dir: Path, output_dir: Path) -> dict:
    """Extract the complete intro animation sequence."""
    output_dir.mkdir(parents=True, exist_ok=True)
    
    fdother_path = game_dir / "FDOTHER.DAT"
    if not fdother_path.exists():
        return {"error": "FDOTHER.DAT not found"}
    
    data, offsets = read_dat_file(fdother_path)
    
    # Extract palette (resource 7)
    palette_res = get_resource(data, offsets, 7)
    palette = palette_res if len(palette_res) == 768 else None
    
    if palette:
        write_bmp(output_dir / "palette_reference.bmp", 32, 24, palette, 
                  bytes([i % 256 for i in range(768)]))
    
    result = {
        "palette_extracted": palette is not None,
        "title": None,
        "background": None,
        "animation_frames": [],
        "menu_resources": [],
        "special_effects": [],
    }
    
    # Step 1: Extract title (resource 74) - 320x200
    print("Extracting title (resource 74)...")
    title_res = get_resource(data, offsets, 74)
    if len(title_res) >= 4:
        w, h = struct.unpack_from("<HH", title_res, 0)
        pixels = decompress_rle(title_res[4:], w, h)
        write_bmp(output_dir / "title.bmp", w, h, palette, pixels)
        result["title"] = {"width": w, "height": h, "file": "title.bmp"}
        print(f"  Title: {w}x{h}")
    
    # Step 2: Extract background (resource 76) - nested DAT with 26 resources
    print("Extracting background (resource 76)...")
    bg_res = get_resource(data, offsets, 76)
    if bg_res[:6] == DAT_MAGIC and len(bg_res) >= 10:
        bg_count = struct.unpack_from("<I", bg_res, 6)[0]
        bg_offsets = []
        for i in range(bg_count):
            off = 10 + i * 4
            if off + 4 <= len(bg_res):
                bg_offsets.append(struct.unpack_from("<I", bg_res, off)[0])
        
        for i in range(min(len(bg_offsets), 5)):
            start = bg_offsets[i]
            end = bg_offsets[i + 1] if i + 1 < len(bg_offsets) else len(bg_res)
            if start >= len(bg_res):
                break
            inner_res = bg_res[start:end]
            if len(inner_res) >= 4:
                try:
                    w, h = struct.unpack_from("<HH", inner_res, 0)
                    if 0 < w <= 640 and 0 < h <= 480:
                        pixels = decompress_rle(inner_res[4:], w, h)
                        write_bmp(output_dir / f"bg_{i}.bmp", w, h, palette, pixels)
                        print(f"  Background {i}: {w}x{h}")
                except:
                    pass
    
    # Step 3: Extract animation frames (resources 69-73)
    print("Extracting animation frames (resources 69-73)...")
    frame_buffer = bytearray()
    frame_info = []
    
    for idx in range(69, 74):
        frame_res = get_resource(data, offsets, idx)
        if len(frame_res) >= 4:
            w, h = struct.unpack_from("<HH", frame_res, 0)
            pixels = decompress_rle(frame_res[4:], w, h)
            write_bmp(output_dir / f"anim_frame_{idx}.bmp", w, h, palette, pixels)
            frame_buffer.extend(pixels)
            frame_info.append({"resource": idx, "width": w, "height": h})
            print(f"  Frame {idx}: {w}x{h}")
    
    result["animation_frames"] = frame_info
    
    # Step 4: Create stitched animation strip
    total_height = sum(f["height"] for f in frame_info) if frame_info else 0
    if frame_buffer:
        strip_path = output_dir / "animation_strip.bmp"
        write_bmp(strip_path, SCREEN_WIDTH, total_height, palette, bytes(frame_buffer))
        print(f"  Animation strip: {SCREEN_WIDTH}x{total_height}")
    
    # Step 5: Extract menu resources
    print("Extracting menu resources...")
    for res_idx in [8, 9, 99, 101, 102]:
        if res_idx < len(offsets):
            menu_res = get_resource(data, offsets, res_idx)
            if len(menu_res) >= 4:
                try:
                    w, h = struct.unpack_from("<HH", menu_res, 0)
                    if 0 < w <= 640 and 0 < h <= 480:
                        pixels = decompress_rle(menu_res[4:], w, h)
                        write_bmp(output_dir / f"menu_{res_idx}.bmp", w, h, palette, pixels)
                        result["menu_resources"].append({
                            "resource": res_idx,
                            "width": w,
                            "height": h,
                            "file": f"menu_{res_idx}.bmp"
                        })
                        print(f"  Menu {res_idx}: {w}x{h}")
                except:
                    pass
    
    # Step 6: Extract UI elements (resources 0-6)
    print("Extracting UI elements (resources 0-6)...")
    for res_idx in range(7):
        ui_res = get_resource(data, offsets, res_idx)
        if len(ui_res) >= 4:
            try:
                w, h = struct.unpack_from("<HH", ui_res, 0)
                if 0 < w <= 640 and 0 < h <= 480:
                    pixels = decompress_rle(ui_res[4:], w, h)
                    write_bmp(output_dir / f"ui_{res_idx}.bmp", w, h, palette, pixels)
                    print(f"  UI {res_idx}: {w}x{h}")
            except:
                pass
    
    # Step 7: Extract special effect resources
    print("Extracting special effect resources...")
    # Resources used in special effects: 100, 99, 75, 76
    for res_idx in [75, 99, 100]:
        if res_idx < len(offsets):
            res_data = get_resource(data, offsets, res_idx)
            if len(res_data) >= 4:
                try:
                    w, h = struct.unpack_from("<HH", res_data, 0)
                    if 0 < w <= 640 and 0 < h <= 480:
                        pixels = decompress_rle(res_data[4:], w, h)
                        write_bmp(output_dir / f"effect_{res_idx}.bmp", w, h, palette, pixels)
                        result["special_effects"].append({
                            "resource": res_idx,
                            "width": w,
                            "height": h,
                            "file": f"effect_{res_idx}.bmp"
                        })
                        print(f"  Effect {res_idx}: {w}x{h}")
                except:
                    pass
    
    # Save animation metadata
    metadata = {
        "game": "FD2",
        "intro_animation": {
            "total_frames": 535,
            "frame_delay_ms": 30,
            "total_duration_seconds": 535 * 30 / 1000,
            "frame_buffer_size": f"{SCREEN_WIDTH}x{total_height}",
            "key_frames": {
                535: "screen_refresh",
                450: "special_effect_100_99",
                330: "sound_effect_4_90_99",
                210: "sound_effect_6_90_99",
                110: "sound_effect_8_90_99",
                25: "menu_appears",
                10: "special_effect_75_76",
                0: "1000ms_delay",
            },
            "fade_out": {
                "steps": 40,
                "step_delay_ms": 8,
                "total_duration_ms": 320,
            },
            "post_fade_delay_ms": 100,
        },
        "resources": result,
    }
    
    metadata_path = output_dir / "intro_metadata.json"
    metadata_path.write_text(json.dumps(metadata, indent=2), encoding="utf-8")
    
    return metadata


def main() -> int:
    parser = argparse.ArgumentParser(description="Extract FD2 intro animation")
    parser.add_argument("--game", type=Path, default=Path("game"), help="Game directory")
    parser.add_argument("--output", type=Path, default=Path("output/intro"), help="Output directory")
    args = parser.parse_args()
    
    game_dir = args.game.resolve()
    output_dir = args.output.resolve()
    
    if not game_dir.exists():
        print(f"Error: game directory not found: {game_dir}")
        return 1
    
    print("FD2 Intro Animation Extractor")
    print(f"Game: {game_dir}")
    print(f"Output: {output_dir}")
    print()
    
    metadata = extract_intro(game_dir, output_dir)
    
    print()
    print("Extraction complete!")
    print(f"  Output: {output_dir}")
    print(f"  Metadata: {output_dir / 'intro_metadata.json'}")
    
    if metadata.get("animation_frames"):
        frames = metadata["animation_frames"]
        total_h = sum(f["height"] for f in frames)
        print(f"  Animation: {len(frames)} frames, {SCREEN_WIDTH}x{total_h} strip")
        print(f"  Playback: 535 frames @ 30ms = {535 * 30 / 1000:.2f}s")
    
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
