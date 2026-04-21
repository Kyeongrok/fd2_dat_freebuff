#!/usr/bin/env python3
"""
正确的 AFM 帧解码器 (修正版)
基于 sub_20421 的分析

ANI.DAT 结构:
- 文件头: 6 字节 (LLLLLL)
- 索引表: 4 字节 × N (每个 AFM 的偏移)
- AFM 数据: [头 173 字节][帧数据]

AFM 头结构:
- 偏移 0-164: 文本信息
- 偏移 165-166: 帧数 (WORD)
- 偏移 167-172: 保留

帧数据结构:
- 帧头: 8 字节 [size:WORD][param:WORD][reserved:4]
- 帧数据: size 字节

解码流程:
1. sub_36FF4(param, frame_data) - 循环 param 次，每次执行一个命令
"""

import struct
from PIL import Image
import os

# 全局缓冲区
palette_buf = bytearray(768)  # 调色板 (buf)
pixel_buf = bytearray(64000)  # 像素 (n655360)

def decode_palette_rle(data: bytes, pos: int) -> int:
    """命令 0x02: RLE 解码调色板"""
    global palette_buf
    src_pos = pos
    dst_pos = 0
    
    while dst_pos < 768:
        b = data[src_pos]
        src_pos += 1
        
        if (b & 0xC0) == 0xC0:
            count = b & 0x3F
            color = data[src_pos]
            src_pos += 1
            
            for i in range(count):
                if dst_pos + i < 768:
                    palette_buf[dst_pos + i] = color
            dst_pos += count
        else:
            palette_buf[dst_pos] = b
            dst_pos += 1
    
    return src_pos - pos


def decode_pixel_rle(data: bytes, pos: int) -> int:
    """命令 0x06: RLE 解码像素"""
    global pixel_buf
    src_pos = pos
    dst_pos = 0
    
    while dst_pos < 64000:
        if src_pos >= len(data):
            break
        b = data[src_pos]
        src_pos += 1
        
        if (b & 0xC0) == 0xC0:
            count = b & 0x3F
            if src_pos >= len(data):
                break
            color = data[src_pos]
            src_pos += 1
            
            for i in range(count):
                if dst_pos + i < 64000:
                    pixel_buf[dst_pos + i] = color
            dst_pos += count
        else:
            pixel_buf[dst_pos] = b
            dst_pos += 1
    
    return src_pos - pos


def process_frame(param: int, frame_data: bytes):
    """处理帧数据"""
    if param == 0 or len(frame_data) == 0:
        return
    
    data_pos = 0
    
    for _ in range(param):
        if data_pos >= len(frame_data):
            break
        
        cmd = frame_data[data_pos]
        data_pos += 1
        
        if cmd == 0x00:
            # 填充调色板
            if data_pos < len(frame_data):
                color = frame_data[data_pos]
                data_pos += 1
                for i in range(256):
                    palette_buf[i * 3] = color
                    palette_buf[i * 3 + 1] = color
                    palette_buf[i * 3 + 2] = color
        
        elif cmd == 0x01:
            # 复制调色板
            if data_pos + 768 <= len(frame_data):
                palette_buf[:] = frame_data[data_pos:data_pos + 768]
                data_pos += 768
        
        elif cmd == 0x02:
            # RLE 解码调色板
            data_pos += decode_palette_rle(frame_data, data_pos)
        
        elif cmd == 0x04:
            # 填充像素缓冲区
            if data_pos < len(frame_data):
                fill_byte = frame_data[data_pos]
                data_pos += 1
                for i in range(64000):
                    pixel_buf[i] = fill_byte
        
        elif cmd == 0x05:
            # 复制像素数据
            if data_pos + 64000 <= len(frame_data):
                pixel_buf[:] = frame_data[data_pos:data_pos + 64000]
                data_pos += 64000
        
        elif cmd == 0x06:
            # RLE 解码像素
            data_pos += decode_pixel_rle(frame_data, data_pos)


def main():
    global palette_buf, pixel_buf
    
    with open('/home/yinming/fd2_dat/game/ANI.DAT', 'rb') as f:
        data = f.read()
    
    print("=" * 70)
    print("AFM 正确解码器 (基于 sub_20421)")
    print("=" * 70)
    
    # 读取第一个 AFM 的偏移
    afm_offset = struct.unpack('<I', data[6:10])[0]
    print(f"AFM 偏移: 0x{afm_offset:X}")
    
    # 读取帧数
    frame_count = struct.unpack('<H', data[afm_offset + 165:afm_offset + 167])[0]
    print(f"帧数: {frame_count}")
    
    # 帧数据开始位置
    frame_start = afm_offset + 173
    print(f"帧数据开始: 0x{frame_start:X}")
    
    # 重置缓冲区
    palette_buf = bytearray(768)
    pixel_buf = bytearray(64000)
    
    output_dir = '/tmp/afm_correct'
    os.makedirs(output_dir, exist_ok=True)
    
    decoded_count = 0
    prev_pixel_buf = bytearray(64000)
    
    pos = frame_start
    
    for i in range(frame_count):
        if pos + 8 > len(data):
            break
        
        # 读取帧头
        size = struct.unpack('<H', data[pos:pos+2])[0]
        param = struct.unpack('<H', data[pos+2:pos+4])[0]
        
        # 读取帧数据
        frame_data = data[pos+8:pos+8+size] if size > 0 else b''
        
        # 保存前一帧
        prev_pixel_buf[:] = pixel_buf
        
        # 解码帧
        process_frame(param, frame_data)
        
        # 移动到下一帧
        pos += 8 + size
        
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
            print(f"帧 {i}: param={param}, size={size}, 命令=0x{frame_data[0] if frame_data else 0:02X}")
    
    print(f"\n成功解码 {decoded_count} 帧")
    print(f"保存在: {output_dir}")


if __name__ == '__main__':
    main()
