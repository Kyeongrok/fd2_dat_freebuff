#!/usr/bin/env python3
"""
完整的 AFM 帧解码器
支持命令流解析
"""

import struct
from PIL import Image
import os

# 全局缓冲区
frame_buffer = bytearray(64000)
palette = bytearray(768)

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


def process_frame(frame_data: bytes) -> bytes:
    """处理帧数据的命令流"""
    global frame_buffer, palette
    
    data_pos = 0
    
    while data_pos < len(frame_data):
        cmd = frame_data[data_pos]
        data_pos += 1
        
        if cmd == 0x00:
            # 填充调色板
            if data_pos < len(frame_data):
                color = frame_data[data_pos]
                data_pos += 1
                for i in range(256):
                    palette[i * 3] = color
                    palette[i * 3 + 1] = color
                    palette[i * 3 + 2] = color
        
        elif cmd == 0x01:
            # 复制调色板
            if data_pos + 768 <= len(frame_data):
                palette[:] = frame_data[data_pos:data_pos + 768]
                data_pos += 768
        
        elif cmd == 0x02:
            # RLE 解码调色板 (未实现)
            pass
        
        elif cmd == 0x04:
            # 填充缓冲区
            if data_pos < len(frame_data):
                fill_byte = frame_data[data_pos]
                data_pos += 1
                frame_buffer = bytearray([fill_byte] * 64000)
        
        elif cmd == 0x05:
            # 复制数据到缓冲区
            if data_pos + 64000 <= len(frame_data):
                frame_buffer = bytearray(frame_data[data_pos:data_pos + 64000])
                data_pos += 64000
        
        elif cmd == 0x06:
            # RLE 解码到缓冲区
            rle_data = frame_data[data_pos:]
            decoded, consumed = decode_rle_06(rle_data)
            
            for i in range(min(len(decoded), 64000)):
                frame_buffer[i] = decoded[i]
            
            data_pos += consumed
        
        elif cmd >= 0x07:
            # 未知命令，可能是偏移或索引
            # 跳过
            pass
    
    return bytes(frame_buffer)


def main():
    with open('/home/yinming/fd2_dat/game/ANI.DAT', 'rb') as f:
        data = f.read()
    
    print("=" * 70)
    print("AFM 完整解码器 (支持命令流)")
    print("=" * 70)
    
    offset = 0x2E
    pos = offset + 0xAA
    
    frame_count = struct.unpack('<H', data[offset + 0xA5:offset + 0xA7])[0]
    print(f"帧数: {frame_count}")
    
    # 重置全局缓冲区
    global frame_buffer, palette
    frame_buffer = bytearray(64000)
    palette = bytearray(768)
    
    output_dir = '/tmp/afm_complete'
    os.makedirs(output_dir, exist_ok=True)
    
    decoded_count = 0
    prev_buffer = bytearray(64000)
    
    for i in range(frame_count):
        if pos + 8 > len(data):
            break
        
        size = struct.unpack('<H', data[pos:pos+2])[0]
        pos += 8
        
        frame_data = data[pos:pos+size] if size > 0 else b''
        pos += size
        
        if size == 0 or len(frame_data) == 0:
            continue
        
        # 保存当前缓冲区状态
        prev_buffer[:] = frame_buffer
        
        # 处理帧
        process_frame(frame_data)
        
        # 检查缓冲区是否有变化
        if frame_buffer == prev_buffer:
            continue
        
        # 创建图像
        img = Image.new('P', (320, 200))
        img.putdata(list(frame_buffer))
        
        # 设置调色板 (DOS 6位转8位)
        pal = []
        for j in range(256):
            r = min(255, palette[j * 3] * 4)
            g = min(255, palette[j * 3 + 1] * 4)
            b = min(255, palette[j * 3 + 2] * 4)
            pal.extend([r, g, b])
        
        img.putpalette(pal)
        
        # 保存
        output_path = os.path.join(output_dir, f'frame_{decoded_count:04d}.png')
        img.save(output_path)
        decoded_count += 1
        
        if decoded_count <= 5:
            print(f"帧 {i}: 已解码")
    
    print(f"\n成功解码 {decoded_count} 帧")
    print(f"保存在: {output_dir}")


if __name__ == '__main__':
    main()
