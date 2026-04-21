#!/usr/bin/env python3
"""
FD2 DOS Oracle - 逆向分析工具
通过DOSBox-X调试器捕获运行时状态

使用方法:
  1. 手动运行DOSBox-X调试器
  2. 设置断点: bp 1F894 (开场动画)
  3. 按F5运行
  4. 命中时用命令查看状态

重要地址 (CS:偏移):
  - 0x1F894: 开场动画 (sub_1F894)
  - 0x4E98D: RLE解压 (sub_4E98D)
  - 0x11EB0: 帧复制 (sub_11EB0)
  - 0x111BA: DAT加载 (sub_111BA)

内存地址:
  - 0x53E00: FDOTHER.DAT指针
  - 0x655360: 视频缓冲区 (A000:0000)
  - 0x53BF7: 调色板
"""

import json
from pathlib import Path


# 关键函数偏移 (来自IDA逆向)
FUNCTION_OFFSETS = {
    "start": 0x3CCB4,
    "main": 0x25BF4,
    "stack_init": 0x3702F,
    "ail_startup": 0x37D3E,
    "audio_init": 0x3AA72,
    "dat_loader": 0x111BA,
    "game_state_init": 0x25977,
    "main_handler": 0x25EBB,
    "intro_anim": 0x1F894,
    "state_machine": 0x117E7,
    "rle_decompress": 0x4E98D,
    "frame_copy": 0x11EB0,
    "screen_refresh": 0x1F525,
    "video_effect": 0x17AA9,
    "palette_fade": 0x2DF01,
    "palette_set": 0x11D40,
    "menu_draw": 0x1FF79,
    "menu_handler": 0x20421,
    "key_check": 0x10620,
}

# 关键内存地址
MEMORY_LOCATIONS = {
    "FDOTHER_ptr": 0x53E00,
    "FDTXT_ptr": 0x53A79,
    "FDFIELD_ptr": 0x53A59,
    "FDSHAP_ptr": 0x53A5D,
    "FDMUS_ptr": 0x53AC1,
    "Video_buffer": 0x655360,
    "Palette": 0x53BF7,
    "GameState": 0x53BFB,
}


def generate_debugger_guide():
    """生成调试器使用指南"""
    
    print("=" * 70)
    print("FD2 DOS Oracle - Debugger Guide")
    print("=" * 70)
    
    print("""
This tool documents the key addresses for reverse-engineering FD2
using DOSBox-X debugger.

Manual Debugging Steps:
-----------------------
1. Start DOSBox-X with debug mode:
   $ dosbox-x -defaultconf -debug -break-start -nogui

2. In DOSBox-X, mount and start FD2:
   I-> mount c game
   I-> c:
   I-> fd2.exe

3. Set breakpoints for key functions:
   I-> bp 1F894    ; intro animation
   I-> bp 4E98D    ; RLE decompress
   I-> bp 11EB0    ; frame copy

4. Press F5 to run, debugger will pause at breakpoints

5. At each breakpoint, examine:
   - Registers: r
   - Memory: dd 53E00 8    (FDOTHER pointer)
   - Disassembly: u eip 10

6. Single step with: t

Key Function Offsets:
---------------------""")
    
    for name, offset in sorted(FUNCTION_OFFSETS.items(), key=lambda x: x[1]):
        print(f"  {name:25} CS:{offset:05X}")
    
    print("""
Key Memory Locations:
---------------------""")
    
    for name, addr in sorted(MEMORY_LOCATIONS.items(), key=lambda x: x[1]):
        print(f"  {name:25} 0x{addr:08X}")
    
    print("""
Debugger Commands Reference:
---------------------------
  r           - Show registers
  r cs        - Show specific register
  dd ADR N    - Dump N dwords at address
  u ADR N     - Disassemble N instructions
  bp ADR      - Set breakpoint
  bl          - List breakpoints
  g           - Go (run until breakpoint)
  t           - Trace (single step)
  q           - Quit

FD2 Intro Animation Flow:
-------------------------
1. Load FDOTHER.DAT resources 0-6 (UI graphics)
2. Load FDOTHER.DAT resources 7-8 (menu)
3. Load FDTXT.DAT resource 0 (text)
4. Load intro resources:
   - Resource 77: Animation data
   - Resource 76: Background
   - Resource 74: Title
   - Resources 69-73: 5 animation frames
5. Play animation: 535 frames @ 30ms = 16.05s
   - Frame 450: special effect
   - Frame 330, 210, 110: sound effect
   - Frame 10: special effect
6. Display menu (resource 101)
""")


def save_reference_data(output_dir: Path):
    """保存参考数据文件"""
    output_dir.mkdir(parents=True, exist_ok=True)
    
    # 函数偏移表
    with open(output_dir / "function_offsets.json", "w") as f:
        json.dump({
            "description": "FD2 function offsets (relative to CS)",
            "note": "Add CS value (from 'r cs') to get absolute address",
            "cs": "determine at runtime with 'r cs'",
            "functions": {
                name: {
                    "offset": offset,
                    "hex": f"0x{offset:05X}",
                    "debugger_cmd": f"bp CS:{offset:04X}"
                }
                for name, offset in FUNCTION_OFFSETS.items()
            }
        }, f, indent=2)
    
    # 内存地址表
    with open(output_dir / "memory_locations.json", "w") as f:
        json.dump({
            "description": "FD2 key memory locations",
            "locations": {
                name: {
                    "address": addr,
                    "hex": f"0x{addr:08X}",
                    "dump_cmd": f"dd {addr:08X} 4"
                }
                for name, addr in MEMORY_LOCATIONS.items()
            }
        }, f, indent=2)
    
    # 调试命令脚本
    with open(output_dir / "debug_commands.txt", "w") as f:
        f.write("""; FD2 Debugger Commands Script
; Copy-paste these into DOSBox-X debugger

; Get code segment
r cs

; Set breakpoints
bp CS:1F894    ; intro animation
bp CS:4E98D    ; RLE decompress  
bp CS:11EB0    ; frame copy
bp CS:111BA    ; DAT loader

; Memory dumps
dd 53E00 4     ; FDOTHER pointer
dd 53BF7 4     ; Palette
dd 655360 16   ; Video buffer

; Run game
g

; At breakpoint, examine:
r              ; registers
u eip 10       ; disassemble
dd [address]   ; memory
t              ; single step
""")
    
    print(f"\nReference data saved to: {output_dir}")
    print(f"  - function_offsets.json")
    print(f"  - memory_locations.json")
    print(f"  - debug_commands.txt")


def main():
    output_dir = Path("output/fd2_debugger")
    
    generate_debugger_guide()
    save_reference_data(output_dir)
    
    print("\n" + "=" * 70)
    print("To trace FD2 intro animation:")
    print("1. Run: dosbox-x -defaultconf -debug -break-start")
    print("2. Paste commands from: output/fd2_debugger/debug_commands.txt")
    print("3. At breakpoint, use 't' to step and capture state")
    print("=" * 70)


if __name__ == "__main__":
    main()
