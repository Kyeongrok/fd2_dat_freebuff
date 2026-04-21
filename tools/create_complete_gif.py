#!/usr/bin/env python3
"""
创建完整的 AFM 动画 GIF
"""

import struct
from PIL import Image
import os

# 全局缓冲区
frame_buffer = bytearray(64000)
palette = bytearray(768)

def decode_rle_06(data: bytes, max_pixels: int = 64000) -> tuple:
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


def process_frame(frame_data: bytes):
    global frame_buffer, palette
    
    data_pos = 0
    
    while data_pos < len(frame_data):
        cmd = frame_data[data_pos]
        data_pos += 1
        
        if cmd == 0x00:
            if data_pos < len(frame_data):
                color = frame_data[data_pos]
                data_pos += 1
                for i in range(256):
                    palette[i * 3] = color
                    palette[i * 3 + 1] = color
                    palette[i * 3 + 2] = color
        
        elif cmd == 0x01:
            if data_pos + 768 <= len(frame_data):
                palette[:] = frame_data[data_pos:data_pos + 768]
                data_pos += 768
        
        elif cmd == 0x04:
            if data_pos < len(frame_data):
                fill_byte = frame_data[data_pos]
                data_pos += 1
                frame_buffer = bytearray([fill_byte] * 64000)
        
        elif cmd == 0x05:
            if data_pos + 64000 <= len(frame_data):
                frame_buffer = bytearray(frame_data[data_pos:data_pos + 64000])
                data_pos += 64000
        
        elif cmd == 0x06:
            rle_data = frame_data[data_pos:]
            decoded, consumed = decode_rle_06(rle_data)
            
            for i in range(min(len(decoded), 64000)):
                frame_buffer[i] = decoded[i]
            
            data_pos += consumed


def main():
    with open('/home/yinming/fd2_dat/game/ANI.DAT', 'rb') as f:
        data = f.read()
    
    offset = 0x2E
    pos = offset + 0xAA
    
    frame_count = struct.unpack('<H', data[offset + 0xA5:offset + 0xA7])[0]
    
    global frame_buffer, palette
    frame_buffer = bytearray(64000)
    palette = bytearray(768)
    
    frames = []
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
        
        prev_buffer[:] = frame_buffer
        process_frame(frame_data)
        
        if frame_buffer == prev_buffer:
            continue
        
        img = Image.new('P', (320, 200))
        img.putdata(list(frame_buffer))
        
        pal = []
        for j in range(256):
            r = min(255, palette[j * 3] * 4)
            g = min(255, palette[j * 3 + 1] * 4)
            b = min(255, palette[j * 3 + 2] * 4)
            pal.extend([r, g, b])
        
        img.putpalette(pal)
        frames.append(img)
    
    print(f"解码了 {len(frames)} 帧")
    
    if frames:
        output_path = '/home/yinming/fd2_dat2/docs/afm_complete_animation.gif'
        
        frames[0].save(
            output_path,
            save_all=True,
            append_images=frames[1:],
            duration=100,
            loop=0
        )
        
        print(f"保存到: {output_path}")
        print(f"文件大小: {os.path.getsize(output_path):,} 字节")


if __name__ == '__main__':
    main()
