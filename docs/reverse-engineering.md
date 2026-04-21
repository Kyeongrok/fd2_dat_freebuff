# FD2 Reverse-Engineering Baseline

This project started from the original DOS distribution, not a source checkout. The repository is centered on the native port, tooling, and reverse-engineering notes, but the current workspace still carries the original DOS data files because the native build, extractors, and validation harnesses depend on them today.

The original distribution analyzed for these notes consisted of the shipping executable plus asset/data packs:

- `FD2.EXE`: 32-bit DOS executable (DOS/4G protected mode). Requires 386 or higher.
- `*.DAT`: mixed resource containers. Most are image resources with custom RLE compression.
- `FDMUS.DAT`: music data files.
- `FIGANI.DAT`: combat animation data.
- `TAI.DAT`: sound effect data.
- `BG.DAT`: battle background images.
- `FDFIELD.DAT`: map/field data.
- `FDSHAP.DAT`: character shape data.
- `FDTXT.DAT`: game text data.
- `FDICON.B24`: menu icons/font.
- `FD2.SAV`: save file.

## Verified Format Findings

### DAT File Format (General)

All DAT files use a unified index format:
- 6 bytes: header (魔数 "LLLLLL")
- 4 bytes: number of resources (little-endian)
- Then a table of 4-byte offsets per resource
- Each resource can be:
  - RLE-compressed image data (with width/height header)
  - Raw data
  - Palette data

### FDOTHER.DAT Structure

- Resource 0: palette data (768 bytes = 256 * 3 RGB)
- Resource 1-6: various UI graphics
- Resource 7, 8: menu data
- Resource 69-73: intro animation frames (5 frames)
- Resource 74: title image
- Resource 76: background image
- Resource 77: animation data
- Resource 99: unknown
- Resource 101: menu background
- Resource 102: palette data (alternative)

### RLE Compression Format

The FD2 RLE format:
- 4 bytes: width (little-endian)
- 4 bytes: height (little-endian)
- Then compressed pixel data

RLE command encoding (bits):
- 2 bits: command type (00=fill, 01=literal, 10=skip, 11=end)
- 6 bits: count (0-63, +1 = actual count)

Command types:
- 00 (fill): followed by 1 byte of color, repeat count times
- 01 (literal): followed by count bytes of literal data
- 10 (skip): skip count pixels (no data)
- 11 (end): end of data

### Animation Format (ANI.DAT)

- 6 bytes: header with offset table
- Resource offsets stored at 6 + index * 4
- Each resource contains:
  - 165 bytes: header (unknown purpose)
  - Block count at offset 165 (2 bytes)
  - Blocks of compressed animation data

### FDMUS.DAT (Music)

- Music data stored in MDI format
- Multiple instrument tracks
- Uses AdLib/OPL sound cards

### TAI.DAT (Sound Effects)

- Banked sample format
- Multiple sound effects in one file

## Game Startup Flow

1. `start` (0x3CCB4) - Entry point
2. `main` (0x25BF4) - Main function
3. Stack initialization (sub_3702F)
4. Audio system initialization:
   - AIL_startup() (sub_37D3E)
   - Audio driver installation (sub_3AA72)
   - Audio handle allocation (sub_392D0)
5. Load DAT files:
   - FDOTHER.DAT (resources 0-6)
   - FDTXT.DAT (resource 0)
6. Memory allocation:
   - Video buffer: 64000 bytes (0xA0000 segment)
   - Palette buffer: 2560 bytes
   - Various game state buffers
7. Random number initialization
8. Game state initialization (sub_25977)
9. Enter main game loop (sub_25EBB)

### Intro Animation Flow (sub_1F894)

1. Load resources from FDOTHER.DAT:
   - Resource 77: animation data
   - Resource 76: background
   - Resource 74: title
   - Resource 69-73: 5 animation frames
2. Initialize screen:
   - Clear video buffer (memset to 0)
   - Set palette (sub_11D40)
3. Display title:
   - Decompress BG to video buffer (sub_4E98D)
   - Copy to screen (sub_1F525)
   - Video effect (sub_17AA9)
4. Animation playback:
   - Main loop: 535 iterations
   - Each iteration:
     - Copy frame to video buffer (sub_11EB0)
     - Copy to screen (sub_1F525)
     - Check for special frames (trigger effects/sounds)
     - Check for keypress (skip animation)
     - Delay 30ms per frame
5. Fade out (sub_2DF01, 40 steps)
6. Display menu:
   - Load resources 7, 8
   - Display menu text (sub_20421)
   - Display menu options (sub_25B45)
   - Set menu palette (sub_11DF2)
7. Menu loop:
   - Draw menu options (sub_1FF79)
   - Wait for keyboard input
   - Process UP/DOWN/ENTER keys

## Key Function Addresses

| Function | Address | Purpose |
|----------|---------|---------|
| start | 0x3CCB4 | Program entry |
| main | 0x25BF4 | Main function |
| sub_3702F | 0x3702F | Stack init |
| sub_37D3E | 0x37D3E | AIL_startup |
| sub_3AA72 | 0x3AA72 | Audio driver init |
| sub_111BA | 0x111BA | DAT file loader |
| sub_25977 | 0x25977 | Game state init |
| sub_25EBB | 0x25EBB | Main state handler |
| sub_1F894 | 0x1F894 | Intro animation |
| sub_117E7 | 0x117E7 | State machine |
| sub_4E98D | 0x4E98D | RLE decompress |
| sub_11EB0 | 0x11EB0 | Frame copy |
| sub_1F525 | 0x1F525 | Screen refresh |
| sub_17AA9 | 0x17AA9 | Video effects |
| sub_2DF01 | 0x2DF01 | Palette fade |
| sub_1FF79 | 0x1FF79 | Draw menu |

## Key Global Variables

### Video/Graphics
- 0x655360 (0xA0000): Video buffer (64000 bytes, mode 13h)
- 0x53BF7: Palette buffer (2560 bytes)
- 0x53AD5: Palette data (32 bytes)

### DAT Pointers
- 0x53E00: FDOTHER.DAT pointer
- 0x53A59: FDFIELD.DAT pointer
- 0x53A79: FDTXT.DAT pointer
- 0x53A5D: FDSHAP.DAT pointer
- 0x53AC1: FDMUS.DAT pointer

### Game State
- 0x53BFB: Current game state
- 0x53AE9: Unit index

## What The Current Tooling Does

[`tools/fd2_extract.py`](tools/fd2_extract.py) currently:

- identifies DAT resources from FDOTHER.DAT, FDTXT.DAT, etc.
- decodes RLE compressed images
- writes exact palette bytes and pixel index buffers
- emits BMP previews for image resources
- parses ANI.DAT animation resources

[`tools/fd2_dosbox_trace.py`](tools/fd2_dosbox_trace.py) currently:

- runs the original DOS executable under DOSBox-X with file-I/O logging enabled
- captures the full PTY session to a raw startup log
- parses open/read/close events into summary
- makes it practical to measure the original startup asset order

[`tools/fd2_dos_oracle.py`](tools/fd2_dos_oracle.py) currently:

- launches the original DOS executable under the DOSBox-X debugger
- can script breakpoints, register captures, and binary memory dumps
- captures runtime state including registers and memory

## Usage

```bash
python3 tools/fd2_extract.py summary --source game
python3 tools/fd2_extract.py extract --source game --output extracted
python3 tools/fd2_dosbox_trace.py --source game --output startup-trace --time-limit 10
python3 tools/fd2_dos_oracle.py --source game --output intro-oracle
```

## Port Plan For A True DOS-Faithful Reimplementation

1. Lock down every shipped file format.
2. Extract all art, music data, sound data, and runtime constants into deterministic fixtures.
3. Capture runtime behavior from the DOS build:
   - frame timing
   - animation sequence
   - input polling cadence
   - RNG usage
   - menu flow
   - audio playback behavior
4. Rebuild the engine around those fixtures instead of improvising modern behavior.
5. Add equivalence checks:
   - same animation frames
   - same menu transitions
   - same palette and animation sequencing
   - same sound/music event ordering
6. Only after the data path is stable, tackle the remaining executable-only behavior inside `FD2.EXE`.

## Immediate Next Reverse-Engineering Targets

- Complete RLE decompression for all DAT resources
- Map ANI.DAT animation format to exact frame sequences
- Determine exact animation timing (frame delays)
- Map menu state transitions exactly
- Characterize FDMUS.DAT format
- Characterize TAI.DAT sound format
- Use DOSBox-X to capture frame-accurate intro animation traces

## External References

- Miles Sound System documentation (AIL library)
- DOS/4G protected mode runtime
- VGA mode 13h graphics programming
