# FD2 Port Architecture

The target is not a "modern remake." The target is a deterministic reimplementation that reproduces the DOS build's behavior, then wraps that core in a platform layer for modern hosts.

## Core Rule

The port must treat DOS behavior as the spec:

- same asset formats
- same simulation order
- same animation playback
- same renderer ordering
- same menu flow
- same sound/music event timing

The platform layer should be replaceable. The game core should not know whether it is running on DOS or anything else.

## Recommended Split

### `game_data`

Responsibilities:

- parse original `*.DAT`, `*.B24`, `FDMUS.DAT`, `FIGANI.DAT`, and `FD2.EXE`-derived tables
- expose exact typed structures for images, sounds, music, and startup/runtime constants
- preserve raw values alongside interpreted fields where semantics are still incomplete

Why:

- this is the lowest-risk path to a future native loader
- it keeps reverse engineering and porting on the same data model

### `game_core`

Responsibilities:

- deterministic fixed-step simulation
- player motion and resource logic
- demo playback
- menu flow and state transitions
- runtime sequencing for intro, menu, and in-game states

Requirements:

- no direct rendering API access
- no direct audio API access
- all timing comes from explicit frames, not wall clock

### `game_renderer_ref`

Responsibilities:

- software renderer matching DOS ordering and composition
- RLE decompression for images
- palette handling
- animation frame sequencing

Requirements:

- CPU-first reference implementation
- frame buffer output should be byte-comparable or CRC-comparable in tests

### `game_audio_ref`

Responsibilities:

- sample playback for `TAI.DAT` (sound effects)
- music sequencing for `FDMUS.DAT`
- exact event scheduling

Requirements:

- event order must be testable without an actual sound device
- "what was scheduled" should be inspectable in logs/tests

### `platform_host`

Responsibilities:

- window creation
- input collection
- audio device output
- file location and save/config paths

Requirements:

- keep host I/O outside `game_core`
- feed the core explicit input/frame/audio commands

## Validation Harness

The port should ship with non-optional equivalence checks:

1. startup asset order:
   compare against the DOSBox-X startup trace
2. intro animation:
   verify frame sequence and timing against the DOS build
3. menu flow:
   verify menu state transitions
4. frame checks:
   capture reference frames for intro/menu/gameplay
5. audio checks:
   compare scheduled music/sfx events before worrying about waveform-perfect output

## Current Best Input Artifacts

- [`tools/fd2_extract.py`](tools/fd2_extract.py)
- [`tools/fd2_dosbox_trace.py`](tools/fd2_dosbox_trace.py)
- [`tools/fd2_dos_oracle.py`](tools/fd2_dos_oracle.py)
- [`docs/FD2_Startup_Flow_Analysis.md`](docs/FD2_Startup_Flow_Analysis.md)
- [`docs/DAT文件结构分析.md`](docs/DAT文件结构分析.md)

Useful generated outputs:

- extracted images from DAT files
- RLE decompression parameters
- animation frame timing

## Current Status

- DAT file formats identified and documented
- RLE decompression working for FDOTHER.DAT resources
- Animation playback flow traced (535 frames, 5 animation frames)
- DOSBox-X debugging working
- SDL2 environment configured

## Near-Term Milestones

1. Complete RLE decompression for all DAT resources
2. Capture frame-accurate intro animation trace from DOSBox-X
3. Verify animation frame timing (535 iterations, delays)
4. Match intro animation exactly in native implementation
5. Verify menu flow transitions
