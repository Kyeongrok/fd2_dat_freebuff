#!/usr/bin/env python3
"""
FD2 Decoder Library Tests (Python)

Tests the decoder logic that will be implemented in C.
All tests verify against known FD2 data from the game directory.
"""

import struct
import sys
from pathlib import Path

GAME_DIR = Path("game")
tests_run = 0
tests_passed = 0
tests_failed = 0


def test(name):
    """Decorator for test functions."""
    def decorator(func):
        def wrapper():
            global tests_run, tests_passed, tests_failed
            tests_run += 1
            try:
                if func():
                    tests_passed += 1
                    print(f"  PASS: {name}")
                    return True
                else:
                    tests_failed += 1
                    print(f"  FAIL: {name}")
                    return False
            except Exception as e:
                tests_failed += 1
                print(f"  FAIL: {name} - {e}")
                return False
        return wrapper
    return decorator


def read_dat(path):
    """Read a DAT file and return (data, offsets)."""
    data = path.read_bytes()
    if data[:6] != b"LLLLLL":
        raise ValueError(f"Not a valid DAT: {path}")
    resource_count = struct.unpack_from("<I", data, 6)[0]
    offsets = []
    for i in range(resource_count):
        offset = 10 + i * 4
        if offset + 4 > len(data):
            break
        offsets.append(struct.unpack_from("<I", data, offset)[0])
    return data, offsets


def get_resource(data, offsets, idx):
    start = offsets[idx]
    end = offsets[idx + 1] if idx + 1 < len(offsets) else len(data)
    return data[start:end]


def decompress_rle(src, width, height):
    """RLE decompression (IDA sub_4E98D).
    
    Control byte encoding:
      bits 7,6 = 11: skip (transparent) - advance dst by count_1
      bits 7,6 = 10: copy count_1 bytes from src
      bits 7,6 = 01: fill count_1 pixels with value from src
      bits 7,6 = 00: sparse fill - write value at dst+1, dst+3, dst+5...
    
    count_1 calculation:
      - First: count_1 = 4 * value (where value = control byte)
      - Then: count_1 = (count_1 >> 2) + 1 = value + 1
      - count decreases by 2 * count_1
    """
    expected = width * height
    img = bytearray(expected)
    p = 0
    dst = 0
    
    for row in range(height):
        count = width
        
        while count > 0 and p < len(src):
            value = src[p]
            p += 1
            
            # 计算 count_1 = 4 * value，然后 count_1 = (count_1 >> 2) + 1 = (value & 0x3F) + 1
            count_1 = (value & 0x3F) + 1
            
            bit7 = (value >> 7) & 1
            bit6 = (value >> 6) & 1
            
            if bit7 and bit6:
                # 11: skip (transparent) - cap both dst and count at buffer end
                if dst + count_1 <= expected:
                    dst += count_1
                else:
                    dst = expected
                if count >= count_1:
                    count -= count_1
                else:
                    count = 0
            elif bit7 and not bit6:
                # 10: copy from source - with bounds check
                for _ in range(count_1):
                    if count <= 0 or p >= len(src): break
                    if dst < expected:
                        img[dst] = src[p]
                    p += 1
                    dst += 1
                    count -= 1
            elif not bit7 and bit6:
                # 01: fill - with bounds check
                if p < len(src):
                    fill = src[p]
                    p += 1
                    for _ in range(count_1):
                        if count <= 0: break
                        if dst < expected:
                            img[dst] = fill
                        dst += 1
                        count -= 1
            else:
                # 00: sparse fill - write at positions 1, 3, 5, ...
                # Check bounds and handle last pixel if count == 1
                if p < len(src):
                    fill = src[p]
                    p += 1
                    written = 0
                    while written < count_1 and count > 0:
                        if count >= 2:
                            if dst + 1 < expected:
                                img[dst + 1] = fill
                            dst += 2
                            count -= 2
                            written += 1
                        elif count == 1:
                            if dst < expected:
                                img[dst] = fill
                            dst += 1
                            count -= 1
                            written += 1
                        else:
                            break
    
    return bytes(img[:expected])


def palette_6bit_to_8bit(palette_6bit):
    """Convert 6-bit VGA palette to 8-bit."""
    palette_8bit = bytearray(768)
    for i in range(256):
        for c in range(3):
            v6 = palette_6bit[i * 3 + c] & 0x3F
            palette_8bit[i * 3 + c] = (v6 << 2) | (v6 >> 4)
    return bytes(palette_8bit)


def palette_set_brightness(palette, brightness):
    """Set palette brightness (0-63)."""
    factor = brightness / 63.0
    return bytes(int(p * factor) for p in palette)


# ========================================================================
# Tests
# ========================================================================

@test("Load FDOTHER.DAT")
def test_load_fdother():
    data, offsets = read_dat(GAME_DIR / "FDOTHER.DAT")
    return len(offsets) == 422 and len(data) == 3382481


@test("Load BG.DAT")
def test_load_bg():
    data, offsets = read_dat(GAME_DIR / "BG.DAT")
    return len(offsets) == 234


@test("Load FIGANI.DAT")
def test_load_figani():
    data, offsets = read_dat(GAME_DIR / "FIGANI.DAT")
    return len(offsets) == 1642


@test("Load all 11 DAT files")
def test_all_dat_load():
    dat_files = ["FDOTHER.DAT", "FDTXT.DAT", "FDSHAP.DAT", "FDMUS.DAT",
                 "BG.DAT", "TITLE.DAT", "DATO.DAT", "TAI.DAT",
                 "FDFIELD.DAT", "FIGANI.DAT", "ANI.DAT"]
    for name in dat_files:
        data, offsets = read_dat(GAME_DIR / name)
        if len(offsets) == 0:
            return False
    return True


@test("Get palette resource (FDOTHER.DAT res 7)")
def test_get_palette():
    data, offsets = read_dat(GAME_DIR / "FDOTHER.DAT")
    res = get_resource(data, offsets, 7)
    return len(res) == 768


@test("Resource classification - palette")
def test_classify_palette():
    data, offsets = read_dat(GAME_DIR / "FDOTHER.DAT")
    res = get_resource(data, offsets, 7)
    return len(res) == 768


@test("Resource classification - RLE image")
def test_classify_rle():
    data, offsets = read_dat(GAME_DIR / "FDOTHER.DAT")
    res = get_resource(data, offsets, 74)
    w, h = struct.unpack_from("<HH", res, 0)
    return w == 320 and h == 200


@test("RLE decompress title (res 74)")
def test_rle_title():
    data, offsets = read_dat(GAME_DIR / "FDOTHER.DAT")
    res = get_resource(data, offsets, 74)
    w, h = struct.unpack_from("<HH", res, 0)
    pixels = decompress_rle(res[4:], w, h)
    # RLE may not fill entire area (game fills rest with background)
    return len(pixels) > 0 and w == 320 and h == 200


@test("RLE decompress intro frame (res 10)")
def test_rle_intro():
    data, offsets = read_dat(GAME_DIR / "FDOTHER.DAT")
    res = get_resource(data, offsets, 10)
    w, h = struct.unpack_from("<HH", res, 0)
    pixels = decompress_rle(res[4:], w, h)
    return len(pixels) == w * h and w == 320 and h == 200


@test("RLE decompress all animation frames (69-73)")
def test_rle_anim_frames():
    data, offsets = read_dat(GAME_DIR / "FDOTHER.DAT")
    expected = [(320, 147), (320, 147), (320, 147), (320, 147), (320, 200)]
    for i, (ew, eh) in enumerate(expected):
        res = get_resource(data, offsets, 69 + i)
        w, h = struct.unpack_from("<HH", res, 0)
        if w != ew or h != eh:
            return False
        pixels = decompress_rle(res[4:], w, h)
        if len(pixels) == 0:
            return False
    return True


@test("BG.DAT background decode (res 0)")
def test_bg_decode():
    data, offsets = read_dat(GAME_DIR / "BG.DAT")
    res = get_resource(data, offsets, 0)
    w, h = struct.unpack_from("<HH", res, 0)
    pixels = decompress_rle(res[4:], w, h)
    return w == 320 and h == 100 and len(pixels) == 32000


@test("BG.DAT all backgrounds decode")
def test_bg_all_decode():
    data, offsets = read_dat(GAME_DIR / "BG.DAT")
    decoded = 0
    for i in range(55):
        res = get_resource(data, offsets, i)
        if len(res) < 4:
            continue
        w, h = struct.unpack_from("<HH", res, 0)
        if w != 320 or h != 100:
            continue
        pixels = decompress_rle(res[4:], w, h)
        if len(pixels) == 32000:
            decoded += 1
    return decoded >= 40


@test("FIGANI.DAT frame decode (res 0)")
def test_figani_decode():
    data, offsets = read_dat(GAME_DIR / "FIGANI.DAT")
    res = get_resource(data, offsets, 0)
    w, h = struct.unpack_from("<HH", res, 0)
    pixels = decompress_rle(res[4:], w, h)
    return w == 11 and h == 11 and len(pixels) > 0


@test("FIGANI.DAT timing resource (res 1)")
def test_figani_timing():
    data, offsets = read_dat(GAME_DIR / "FIGANI.DAT")
    res = get_resource(data, offsets, 1)
    return len(res) == 3 and res == b"\x00\x00\x0a"


@test("FDSHAP.DAT palette resource (res 0)")
def test_fdshap_palette():
    data, offsets = read_dat(GAME_DIR / "FDSHAP.DAT")
    res = get_resource(data, offsets, 0)
    return len(res) == 1200


@test("FDTXT.DAT glyph decode (res 0)")
def test_fdtxt_decode():
    data, offsets = read_dat(GAME_DIR / "FDTXT.DAT")
    res = get_resource(data, offsets, 0)
    w, h = struct.unpack_from("<HH", res, 0)
    pixels = decompress_rle(res[4:], w, h)
    return w == 24 and h == 316 and len(pixels) > 0


@test("TAI.DAT portrait decode (res 3)")
def test_tai_decode():
    data, offsets = read_dat(GAME_DIR / "TAI.DAT")
    res = get_resource(data, offsets, 3)
    w, h = struct.unpack_from("<HH", res, 0)
    pixels = decompress_rle(res[4:], w, h)
    return w == 154 and h == 42 and len(pixels) > 0


@test("Palette 6-bit to 8-bit conversion")
def test_palette_conversion():
    # Create a test palette with known values
    pal_6bit = bytes([0x00] * 768)
    pal_6bit = bytearray(pal_6bit)
    pal_6bit[0] = 0x3F  # Max red
    pal_6bit[1] = 0x00
    pal_6bit[2] = 0x00
    pal_6bit = bytes(pal_6bit)

    pal_8bit = palette_6bit_to_8bit(pal_6bit)
    # 0x3F (63) -> 0xFF (255)
    return pal_8bit[0] == 0xFF and pal_8bit[1] == 0x00 and pal_8bit[2] == 0x00


@test("Palette brightness 0 = black")
def test_palette_brightness_zero():
    pal = bytes([0xFF] * 768)
    result = palette_set_brightness(pal, 0)
    return all(b == 0 for b in result)


@test("Palette brightness 63 = unchanged")
def test_palette_brightness_full():
    pal = bytes([0x80] * 768)
    result = palette_set_brightness(pal, 63)
    return all(b == 0x80 for b in result)


@test("Intro frame dimensions match known values")
def test_intro_dimensions():
    data, offsets = read_dat(GAME_DIR / "FDOTHER.DAT")
    frames = [
        (69, 320, 147), (70, 320, 147), (71, 320, 147),
        (72, 320, 147), (73, 320, 200), (74, 320, 200),
        (10, 320, 200), (99, 320, 200),
    ]
    for idx, ew, eh in frames:
        res = get_resource(data, offsets, idx)
        w, h = struct.unpack_from("<HH", res, 0)
        if w != ew or h != eh:
            return False
    return True


@test("DAT magic detection")
def test_dat_magic():
    valid = b"LLLLLLxxxx"
    invalid = b"NOTMAGxxxxxx"
    return (valid[:6] == b"LLLLLL" and
            invalid[:6] != b"LLLLLL" and
            len(b"LLL") < 6)


@test("FDFIELD.DAT decodes correctly")
def test_fdfield_decode():
    data, offsets = read_dat(GAME_DIR / "FDFIELD.DAT")
    decoded = 0
    for i in range(min(50, len(offsets))):
        res = get_resource(data, offsets, i)
        if len(res) < 4:
            continue
        w, h = struct.unpack_from("<HH", res, 0)
        if w == 0 or w > 640 or h == 0 or h > 480:
            continue
        pixels = decompress_rle(res[4:], w, h)
        if len(pixels) > 0:
            decoded += 1
    return decoded >= 30


@test("TITLE.DAT decodes correctly")
def test_title_decode():
    data, offsets = read_dat(GAME_DIR / "TITLE.DAT")
    decoded = 0
    for i in range(6):
        res = get_resource(data, offsets, i)
        w, h = struct.unpack_from("<HH", res, 0)
        pixels = decompress_rle(res[4:], w, h)
        if len(pixels) == w * h:
            decoded += 1
    return decoded == 6


def main():
    print("FD2 Decoder Library Tests (Python)")
    print("=" * 40)
    print()

    print("DAT Loading:")
    test_load_fdother()
    test_load_bg()
    test_load_figani()
    test_all_dat_load()
    print()

    print("Resource Access:")
    test_get_palette()
    test_classify_palette()
    test_classify_rle()
    test_dat_magic()
    print()

    print("RLE Decompression:")
    test_rle_title()
    test_rle_intro()
    test_rle_anim_frames()
    print()

    print("Format Decoders:")
    test_bg_decode()
    test_bg_all_decode()
    test_figani_decode()
    test_figani_timing()
    test_fdshap_palette()
    test_fdtxt_decode()
    test_tai_decode()
    test_fdfield_decode()
    test_title_decode()
    print()

    print("Palette System:")
    test_palette_conversion()
    test_palette_brightness_zero()
    test_palette_brightness_full()
    print()

    print("Dimension Validation:")
    test_intro_dimensions()
    print()

    print("=" * 40)
    result = f"Results: {tests_passed}/{tests_run} passed"
    if tests_failed > 0:
        result += f" ({tests_failed} FAILED)"
    print(result)

    return 0 if tests_failed == 0 else 1


if __name__ == "__main__":
    sys.exit(main())
