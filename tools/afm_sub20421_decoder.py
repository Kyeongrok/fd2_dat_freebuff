#!/usr/bin/env python3
"""
正确的 AFM 帧解码器
基于 sub_20421 和 sub_36FF4 的分析

帧头结构 (8 字节):
- v12[0] (偏移 0-1): size (帧数据大小)
- v12[1] (偏移 2-3): param (命令循环次数)
- 偏移 4-7: 保留

解码流程:
1. 读取帧头
2. 读取帧数据
3. 调用 sub_36FF4(param, frame_data)
4. sub_36FF4 循环 param 次，每次读取一个命令字节并调用相应函数

全局变量:
- buf: 768 字节，调色板缓冲区
- n655360: 64000 字节，像素缓冲区
- n64000: 64000，像素计数
"""

import struct
from PIL import Image
import os

# 全局缓冲区
palette_buf = bytearray(768)  # 调色板缓冲区 (buf)
pixel_buf = bytearray(64000)  # 像素缓冲区 (n655360)

def sub_36E3D(data: bytes, pos: int) -> int:
    """
    命令 0x00: 填充调色板
    格式: [00][color]
    用 color 填充整个调色板
    """
    global palette_buf
    if pos >= len(data):
        return 0
    color = data[pos]
    for i in range(256):
        palette_buf[i * 3] = color
        palette_buf[i * 3 + 1] = color
        palette_buf[i * 3 + 2] = color
    return 1  # 消耗 1 字节


def sub_36E57(data: bytes, pos: int) -> int:
    """
    命令 0x01: 复制调色板
    格式: [01][768 bytes RGB]
    """
    global palette_buf
    palette_buf[:] = data[pos:pos + 768]
    return 768


def sub_36E65(data: bytes, pos: int) -> int:
    """
    命令 0x02: RLE 解码调色板
    """
    global palette_buf
    src_pos = pos
    dst_pos = 0
    
    while dst_pos < 768:
        b = data[src_pos]
        src_pos += 1
        
        if (b & 0xC0) == 0xC0:
            count = b & 0x3F
            dst_pos += count
            color = data[src_pos]
            src_pos += 1
            
            for _ in range(count):
                if dst_pos <= 768:
                    palette_buf[dst_pos - count] = color
        else:
            palette_buf[dst_pos] = b
            dst_pos += 1
    
    return src_pos - pos


def sub_36F24(data: bytes, pos: int) -> int:
    """
    命令 0x06: RLE 解码像素
    """
    global pixel_buf
    src_pos = pos
    dst_pos = 0
    
    while dst_pos < 64000:
        b = data[src_pos]
        src_pos += 1
        
        if (b & 0xC0) == 0xC0:
            count = b & 0x3F
            dst_pos += count
            color = data[src_pos]
            src_pos += 1
            
            for i in range(count):
                if dst_pos - count + i < 64000:
                    pixel_buf[dst_pos - count + i] = color
        else:
            pixel_buf[dst_pos] = b
            dst_pos += 1
    
    return src_pos - pos


def sub_36EE0(data: bytes, pos: int) -> int:
    """
    命令 0x04: 填充像素缓冲区
    格式: [04][fill_byte]
    """
    global pixel_buf
    fill_byte = data[pos]
    for i in range(64000):
        pixel_buf[i] = fill_byte
    return 1


def sub_36F08(data: bytes, pos: int) -> int:
    """
    命令 0x05: 复制像素数据
    格式: [05][64000 bytes]
    """
    global pixel_buf
    pixel_buf[:] = data[pos:pos + 64000]
    return 64000


def process_frame(param: int, frame_data: bytes):
    """
    解码帧数据
    循环 param 次，每次读取一个命令字节并调用相应函数
    """
    data_pos = 0
    
    for _ in range(param):
        if data_pos >= len(frame_data):
            break
        
        cmd = frame_data[data_pos]
        data_pos += 1
        
        if cmd == 0x00:
            data_pos += sub_36E3D(frame_data, data_pos)
        elif cmd == 0x01:
            data_pos += sub_36E57(frame_data, data_pos)
        elif cmd == 0x02:
            data_pos += sub_36E65(frame_data, data_pos)
        elif cmd == 0x04:
            data_pos += sub_36EE0(frame_data, data_pos)
        elif cmd == 0x05:
            data_pos += sub_36F08(frame_data, data_pos)
        elif cmd == 0x06:
            data_pos += sub_36F24(frame_data, data_pos)
        else:
            # 未知命令，跳过
            pass


def main():
    global palette_buf, pixel_buf
    
    with open('/home/yinming/fd2_dat/game/ANI.DAT', 'rb') as f:
        data = f.read()
    
    print("=" * 70)
    print("AFM 正确解码器 (基于 sub_20421 和 sub_36FF4)")
    print("=" * 70)
    
    offset = 0x2E
    pos = offset + 0xAA
    
    frame_count = struct.unpack('<H', data[offset + 0xA5:offset + 0xA7])[0]
    print(f"帧数: {frame_count}")
    
    # 重置缓冲区
    palette_buf = bytearray(768)
    pixel_buf = bytearray(64000)
    
    output_dir = '/tmp/afm_sub20421'
    os.makedirs(output_dir, exist_ok=True)
    
    decoded_count = 0
    prev_pixel_buf = bytearray(64000)
    
    for i in range(frame_count):
        if pos + 8 > len(data):
            break
        
        # 读取帧头
        size = struct.unpack('<H', data[pos:pos+2])[0]
        param = struct.unpack('<H', data[pos+2:pos+4])[0]
        pos += 8
        
        # 读取帧数据
        frame_data = data[pos:pos+size] if size > 0 else b''
        pos += size
        
        # 保存前一帧
        prev_pixel_buf[:] = pixel_buf
        
        # 解码帧
        if size > 0:
            process_frame(param, frame_data)
        
        # 检查是否有变化
        if pixel_buf == prev_pixel_buf:
            continue
        
        # 创建图像
        img = Image.new('P', (320, 200))
        img.putdata(list(pixel_buf))
        
        # 设置调色板 (DOS 6位转8位)
        pal = []
        for j in range(256):
            r = min(255, palette_buf[j * 3] * 4)
            g = min(255, palette_buf[j * 3 + 1] * 4)
            b = min(255, palette_buf[j * 3 + 2] * 4)
            pal.extend([r, g, b])
        
        img.putpalette(pal)
        
        # 保存
        output_path = os.path.join(output_dir, f'frame_{decoded_count:04d}.png')
        img.save(output_path)
        decoded_count += 1
        
        if decoded_count <= 5:
            print(f"帧 {i}: param={param}, size={size}")
    
    print(f"\n成功解码 {decoded_count} 帧")
    print(f"保存在: {output_dir}")


if __name__ == '__main__':
    main()
