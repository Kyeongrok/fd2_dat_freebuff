#!/usr/bin/env python3
"""测试 ANI.DAT 索引表解析"""

import struct
import os

def parse_ani_dat_index(filepath):
    """解析 ANI.DAT 的索引表"""
    with open(filepath, 'rb') as f:
        data = f.read()
    
    print("=" * 70)
    print("ANI.DAT 索引表分析")
    print("=" * 70)
    print(f"文件大小: {len(data):,} 字节")
    print(f"魔数: {data[:6]}")
    
    # 读取索引数量 (偏移 6-7)
    index_count = struct.unpack('<H', data[6:8])[0]
    print(f"声明的索引数量: {index_count}")
    
    # 读取索引表 (每条目 8 字节: start, end)
    print("\n有效索引条目 (8 字节格式):")
    print("-" * 70)
    print(f"{'索引':<6} {'开始偏移':<12} {'结束偏移':<12} {'大小':<12} {'状态'}")
    print("-" * 70)
    
    valid_indices = []
    for i in range(min(index_count, 50)):
        offset = 0x0A + i * 8
        if offset + 8 > len(data):
            break
        
        start = struct.unpack('<I', data[offset:offset+4])[0]
        end = struct.unpack('<I', data[offset+4:offset+8])[0]
        size = end - start if end > start else 0
        
        # 检查是否有效
        is_valid = start < len(data) and end <= len(data) and size > 0 and size < 10000000
        status = "✓ 有效" if is_valid else "✗ 无效"
        
        if is_valid:
            valid_indices.append((i, start, end, size))
        
        print(f"{i:<6} 0x{start:08X}    0x{end:08X}    {size:>10,}  {status}")
    
    print("-" * 70)
    print(f"\n有效条目数: {len(valid_indices)}")
    
    # 检查每个有效条目是否是 AFM 格式
    print("\n\nAFM 资源验证:")
    print("-" * 70)
    
    for idx, start, end, size in valid_indices[:10]:
        afm_data = data[start:end]
        
        # 检查 AFM 签名
        has_afm_sig = b'AFM - Animation File Manager' in afm_data[:0x50]
        
        if has_afm_sig:
            # 解析 AFM 头
            frame_count = struct.unpack('<H', afm_data[0xA5:0xA7])[0]
            title = afm_data[0x51:0xA0].rstrip(b'\x00').decode('ascii', errors='replace')
            print(f"[{idx}] 偏移 0x{start:08X}, 大小 {size:,} 字节")
            print(f"     标题: {title[:40]}")
            print(f"     帧数: {frame_count}")
        else:
            print(f"[{idx}] 偏移 0x{start:08X}, 大小 {size:,} 字节 - 非 AFM 格式")
            print(f"     前 32 字节: {afm_data[:32].hex()}")
    
    return valid_indices

if __name__ == '__main__':
    filepath = '/home/yinming/fd2_dat/game/ANI.DAT'
    if os.path.exists(filepath):
        parse_ani_dat_index(filepath)
    else:
        print(f"文件不存在: {filepath}")
