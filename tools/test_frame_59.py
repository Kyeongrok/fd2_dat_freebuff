#!/usr/bin/env python3
"""
帧数据命令流解析
帧数据可能是由多个命令组成的命令流
"""

import struct

def decode_rle_06(data: bytes, max_pixels: int = 64000) -> tuple:
    """命令 0x06 的 RLE 解码"""
    pixels = bytearray(max_pixels)
    pixel_pos = 0
    data_pos = 0
    
    while data_pos < len(data) and pixel_pos < max_pixels:
        b = data[data_pos]
        data_pos += 1
        
        if (b & 0xC0) == 0xC0:
            count = b & 0x3F
            if data_pos < len(data):
                color = data[data_pos]
                data_pos += 1
                for _ in range(min(count, max_pixels - pixel_pos)):
                    pixels[pixel_pos] = color
                    pixel_pos += 1
        else:
            if pixel_pos < max_pixels:
                pixels[pixel_pos] = b
                pixel_pos += 1
    
    return bytes(pixels[:pixel_pos]), data_pos


# 全局缓冲区
frame_buffer = bytearray(64000)

def process_frame(frame_data: bytes) -> bytes:
    """处理帧数据的命令流"""
    global frame_buffer
    
    data_pos = 0
    commands = []
    
    while data_pos < len(frame_data):
        cmd = frame_data[data_pos]
        data_pos += 1
        
        if cmd == 0x00:
            # 填充调色板 (未实现)
            pass
        
        elif cmd == 0x01:
            # 复制调色板 (未实现)
            pass
        
        elif cmd == 0x04:
            # 填充缓冲区
            if data_pos < len(frame_data):
                fill_byte = frame_data[data_pos]
                data_pos += 1
                frame_buffer = bytearray([fill_byte] * 64000)
                commands.append(f'0x04: 填充缓冲区 0x{fill_byte:02X}')
        
        elif cmd == 0x05:
            # 复制数据到缓冲区
            if data_pos + 64000 <= len(frame_data):
                frame_buffer = bytearray(frame_data[data_pos:data_pos + 64000])
                data_pos += 64000
                commands.append('0x05: 复制 64000 字节')
        
        elif cmd == 0x06:
            # RLE 解码到缓冲区
            rle_data = frame_data[data_pos:]
            decoded, consumed = decode_rle_06(rle_data)
            
            # 复制解码后的数据到缓冲区
            for i in range(min(len(decoded), 64000)):
                frame_buffer[i] = decoded[i]
            
            data_pos += consumed
            commands.append(f'0x06: RLE 解码 {len(decoded)} 像素, 消耗 {consumed} 字节')
        
        else:
            # 未知命令
            commands.append(f'未知命令 0x{cmd:02X}')
            break
    
    return bytes(frame_buffer), commands


# 测试帧 59
with open('/home/yinming/fd2_dat/game/ANI.DAT', 'rb') as f:
    data = f.read()

offset = 0x2E
pos = offset + 0xAA

frame_count = struct.unpack('<H', data[offset + 0xA5:offset + 0xA7])[0]

for i in range(frame_count):
    if pos + 8 > len(data):
        break
    
    size = struct.unpack('<H', data[pos:pos+2])[0]
    pos += 8
    
    if i == 59 and size > 0:
        frame_data = data[pos:pos+size]
        
        print(f'帧 59 分析:')
        print(f'  size: {size}')
        print(f'  数据: {frame_data.hex()}')
        
        # 解析命令流
        result, commands = process_frame(frame_data)
        
        print(f'\n命令:')
        for cmd in commands:
            print(f'  {cmd}')
        
        # 统计结果
        color_counts = {}
        for p in result:
            color_counts[p] = color_counts.get(p, 0) + 1
        
        print(f'\n结果颜色分布 (前 5):')
        for color, count in sorted(color_counts.items(), key=lambda x: -x[1])[:5]:
            print(f'  0x{color:02X}: {count}')
        
        break
    
    pos += size
