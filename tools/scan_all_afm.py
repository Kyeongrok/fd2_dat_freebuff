#!/usr/bin/env python3
"""扫描 ANI.DAT 中所有 AFM 资源，包括索引表外的"""

import struct
import os

def scan_all_afm_resources(filepath):
    """扫描文件中所有 AFM 资源"""
    with open(filepath, 'rb') as f:
        data = f.read()
    
    print("=" * 70)
    print("扫描 ANI.DAT 中的所有 AFM 资源")
    print("=" * 70)
    print(f"文件大小: {len(data):,} 字节 ({len(data) / 1024 / 1024:.2f} MB)")
    
    # AFM 签名
    afm_sig = b'AFM - Animation File Manager'
    
    # 查找所有 AFM 签名
    afm_offsets = []
    pos = 0
    while True:
        idx = data.find(afm_sig, pos)
        if idx == -1:
            break
        afm_offsets.append(idx)
        pos = idx + 1
    
    print(f"\n找到 {len(afm_offsets)} 个 AFM 签名:")
    print("-" * 70)
    
    # 解析每个 AFM
    afm_resources = []
    for i, offset in enumerate(afm_offsets):
        if offset + 0xA7 > len(data):
            continue
        
        # 解析 AFM 头
        copyright_info = data[offset:offset+0x50]
        title = data[offset+0x51:offset+0xA0].rstrip(b'\x00').decode('ascii', errors='replace')
        frame_count = struct.unpack('<H', data[offset+0xA5:offset+0xA7])[0]
        
        # 计算大小 (到下一个 AFM 或文件结尾)
        if i + 1 < len(afm_offsets):
            next_offset = afm_offsets[i + 1]
            size = next_offset - offset
        else:
            size = len(data) - offset
        
        afm_resources.append({
            'index': i,
            'offset': offset,
            'size': size,
            'title': title,
            'frame_count': frame_count
        })
        
        # 检查是否在索引表中
        in_index = any(offset == 0x000F4D5E or 
                      offset == 0x001A7F4C or 
                      offset == 0x001B974B or 
                      offset == 0x0022870B for _ in [1])
        
        status = "✓ 索引内" if offset in [0x000F4D5E, 0x001A7F4C, 0x001B974B, 0x0022870B] else "○ 索引外"
        
        print(f"[{i}] 偏移 0x{offset:08X}, 大小 {size:>10,} 字节, 帧 {frame_count:>3}  {status}")
        print(f"    标题: {title[:50]}")
    
    # 读取索引表中的条目
    print("\n" + "=" * 70)
    print("索引表内容:")
    print("-" * 70)
    
    index_count = struct.unpack('<H', data[6:8])[0]
    print(f"声明的索引数量: {index_count}")
    
    indexed_offsets = []
    for i in range(min(index_count, 50)):
        tbl_offset = 0x0A + i * 8
        if tbl_offset + 8 > len(data):
            break
        
        start = struct.unpack('<I', data[tbl_offset:tbl_offset+4])[0]
        end = struct.unpack('<I', data[tbl_offset+4:tbl_offset+8])[0]
        
        if start < len(data) and end <= len(data) and end > start and end - start < 10000000:
            indexed_offsets.append(start)
            print(f"  [{i}]: 偏移 0x{start:08X} - 0x{end:08X} ({end - start:,} 字节)")
    
    print(f"\n索引表中的有效偏移: {[hex(x) for x in indexed_offsets]}")
    print(f"实际 AFM 偏移: {[hex(r['offset']) for r in afm_resources]}")
    
    # 对比
    print("\n" + "=" * 70)
    print("对比分析:")
    print("-" * 70)
    
    for res in afm_resources:
        if res['offset'] in indexed_offsets:
            print(f"  偏移 0x{res['offset']:08X} - 已索引")
        else:
            print(f"  偏移 0x{res['offset']:08X} - 未索引! (帧数: {res['frame_count']})")
    
    return afm_resources

if __name__ == '__main__':
    filepath = '/home/yinming/fd2_dat/game/ANI.DAT'
    if os.path.exists(filepath):
        scan_all_afm_resources(filepath)
