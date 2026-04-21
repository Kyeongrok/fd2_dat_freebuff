#!/usr/bin/env python3
"""分析 ANI.DAT 索引表与 AFM 资源的关系"""

import struct

def analyze_index_structure():
    with open('/home/yinming/fd2_dat/game/ANI.DAT', 'rb') as f:
        data = f.read()
    
    print("=" * 80)
    print("ANI.DAT 索引表深度分析")
    print("=" * 80)
    
    # 所有 AFM 资源
    afm_offsets = [0x2E, 0xF4D5E, 0x19018E, 0x1A7F4C, 0x1B0A3A, 0x1B974B, 0x21DCEA, 0x22870B, 0x24A18E]
    
    # 索引表内容
    index_entries = []
    for i in range(4):
        offset = 0x0A + i * 8
        start = struct.unpack('<I', data[offset:offset+4])[0]
        end = struct.unpack('<I', data[offset+4:offset+8])[0]
        index_entries.append((start, end))
    
    print("\n索引表条目与 AFM 资源的包含关系:")
    print("-" * 80)
    print(f"{'索引':<6} {'索引范围':<30} {'包含的 AFM 资源'}")
    print("-" * 80)
    
    for i, (start, end) in enumerate(index_entries):
        # 找出在这个范围内的 AFM
        contained_afms = []
        for j, afm_offset in enumerate(afm_offsets):
            if start <= afm_offset < end:
                contained_afms.append(f"#{j} (0x{afm_offset:X})")
        
        afm_str = ", ".join(contained_afms) if contained_afms else "无"
        print(f"[{i}]    0x{start:08X} - 0x{end:08X}    {afm_str}")
    
    print("\n" + "=" * 80)
    print("结论:")
    print("-" * 80)
    print("索引表指向的是 '资源块'，每个块可能包含多个 AFM 动画。")
    print("游戏可能通过其他方式（如 AFM 内部的链接）访问未索引的资源。")
    
    # 检查第一个 AFM（未索引）的特殊性
    print("\n" + "=" * 80)
    print("第一个 AFM (偏移 0x2E) 分析:")
    print("-" * 80)
    
    first_afm = data[0x2E:0x2E + 0xAA + 100]
    frame_count = struct.unpack('<H', data[0x2E + 0xA5:0x2E + 0xA7])[0]
    print(f"帧数: {frame_count}")
    
    # 检查文件头部结构
    print("\n文件头部结构:")
    print(f"  偏移 0x00-0x05: 魔数 '{data[:6].decode('ascii', errors='replace')}'")
    print(f"  偏移 0x06-0x07: 索引数量 {struct.unpack('<H', data[6:8])[0]}")
    print(f"  偏移 0x08-0x09: 未知 {data[8:10].hex()}")
    print(f"  偏移 0x0A-...:  索引表 ({4} 个条目 x 8 字节 = 32 字节)")
    print(f"  偏移 0x2A-0x2D: 未知 {data[0x2A:0x2E].hex()}")
    print(f"  偏移 0x2E:      第一个 AFM 开始")
    
    # 第一个 AFM 是否是默认/启动动画？
    print("\n推测: 第一个 AFM (0x2E) 可能是:")
    print("  1. 游戏启动动画")
    print("  2. 默认动画（索引 0）")
    print("  3. 通过特殊索引访问（如索引 -1 或固定偏移）")
    
    return index_entries

if __name__ == '__main__':
    analyze_index_structure()
