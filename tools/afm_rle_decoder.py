#!/usr/bin/env python3
"""
正确的 AFM 帧解码器
基于反编译代码分析:
- sub_36FF4: 命令分发器
- sub_36F24 (命令 0x06): RLE 解码，规则 (byte & 0xC0) == 0xC0
"""

import struct
from PIL import Image
import os

def decode_rle_06(data: bytes, max_pixels: int = 64000) -> tuple:
    """
    命令 0x06 的 RLE 解码
    规则:
    - 如果 (byte & 0xC0) == 0xC0:
      - count = byte & 0x3F (低 6 位)
      - 读取下一个字节作为 color
      - 写入 count 个 color
    - 否则:
      - 直接写入该字节作为像素值
    """
    pixels = bytearray(max_pixels)
    pixel_pos = 0
    data_pos = 0
    
    while data_pos < len(data) and pixel_pos < max_pixels:
        b = data[data_pos]
        data_pos += 1
        
        if (b & 0xC0) == 0xC0:
            # RLE 编码
            count = b & 0x3F
            if data_pos < len(data):
                color = data[data_pos]
                data_pos += 1
                
                for _ in range(min(count, max_pixels - pixel_pos)):
                    pixels[pixel_pos] = color
                    pixel_pos += 1
        else:
            # 直接像素
            if pixel_pos < max_pixels:
                pixels[pixel_pos] = b
                pixel_pos += 1
    
    return bytes(pixels[:pixel_pos]), data_pos


def main():
    with open('/home/yinming/fd2_dat/game/ANI.DAT', 'rb') as f:
        data = f.read()
    
    print("=" * 70)
    print("AFM 帧正确解码 (基于反编译代码)")
    print("=" * 70)
    
    offset = 0x2E
    pos = offset + 0xAA
    
    frame_count = struct.unpack('<H', data[offset + 0xA5:offset + 0xA7])[0]
    print(f"帧数: {frame_count}")
    
    # 读取所有帧
    frames = []
    for i in range(frame_count):
        if pos + 8 > len(data):
            break
        
        size = struct.unpack('<H', data[pos:pos+2])[0]
        param = struct.unpack('<H', data[pos+2:pos+4])[0]
        pos += 8
        
        frame_data = data[pos:pos+size] if size > 0 else b''
        frames.append({
            'index': i,
            'size': size,
            'param': param,
            'data': frame_data
        })
        pos += size
    
    # 解析调色板 (帧 2)
    palette = bytearray(768)
    for f in frames:
        if f['size'] > 0 and len(f['data']) > 0 and f['data'][0] == 0x01:
            palette[:] = f['data'][1:769]
            print(f"找到调色板 (帧 {f['index']})")
            break
    
    # 解码像素帧
    output_dir = '/tmp/afm_rle_correct'
    os.makedirs(output_dir, exist_ok=True)
    
    decoded_count = 0
    
    for f in frames:
        if f['size'] == 0 or len(f['data']) == 0:
            continue
        
        first_byte = f['data'][0]
        
        # 跳过调色板帧
        if first_byte <= 0x02:
            continue
        
        # 尝试 RLE 解码
        pixels, consumed = decode_rle_06(f['data'])
        
        if len(pixels) < 1000:
            # 解码像素太少，可能不是 RLE 格式
            print(f"帧 {f['index']}: 解码像素数 {len(pixels)}, 可能格式不同")
            continue
        
        # 创建图像
        img = Image.new('P', (320, 200))
        img.putdata(list(pixels[:64000]) + [0] * (64000 - len(pixels)))
        
        # 设置调色板 (DOS 6位转8位)
        pal = []
        for i in range(256):
            r = min(255, palette[i * 3] * 4)
            g = min(255, palette[i * 3 + 1] * 4)
            b = min(255, palette[i * 3 + 2] * 4)
            pal.extend([r, g, b])
        
        img.putpalette(pal)
        
        # 保存
        output_path = os.path.join(output_dir, f'frame_{decoded_count:04d}.png')
        img.save(output_path)
        decoded_count += 1
        
        if decoded_count <= 5:
            print(f"帧 {f['index']}: 解码 {len(pixels)} 像素, 消耗 {consumed} 字节")
    
    print(f"\n成功解码 {decoded_count} 帧")
    print(f"保存在: {output_dir}")


if __name__ == '__main__':
    main()
