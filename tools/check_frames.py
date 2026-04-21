#!/usr/bin/env python3
"""
检查不同编码格式的帧
"""

import struct

with open('/home/yinming/fd2_dat/game/ANI.DAT', 'rb') as f:
    data = f.read()

offset = 0x2E
pos = offset + 0xAA

frame_count = struct.unpack('<H', data[offset + 0xA5:offset + 0xA7])[0]

# 找帧 33, 39, 51, 58, 59 (解码像素数太少的帧)
target_frames = [33, 39, 51, 58, 59]

for i in range(frame_count):
    if pos + 8 > len(data):
        break
    
    size = struct.unpack('<H', data[pos:pos+2])[0]
    param = struct.unpack('<H', data[pos+2:pos+4])[0]
    
    if i in target_frames and size > 0:
        frame_data = data[pos+8:pos+8+size]
        
        print(f'帧 {i}:')
        print(f'  size: {size}')
        print(f'  param: {param} (0x{param:04X})')
        print(f'  数据前 100 字节: {frame_data[:100].hex()}')
        print(f'  第一个字节: 0x{frame_data[0]:02X}')
        
        # 分析数据模式
        # 检查是否有 FE 命令
        fe_count = frame_data.count(0xFE)
        print(f'  0xFE 出现次数: {fe_count}')
        
        # 检查是否有 FF FE FF FE 分隔符
        if b'\xFF\xFE\xFF\xFE' in frame_data:
            pos1 = frame_data.find(b'\xFF\xFE\xFF\xFE')
            print(f'  第一个分隔符位置: {pos1}')
        
        print()
    
    pos += 8 + size
