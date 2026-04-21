#!/usr/bin/env python3
"""
FD2 Comprehensive DAT Extraction Tool

Extracts all resources from all FD2 DAT files into organized output.
Handles RLE images, nested DATs, palettes, raw data, and animation frames.

Usage:
    python3 extract_all.py --game game --output output/extracted
    python3 extract_all.py --game game --output output/extracted --dat FDOTHER.DAT
    python3 extract_all.py --game game --output output/extracted --images-only
"""

from __future__ import annotations

import argparse
import struct
import json
from pathlib import Path
from typing import Any, Optional

# Constants
DAT_MAGIC = b"LLLLLL"
SCREEN_WIDTH = 320
SCREEN_HEIGHT = 200


def read_dat_header(data: bytes) -> Optional[dict]:
    """Parse DAT file header, return None if not a valid DAT."""
    if len(data) < 10 or data[:6] != DAT_MAGIC:
        return None
    
    resource_count = struct.unpack_from("<I", data, 6)[0]
    offsets = []
    for i in range(resource_count):
        offset = 10 + i * 4
        if offset + 4 > len(data):
            break
        offsets.append(struct.unpack_from("<I", data, offset)[0])
    
    return {"resource_count": resource_count, "offsets": offsets}


def get_resource_data(data: bytes, offsets: list[int], idx: int) -> bytes:
    """Extract raw resource data by index."""
    start = offsets[idx]
    end = offsets[idx + 1] if idx + 1 < len(offsets) else len(data)
    return data[start:end]


def try_read_rle_header(res_data: bytes) -> Optional[tuple[int, int]]:
    """Try to read 16-bit little-endian width/height header."""
    if len(res_data) < 4:
        return None
    w, h = struct.unpack_from("<HH", res_data, 0)
    if 0 < w <= 640 and 0 < h <= 480:
        return (w, h)
    return None


def try_read_32bit_header(res_data: bytes) -> Optional[tuple[int, int]]:
    """Try to read 32-bit little-endian width/height header."""
    if len(res_data) < 8:
        return None
    w, h = struct.unpack_from("<II", res_data, 0)
    if 0 < w <= 640 and 0 < h <= 480:
        return (w, h)
    return None


def decompress_rle(data: bytes, width: int, height: int) -> bytes:
    """
    Decompress FD2 RLE data (from IDA sub_4E98D).
    Returns pixel index buffer (width * height bytes).
    """
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
    # Pad pixels to full size
    total = width * height
    if len(pixels) < total:
        pixels = pixels + bytes(total - len(pixels))
    elif len(pixels) > total:
        pixels = pixels[:total]
    
    # Build palette (256 colors, BGR + padding)
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
    
    # BMP structures
    row_size = (width + 3) & ~3
    image_size = row_size * height
    data_offset = 14 + 40 + len(palette_data)
    
    # File header
    bmp = b"BM"
    bmp += struct.pack("<I", data_offset + image_size)
    bmp += struct.pack("<HH", 0, 0)
    bmp += struct.pack("<I", data_offset)
    
    # DIB header (BITMAPINFOHEADER)
    bmp += struct.pack("<IiiHHIIiiII",
        40,           # header size
        width,        # width
        height,       # height (positive = bottom-up)
        1,            # planes
        8,            # bits per pixel
        0,            # compression (BI_RGB)
        image_size,   # image size
        0, 0,         # resolution
        256, 0        # colors used/important
    )
    
    bmp += palette_data
    
    # Pixel data (bottom-up)
    for y in range(height - 1, -1, -1):
        row_start = y * width
        bmp += pixels[row_start:row_start + width]
        padding = row_size - width
        if padding > 0:
            bmp += b"\x00" * padding
    
    path.write_bytes(bmp)


def classify_resource(res_data: bytes) -> dict:
    """Classify a resource and return metadata."""
    info: dict[str, Any] = {"size": len(res_data)}
    
    if len(res_data) < 6:
        info["type"] = "tiny_raw"
        return info
    
    # Check for nested DAT (validate minimum size and offset validity)
    if res_data[:6] == DAT_MAGIC:
        inner = read_dat_header(res_data)
        if inner:
            # Validate: minimum size = 10 + resource_count * 4
            min_size = 10 + inner["resource_count"] * 4
            if len(res_data) >= min_size:
                # Also validate that all offsets point within the data
                all_valid = True
                for i in range(inner["resource_count"]):
                    off = 10 + i * 4
                    if off + 4 > len(res_data):
                        all_valid = False
                        break
                    ptr = struct.unpack_from("<I", res_data, off)[0]
                    if ptr >= len(res_data):
                        all_valid = False
                        break
                if all_valid:
                    info["type"] = "nested_dat"
                    info["inner_resource_count"] = inner["resource_count"]
                else:
                    info["type"] = "raw_data"
            else:
                # False positive - data happens to start with LLLLLL
                info["type"] = "raw_data"
        else:
            info["type"] = "unknown"
        return info
    
    # Try 16-bit header
    dims16 = try_read_rle_header(res_data)
    if dims16:
        w, h = dims16
        expected = w * h
        compressed_size = len(res_data) - 4
        
        # Heuristic: if compressed data is reasonable for RLE
        if compressed_size > 0 and expected > 0:
            compression_ratio = compressed_size / expected if expected > 0 else 0
            info["type"] = "rle_image"
            info["width"] = w
            info["height"] = h
            info["expected_pixels"] = expected
            info["compressed_size"] = compressed_size
            info["compression_ratio"] = round(compression_ratio, 3)
            return info
    
    # Try 32-bit header
    dims32 = try_read_32bit_header(res_data)
    if dims32:
        w, h = dims32
        info["type"] = "rle_image_32bit"
        info["width"] = w
        info["height"] = h
        return info
    
    # Check if it looks like palette data (768 bytes)
    if len(res_data) == 768:
        info["type"] = "palette"
        return info
    
    # Check for text-like content (high ratio of printable ASCII)
    printable = sum(1 for b in res_data[:min(100, len(res_data))] if 32 <= b <= 126 or b in (10, 13, 9))
    if printable > min(100, len(res_data)) * 0.7:
        info["type"] = "text"
        return info
    
    info["type"] = "raw_data"
    return info


def extract_dat_resources(
    dat_path: Path,
    output_dir: Path,
    palette: Optional[bytes] = None,
    images_only: bool = False,
) -> list[dict]:
    """
    Extract all resources from a single DAT file.
    Returns list of extraction results.
    """
    data = dat_path.read_bytes()
    header = read_dat_header(data)
    
    if not header:
        print(f"  SKIP: {dat_path.name} - not a valid DAT file")
        return []
    
    resource_count = header["resource_count"]
    offsets = header["offsets"]
    
    print(f"  Processing {dat_path.name}: {resource_count} resources")
    
    results = []
    extracted_count = 0
    
    for idx in range(resource_count):
        res_data = get_resource_data(data, offsets, idx)
        info = classify_resource(res_data)
        info["index"] = idx
        info["offset"] = offsets[idx]
        
        # Handle nested DATs recursively
        if info["type"] == "nested_dat":
            nested_dir = output_dir / f"res_{idx:04d}_nested"
            nested_dir.mkdir(parents=True, exist_ok=True)
            
            # Write the inner DAT file first
            inner_path = nested_dir / f"nested_{dat_path.stem}.dat"
            inner_path.write_bytes(res_data)
            
            inner_header = read_dat_header(res_data)
            if inner_header:
                inner_results = extract_dat_resources(
                    inner_path,
                    nested_dir,
                    palette=palette,
                    images_only=images_only,
                )
                info["nested_extracted"] = len(inner_results)
                results.extend(inner_results)
            
            info["type"] = "nested_dat_extracted"
            results.append(info)
            continue
        
        # Skip non-image resources if images_only
        if images_only and info["type"] not in ("rle_image", "rle_image_32bit"):
            results.append(info)
            continue
        
        # Extract RLE images
        if info["type"] in ("rle_image", "rle_image_32bit"):
            w, h = info["width"], info["height"]
            header_size = 4 if info["type"] == "rle_image" else 8
            compressed = res_data[header_size:]
            
            try:
                pixels = decompress_rle(compressed, w, h)
                if len(pixels) > 0:
                    bmp_path = output_dir / f"res_{idx:04d}_{w}x{h}.bmp"
                    write_bmp(bmp_path, w, h, palette, pixels)
                    info["bmp_path"] = str(bmp_path)
                    info["pixels_extracted"] = len(pixels)
                    extracted_count += 1
            except Exception as e:
                info["error"] = str(e)
            
            results.append(info)
            continue
        
        # Extract raw data
        if not images_only:
            raw_path = output_dir / f"res_{idx:04d}_{info['type']}.bin"
            raw_path.write_bytes(res_data)
            info["raw_path"] = str(raw_path)
        
        results.append(info)
    
    print(f"    Extracted {extracted_count} images, {len(results)} total resources")
    return results


def find_palette(dat_path: Path) -> Optional[bytes]:
    """Find palette data in a DAT file (typically 768 bytes)."""
    data = dat_path.read_bytes()
    header = read_dat_header(data)
    if not header:
        return None
    
    offsets = header["offsets"]
    
    # Try common palette resource indices
    for idx in [7, 0, 1, 2]:
        if idx >= len(offsets):
            continue
        res_data = get_resource_data(data, offsets, idx)
        if len(res_data) == 768:
            return res_data
    
    # Search for 768-byte resources
    for idx in range(len(offsets)):
        res_data = get_resource_data(data, offsets, idx)
        if len(res_data) == 768:
            return res_data
    
    return None


def main() -> int:
    parser = argparse.ArgumentParser(description="Extract all FD2 DAT resources")
    parser.add_argument("--game", type=Path, default=Path("game"), help="Game directory")
    parser.add_argument("--output", type=Path, default=Path("output/extracted"), help="Output directory")
    parser.add_argument("--dat", type=str, default=None, help="Process only this DAT file")
    parser.add_argument("--images-only", action="store_true", help="Only extract image resources")
    args = parser.parse_args()
    
    game_dir = args.game.resolve()
    output_dir = args.output.resolve()
    output_dir.mkdir(parents=True, exist_ok=True)
    
    if not game_dir.exists():
        print(f"Error: game directory not found: {game_dir}")
        return 1
    
    # Find all DAT files
    dat_files = sorted(game_dir.glob("*.DAT"))
    if args.dat:
        dat_files = [game_dir / args.dat.upper()]
        if not dat_files[0].exists():
            print(f"Error: DAT file not found: {dat_files[0]}")
            return 1
    
    print(f"FD2 DAT Extraction Tool")
    print(f"Game: {game_dir}")
    print(f"Output: {output_dir}")
    print(f"Found {len(dat_files)} DAT files")
    print()
    
    # First pass: find palette
    palette = None
    for dat_path in dat_files:
        pal = find_palette(dat_path)
        if pal:
            print(f"Found palette in {dat_path.name}")
            palette = pal
            # Save palette as reference
            pal_path = output_dir / "palette.dat"
            pal_path.write_bytes(pal)
            break
    
    if not palette:
        print("WARNING: No palette found, images will use grayscale fallback")
    
    # Second pass: extract all resources
    all_results = {}
    total_images = 0
    total_resources = 0
    
    for dat_path in dat_files:
        dat_output = output_dir / dat_path.stem
        dat_output.mkdir(parents=True, exist_ok=True)
        
        results = extract_dat_resources(
            dat_path,
            dat_output,
            palette=palette,
            images_only=args.images_only,
        )
        
        all_results[dat_path.name] = {
            "resource_count": len(results),
            "resources": results,
        }
        
        total_resources += len(results)
        total_images += sum(1 for r in results if r.get("bmp_path"))
    
    # Save manifest
    manifest = {
        "game_directory": str(game_dir),
        "palette_found": palette is not None,
        "total_dat_files": len(dat_files),
        "total_resources": total_resources,
        "total_images_extracted": total_images,
        "dat_files": all_results,
    }
    
    manifest_path = output_dir / "manifest.json"
    manifest_path.write_text(json.dumps(manifest, indent=2), encoding="utf-8")
    
    print()
    print(f"Extraction complete!")
    print(f"  DAT files processed: {len(dat_files)}")
    print(f"  Total resources: {total_resources}")
    print(f"  Images extracted: {total_images}")
    print(f"  Manifest: {manifest_path}")
    
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
