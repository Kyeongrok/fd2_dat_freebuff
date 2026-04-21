#!/usr/bin/env python3
"""
FD2 DOSBox-X 调试追踪工具
用于通过调试器逆向分析FD2，1:1还原游戏行为
"""

import json
from pathlib import Path


# 关键函数偏移 (来自IDA Pro逆向工程)
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
    "anim_main_loop": 0x1F9D6,
    "state_machine": 0x117E7,
    "frame_copy": 0x11EB0,
    "screen_refresh": 0x1F525,
    "rle_decompress": 0x4E98D,
    "palette_set": 0x11D40,
    "video_effect": 0x17AA9,
    "palette_fade": 0x2DF01,
    "menu_init": 0x20283,
    "menu_draw": 0x1FF79,
    "menu_options": 0x20421,
    "key_check": 0x10620,
}

# 全局变量地址
GLOBAL_VARIABLES = {
    "video_buffer": 0x655360,
    "palette_buffer": 0x53BF7,
    "palette_data": 0x53AD5,
    "fdother_ptr": 0x53E00,
    "fdfield_ptr": 0x53A59,
    "fdtxt_ptr": 0x53A79,
    "fdshap_ptr": 0x53A5D,
    "fdmus_ptr": 0x53AC1,
    "bg_ptr": 0x53E04,
    "current_state": 0x53BFB,
    "unit_index": 0x53AE9,
    "frame_counter": 0x53C08,
}

# FDOTHER.DAT 资源索引
FDOTHER_RESOURCES = {
    0: "palette",
    1: "sub_dat_1",
    7: "palette_alt",
    8: "menu_data",
    69: "anim_frame_0",
    70: "anim_frame_1",
    71: "anim_frame_2",
    72: "anim_frame_3",
    73: "anim_frame_4",
    74: "title",
    76: "background",
    77: "animation_data",
    101: "menu_bg",
    102: "palette_final",
}

# 开场动画时间线
ANIMATION_TIMELINE = {
    "total_frames": 535,
    "frame_delay_ms": 30,
    "total_duration_sec": 16.05,
    "key_events": [
        {"frame": 0, "action": "load_bg", "resource": 76},
        {"frame": 0, "action": "set_palette", "resource": 0},
        {"frame": 0, "action": "display_title", "resource": 74},
        {"frame": 1, "action": "video_effect"},
        {"frame": 100, "action": "start_animation", "resources": [69, 73]},
        {"frame": 387, "action": "stop_animation"},
        {"frame": 440, "action": "fade_out_start"},
        {"frame": 480, "action": "load_menu", "resources": [7, 8]},
        {"frame": 535, "action": "menu_loop_start"},
    ],
}

# 断点建议
BREAKPOINT_SUGGESTIONS = [
    {"address": "0x1F894", "name": "intro_animation_start", "desc": "开场动画入口"},
    {"address": "0x1F9D6", "name": "anim_main_loop", "desc": "动画主循环"},
    {"address": "0x4E98D", "name": "rle_decompress", "desc": "RLE解压函数"},
    {"address": "0x11EB0", "name": "frame_copy", "desc": "帧复制到缓冲区"},
    {"address": "0x1F525", "name": "screen_refresh", "desc": "屏幕刷新"},
    {"address": "0x2DF01", "name": "palette_fade", "desc": "调色板淡出"},
    {"address": "0x20283", "name": "menu_init", "desc": "菜单初始化"},
]


def generate_debug_config():
    """生成DOSBox-X调试配置"""
    return {
        "functions": FUNCTION_OFFSETS,
        "globals": GLOBAL_VARIABLES,
        "resources": FDOTHER_RESOURCES,
        "animation": ANIMATION_TIMELINE,
        "breakpoints": BREAKPOINT_SUGGESTIONS,
    }


def print_breakpoint_commands():
    """打印DOSBox-X调试器命令"""
    print("\n=== DOSBox-X 调试器断点命令 ===")
    print("在DOSBox-X调试器中输入以下命令:\n")
    
    for bp in BREAKPOINT_SUGGESTIONS:
        print(f"  bp {bp['address']}  ; {bp['desc']}")
    
    print("\n=== 内存查看命令 ===")
    print("  d 0x655360  ; video_buffer")
    print("  d 0x53E00   ; FDOTHER_ptr")


def main():
    """主函数"""
    output_dir = Path("output/fd2_debug_config")
    output_dir.mkdir(parents=True, exist_ok=True)
    
    # 生成配置文件
    config = generate_debug_config()
    config_path = output_dir / "debug_config.json"
    with open(config_path, "w", encoding="utf-8") as f:
        json.dump(config, f, indent=2, ensure_ascii=False)
    
    print(f"Config saved: {config_path}")
    
    # 打印断点命令
    print_breakpoint_commands()
    
    # 生成调试脚本
    script_path = output_dir / "debug_commands.txt"
    with open(script_path, "w", encoding="utf-8") as f:
        f.write("# FD2 Debugger Commands\n\n")
        f.write("# Set breakpoints\n")
        for bp in BREAKPOINT_SUGGESTIONS:
            f.write(f"bp {bp['address']}  ; {bp['desc']}\n")
        f.write("\n# Run\nr\n")
    
    print(f"\nDebug script saved: {script_path}")
    print("\nUsage:")
    print("1. Start DOSBox-X: dosbox-x -debug -break-start game")
    print("2. Paste commands from debug_commands.txt")


if __name__ == "__main__":
    main()
