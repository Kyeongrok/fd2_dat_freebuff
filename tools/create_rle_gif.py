#!/usr/bin/env python3
"""
创建正确的 AFM 动画 GIF
基于 RLE 解码
"""

import struct
from PIL import Image
import os

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


def main():
    with open('/home/yinming/fd2_dat/game/ANI.DAT', 'rb') as f:
        data = f.read()
    
    offset = 0x2E
    pos = offset + 0xAA
    
    frame_count = struct.unpack('<H', data[offset + 0xA5:offset + 0xA7])[0]
    
    # 读取所有帧
    frames = []
    for i in range(frame_count):
        if pos + 8 > len(data):
            break
        
        size = struct.unpack('<H', data[pos:pos+2])[0]
        pos += 8
        
        frame_data = data[pos:pos+size] if size > 0 else b''
        frames.append({'size': size, 'data': frame_data})
        pos += size
    
    # 解析调色板
    palette = bytearray(768)
    for f in frames:
        if f['size'] > 0 and len(f['data']) > 0 and f['data'][0] == 0x01:
            palette[:] = f['data'][1:769]
            break
    
    # 解码所有像素帧
    decoded_frames = []
    for f in frames:
        if f['size'] == 0 or len(f['data']) == 0:
            continue
        
        first_byte = f['data'][0]
        
        # 跳过调色板帧
        if first_byte <= 0x02:
            continue
        
        # RLE 解码
        pixels, consumed = decode_rle_06(f['data'])
        
        if len(pixels) < 1000:
            continue
        
        # 创建图像
        img = Image.new('P', (320, 200))
        img.putdata(list(pixels[:64000]) + [0] * (64000 - len(pixels)))
        
        pal = []
        for i in range(256):
            r = min(255, palette[i * 3] * 4)
            g = min(255, palette[i * 3 + 1] * 4)
            b = min(255, palette[i * 3 + 2] * 4)
            pal.extend([r, g, b])
        
        img.putpalette(pal)
        decoded_frames.append(img)
    
    print(f"解码了 {len(decoded_frames)} 帧")
    
    # 保存为 GIF
    output_path = '/home/yinming/fd2_dat2/docs/afm_rle_animation.gif'
    
    if decoded_frames:
        decoded_frames[0].save(
            output_path,
            save_all=True,
            append_images=decoded_frames[1:],
            duration=100,
            loop=0
        )
        
        print(f"保存到: {output_path}")
        print(f"文件大小: {os.path.getsize(output_path):,} 字节")


if __name__ == '__main__':
    main()
