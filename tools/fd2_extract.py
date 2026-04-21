#!/usr/bin/env python3
"""Extract documented FD2 resource formats into portable debug assets."""

from __future__ import annotations

import argparse
import json
import struct
from pathlib import Path
from typing import Any


def decompress_rle(data: bytes, expected_size: int | None = None) -> tuple[bytes, int]:
    """Decompress FD2 RLE compressed data.
    
    This is the RLE algorithm from IDA sub_4E98D:
    - b >= 192: skip count = b - 192 + 1
    - 128 <= b < 192: literal count = b - 128 + 1
    - 64 <= b < 128: fill count = b - 64, repeat once
    - b <= 63: fill count = b, repeat once
    """
    width = 320
    height = 200
    if expected_size:
        width = 320
        height = expected_size // 320
    
    img = bytearray(expected_size) if expected_size else bytearray()
    
    num4 = 0
    num3 = len(data) - 1
    num7 = 0
    num8 = 0
    num9 = 0
    b = 0
    num10 = 0  # x coordinate
    num11 = 0  # y coordinate
    
    pixel_idx = 0
    
    while num4 <= num3 and (not expected_size or pixel_idx < expected_size):
        flag = num8 != 0
        
        if not flag:
            num7 = 0
            num8 = 0
            num9 = 0
            
            if num4 < len(data):
                b = data[num4]
                if b >= 192:
                    num7 = b - 192 + 1
                elif 128 <= b < 192:
                    num8 = b - 128 + 1
                elif 64 <= b < 128:
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
            while True:
                if num13 > num12:
                    break
                if 64 <= b < 128:
                    num10 += 1
                if num4 < len(data):
                    index = data[num4]
                    if 0 <= num10 < width and 0 <= num11 < height:
                        if expected_size and pixel_idx < expected_size:
                            img[pixel_idx] = index
                            pixel_idx += 1
                num10 += 1
                if num10 >= width:
                    num10 = 0
                    num11 += 1
                num13 += 1
            num8 -= 1
        
        num4 += 1
        
        if expected_size and num11 >= height:
            break
    
    return bytes(img[:pixel_idx]) if expected_size else bytes(img), num4


def read_rle_header(data: bytes) -> tuple[int, int]:
    """Read RLE header (little-endian 16-bit width and height)"""
    if len(data) < 4:
        return 0, 0
    width = struct.unpack_from("<H", data, 0)[0]
    height = struct.unpack_from("<H", data, 2)[0]
    return width, height


def is_nested_dat(data: bytes) -> bool:
    """Check if data starts with nested DAT magic"""
    return data[:6] == b"LLLLLL"


def parse_dat_indexes(data: bytes) -> list[int]:
    """Parse index table from DAT file"""
    if data[:6] != b"LLLLLL":
        return []
    
    resource_count = struct.unpack_from("<I", data, 6)[0]
    indexes = []
    for i in range(resource_count):
        offset = 10 + i * 4
        if offset + 4 > len(data):
            break
        res_offset = struct.unpack_from("<I", data, offset)[0]
        indexes.append(res_offset)
    return indexes


def parse_fdother_dat(path: Path) -> dict[str, Any]:
    """Parse FDOTHER.DAT file."""
    data = path.read_bytes()
    
    # Verify header
    if data[:6] != b"LLLLLL":
        raise ValueError(f"unexpected magic: {data[:6]!r}")
    
    # Read resource count
    resource_count = struct.unpack_from("<I", data, 6)[0]
    
    # Read index table
    indexes = []
    for i in range(resource_count):
        offset = 10 + i * 4
        if offset + 4 > len(data):
            break
        res_offset = struct.unpack_from("<I", data, offset)[0]
        indexes.append(res_offset)
    
    # Calculate sizes
    sizes = []
    for i in range(len(indexes)):
        if i + 1 < len(indexes):
            size = indexes[i + 1] - indexes[i]
        else:
            size = len(data) - indexes[i]
        sizes.append(max(0, size))
    
    # Analyze resources
    resources = []
    for idx, offset in enumerate(indexes):
        if offset >= len(data):
            continue
            
        size = sizes[idx] if idx < len(sizes) else 0
        res_data = data[offset:offset + size]
        
        # Detect resource type
        is_nested = is_nested_dat(res_data)
        width, height = 0, 0
        has_pixels = False
        
        if not is_nested and size >= 4:
            # Try 16-bit little-endian header first
            width = struct.unpack_from("<H", res_data, 0)[0]
            height = struct.unpack_from("<H", res_data, 2)[0]
            
            if width > 0 and width <= 320 and height > 0 and height <= 200:
                expected = width * height
                try:
                    pixels, consumed = decompress_rle(res_data[4:], expected)
                    if len(pixels) >= expected * 0.9:
                        has_pixels = True
                except:
                    pass
        
        resources.append({
            "index": idx,
            "offset": offset,
            "size": size,
            "is_nested_dat": is_nested,
            "width": width,
            "height": height,
            "has_pixels": has_pixels,
        })
    
    return {
        "magic": "LLLLLL",
        "resource_count": resource_count,
        "indexes": indexes[:50],
        "resources": resources[:50],
    }


def parse_fdother_palette(path: Path) -> bytes | None:
    """Extract palette from FDOTHER.DAT (resource 0 or 7)"""
    data = path.read_bytes()
    
    if data[:6] != b"LLLLLL":
        return None
    
    resource_count = struct.unpack_from("<I", data, 6)[0]
    
    # Try resource 7 (palette)
    if resource_count > 7:
        offset = struct.unpack_from("<I", data, 10 + 7 * 4)[0]
        size = 0
        if resource_count > 8:
            size = struct.unpack_from("<I", data, 10 + 8 * 4)[0] - offset
        else:
            size = len(data) - offset
        
        if size >= 768:
            return data[offset:offset + 768]
    
    return None


def write_bmp(path: Path, width: int, height: int, palette: bytes | None, pixels: bytes) -> None:
    """Write a BMP file."""
    if len(pixels) < width * height:
        pixels = pixels + bytes(width * height - len(pixels))
    elif len(pixels) > width * height:
        pixels = pixels[:width * height]
    
    # Create palette (256 colors, BGR format)
    palette_data = b""
    if palette and len(palette) >= 768:
        for i in range(256):
            if i * 3 + 2 < len(palette):
                r = palette[i * 3]
                g = palette[i * 3 + 1]
                b = palette[i * 3 + 2]
            else:
                r = g = b = i
            palette_data += struct.pack("<BBB", b, g, r) + b"\x00"
    else:
        for i in range(256):
            palette_data += struct.pack("<BBB", i, i, i) + b"\x00"
    
    # BMP header
    row_size = width
    row_size = (row_size + 3) & ~3
    image_size = row_size * height
    
    bmp_header = b"BM"
    bmp_header += struct.pack("<I", 14 + 40 + len(palette_data) + image_size)
    bmp_header += struct.pack("<H", 0)
    bmp_header += struct.pack("<H", 0)
    bmp_header += struct.pack("<I", 14 + 40 + len(palette_data))
    
    dib_header = struct.pack("<I", 40)
    dib_header += struct.pack("<i", width)
    dib_header += struct.pack("<i", height)
    dib_header += struct.pack("<H", 1)
    dib_header += struct.pack("<H", 8)
    dib_header += struct.pack("<I", 0)
    dib_header += struct.pack("<I", image_size)
    dib_header += struct.pack("<i", 0)
    dib_header += struct.pack("<i", 0)
    dib_header += struct.pack("<I", 256)
    dib_header += struct.pack("<I", 0)
    
    # Pixel data (bottom-up)
    pixel_bytes = bytearray()
    for y in range(height - 1, -1, -1):
        pixel_bytes.extend(pixels[y * width:(y + 1) * width])
        padding = row_size - width
        if padding > 0:
            pixel_bytes.extend(b"\x00" * padding)
    
    path.write_bytes(bmp_header + dib_header + palette_data + bytes(pixel_bytes))


def find_intro_frames(source: Path) -> list[dict]:
    """Find intro animation frames in FDOTHER.DAT"""
    fdother_path = source / "FDOTHER.DAT"
    if not fdother_path.exists():
        return []
    
    data = fdother_path.read_bytes()
    resource_count = struct.unpack_from("<I", data, 6)[0]
    
    frames = []
    
    # Search for RLE images with 320x147 or 320x200 dimensions (intro animation)
    for idx in range(resource_count):
        offset = struct.unpack_from("<I", data, 10 + idx * 4)[0]
        
        next_offset = len(data)
        if idx + 1 < resource_count:
            next_offset = struct.unpack_from("<I", data, 10 + (idx + 1) * 4)[0]
        
        res_data = data[offset:next_offset]
        size = next_offset - offset
        
        # Skip nested DATs and too small/large resources
        if is_nested_dat(res_data):
            continue
        if size < 1000 or size > 200000:
            continue
            
        if len(res_data) >= 4:
            width = struct.unpack_from("<H", res_data, 0)[0]
            height = struct.unpack_from("<H", res_data, 2)[0]
            
            # Intro animation uses 320x147 or 320x200
            if (width == 320 and height == 200) or (width == 320 and height == 147):
                expected = width * height
                pixels, consumed = decompress_rle(res_data[4:], expected)
                if len(pixels) >= expected:
                    frames.append({
                        "resource_id": idx,
                        "offset": offset,
                        "size": size,
                        "width": width,
                        "height": height,
                    })
    
    return frames


def extract_intro_frames(source: Path, output: Path) -> dict[str, Any]:
    """Extract intro animation frames."""
    fdother_path = source / "FDOTHER.DAT"
    if not fdother_path.exists():
        return {"error": "FDOTHER.DAT not found"}
    
    data = fdother_path.read_bytes()
    palette = parse_fdother_palette(fdother_path)
    
    if data[:6] != b"LLLLLL":
        return {"error": "Invalid header"}
    
    # Find intro frames
    frames_info = find_intro_frames(source)
    
    extracted = []
    for frame_info in frames_info:
        idx = frame_info["resource_id"]
        offset = frame_info["offset"]
        
        next_offset = len(data)
        if idx + 1 < struct.unpack_from("<I", data, 6)[0]:
            next_offset = struct.unpack_from("<I", data, 10 + (idx + 1) * 4)[0]
        
        res_data = data[offset:next_offset]
        width = frame_info["width"]
        height = frame_info["height"]
        
        expected = width * height
        pixels, consumed = decompress_rle(res_data[4:], expected)
        pixels = pixels[:expected]
        
        bmp_path = output / f"intro_frame_{idx}.bmp"
        write_bmp(bmp_path, width, height, palette, pixels)
        
        extracted.append({
            "resource_id": idx,
            "width": width,
            "height": height,
            "saved": str(bmp_path),
        })
    
    return {
        "frame_count": len(extracted),
        "frames": extracted,
    }


def extract_title_and_bg(source: Path, output: Path) -> dict[str, Any]:
    """Extract title and background images."""
    fdother_path = source / "FDOTHER.DAT"
    if not fdother_path.exists():
        return {"error": "FDOTHER.DAT not found"}
    
    data = fdother_path.read_bytes()
    palette = parse_fdother_palette(fdother_path)
    resource_count = struct.unpack_from("<I", data, 6)[0]
    
    extracted = []
    
    # Key resources from reverse engineering
    key_resources = {
        74: "title",
        76: "background",  
    }
    
    for res_idx, name in key_resources.items():
        if res_idx >= resource_count:
            continue
            
        offset = struct.unpack_from("<I", data, 10 + res_idx * 4)[0]
        
        # Check if it's a nested DAT
        res_data = data[offset:offset + 6]
        if res_data == b"LLLLLL":
            # It's nested - need to parse inner DAT
            inner_data = data[offset:]
            inner_count = struct.unpack_from("<I", inner_data, 6)[0]
            
            # First resource in nested DAT is likely the image
            if inner_count > 0:
                inner_offset = struct.unpack_from("<I", inner_data, 10)[0]
                inner_res = inner_data[inner_offset:]
                
                if len(inner_res) >= 8:
                    width = struct.unpack_from("<I", inner_res, 0)[0]
                    height = struct.unpack_from("<I", inner_res, 4)[0]
                    
                    if width > 0 and width <= 320 and height > 0 and height <= 200:
                        expected = width * height
                        pixels, consumed = decompress_rle(inner_res[8:], expected)
                        if len(pixels) >= expected:
                            pixels = pixels[:expected]
                            bmp_path = output / f"{name}.bmp"
                            write_bmp(bmp_path, width, height, palette, pixels)
                            extracted.append({
                                "resource_id": res_idx,
                                "name": name,
                                "width": width,
                                "height": height,
                                "nested": True,
                                "saved": str(bmp_path),
                            })
        else:
            # Direct RLE data
            if res_idx + 1 < resource_count:
                next_offset = struct.unpack_from("<I", data, 10 + (res_idx + 1) * 4)[0]
            else:
                next_offset = len(data)
            
            res_data = data[offset:next_offset]
            
            if len(res_data) >= 8:
                width = struct.unpack_from("<H", res_data, 0)[0]
                height = struct.unpack_from("<H", res_data, 2)[0]
                
                if width > 0 and width <= 320 and height > 0 and height <= 200:
                    expected = width * height
                    pixels, consumed = decompress_rle(res_data[4:], expected)
                    if len(pixels) >= expected:
                        pixels = pixels[:expected]
                        bmp_path = output / f"{name}.bmp"
                        write_bmp(bmp_path, width, height, palette, pixels)
                        extracted.append({
                            "resource_id": res_idx,
                            "name": name,
                            "width": width,
                            "height": height,
                            "nested": False,
                            "saved": str(bmp_path),
                        })
    
    return {
        "extracted": extracted,
    }


def main() -> int:
    parser = argparse.ArgumentParser(description="Extract FD2 resource formats.")
    parser.add_argument("--source", type=Path, default=Path("game"), help="Game directory path")
    parser.add_argument("--output", type=Path, default=Path("output/fd2_extract"), help="Output directory")
    parser.add_argument("command", nargs="?", default="summary", help="Command: summary, extract, intro-frames, title-bg")
    args = parser.parse_args()
    
    source = args.source.resolve()
    output = args.output.resolve()
    
    if not source.exists():
        print(f"Error: source directory not found: {source}")
        return 1
    
    output.mkdir(parents=True, exist_ok=True)
    
    print(f"FD2 Extract - Source: {source}")
    print(f"Output: {output}")
    print(f"Command: {args.command}")
    print()
    
    if args.command == "summary":
        info = parse_fdother_dat(source / "FDOTHER.DAT")
        print(f"FDOTHER.DAT: {info['resource_count']} resources")
        print(f"  Indexes: {len(info['indexes'])} entries")
        
    elif args.command == "extract":
        info = parse_fdother_dat(source / "FDOTHER.DAT")
        
        # Find and extract 320x200 images
        frames = find_intro_frames(source)
        print(f"Found {len(frames)} potential intro frames (320x200)")
        
    elif args.command == "intro-frames":
        info = extract_intro_frames(source, output)
        print(f"Intro frames: {info.get('frame_count', 0)}")
        for f in info.get('frames', []):
            print(f"  Resource {f['resource_id']}: {f['width']}x{f['height']} -> {Path(f['saved']).name}")
            
    elif args.command == "title-bg":
        info = extract_title_and_bg(source, output)
        print(f"Extracted: {len(info.get('extracted', []))} images")
        for e in info.get('extracted', []):
            print(f"  {e['name']}: {e['width']}x{e['height']} -> {Path(e['saved']).name}")
    
    (output / f"{args.command}_result.json").write_text(
        json.dumps(locals().get("info", {}), indent=2),
        encoding="utf-8"
    )
    
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
