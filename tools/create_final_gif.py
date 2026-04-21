#!/usr/bin/env python3
"""
创建正确的 AFM 动画 GIF (修正版)
"""

import struct
from PIL import Image
import os

# 全局缓冲区
palette_buf = bytearray(768)
pixel_buf = bytearray(64000)


def decode_palette_rle(data: bytes, pos: int) -> int:
    global palette_buf
    src_pos = pos
    dst_pos = 0
    
    while dst_pos < 768 and src_pos < len(data):
        b = data[src_pos]
        src_pos += 1
        
        if (b & 0xC0) == 0xC0:
            count = b & 0x3F
            if src_pos < len(data):
                color = data[src_pos]
                src_pos += 1
                for i in range(min(count, 768 - dst_pos)):
                    palette_buf[dst_pos + i] = color
                dst_pos += count
        else:
            palette_buf[dst_pos] = b
            dst_pos += 1
    
    return src_pos - pos


def decode_pixel_rle(data: bytes, pos: int) -> int:
    global pixel_buf
    src_pos = pos
    dst_pos = 0
    
    while src_pos < len(data) and dst_pos < 64000:
        b = data[src_pos]
        src_pos += 1
        
        if (b & 0xC0) == 0xC0:
            count = b & 0x3F
            if src_pos < len(data):
                color = data[src_pos]
                src_pos += 1
                for i in range(min(count, 64000 - dst_pos)):
                    pixel_buf[dst_pos + i] = color
                dst_pos += count
        else:
            if dst_pos < 64000:
                pixel_buf[dst_pos] = b
            dst_pos += 1
    
    return src_pos - pos


def process_frame(param: int, frame_data: bytes):
    if param == 0 or len(frame_data) == 0:
        return
    
    data_pos = 0
    
    for _ in range(param):
        if data_pos >= len(frame_data):
            break
        
        cmd = frame_data[data_pos]
        data_pos += 1
        
        if cmd == 0x00:
            if data_pos < len(frame_data):
                color = frame_data[data_pos]
                data_pos += 1
                for i in range(256):
                    palette_buf[i * 3] = color
                    palette_buf[i * 3 + 1] = color
                    palette_buf[i * 3 + 2] = color
        
        elif cmd == 0x01:
            if data_pos + 768 <= len(frame_data):
                palette_buf[:] = frame_data[data_pos:data_pos + 768]
                data_pos += 768
        
        elif cmd == 0x02:
            data_pos += decode_palette_rle(frame_data, data_pos)
        
        elif cmd == 0x04:
            if data_pos < len(frame_data):
                fill_byte = frame_data[data_pos]
                data_pos += 1
                for i in range(64000):
                    pixel_buf[i] = fill_byte
        
        elif cmd == 0x05:
            if data_pos + 64000 <= len(frame_data):
                pixel_buf[:] = frame_data[data_pos:data_pos + 64000]
                data_pos += 64000
        
        elif cmd == 0x06:
            data_pos += decode_pixel_rle(frame_data, data_pos)


def main():
    global palette_buf, pixel_buf
    
    with open('/home/yinming/fd2_dat/game/ANI.DAT', 'rb') as f:
        data = f.read()
    
    afm_offset = struct.unpack('<I', data[6:10])[0]
    frame_count = struct.unpack('<H', data[afm_offset + 165:afm_offset + 167])[0]
    frame_start = afm_offset + 173
    
    print(f"AFM 偏移: 0x{afm_offset:X}")
    print(f"帧数: {frame_count}")
    print(f"帧数据开始: 0x{frame_start:X}")
    
    palette_buf = bytearray(768)
    pixel_buf = bytearray(64000)
    
    frames = []
    prev_pixel_buf = bytearray(64000)
    
    pos = frame_start
    
    for i in range(frame_count):
        if pos + 8 > len(data):
            break
        
        size = struct.unpack('<H', data[pos:pos+2])[0]
        param = struct.unpack('<H', data[pos+2:pos+4])[0]
        
        frame_data = data[pos+8:pos+8+size] if size > 0 else b''
        
        prev_pixel_buf[:] = pixel_buf
        process_frame(param, frame_data)
        
        pos += 8 + size
        
        if pixel_buf == prev_pixel_buf:
            continue
        
        img = Image.new('P', (320, 200))
        img.putdata(list(pixel_buf))
        
        # DOS 调色板是 6 位 (0-63)，需要转换到 8 位 (0-255)
        pal = []
        for j in range(256):
            r = min(255, palette_buf[j * 3] * 4)
            g = min(255, palette_buf[j * 3 + 1] * 4)
            b = min(255, palette_buf[j * 3 + 2] * 4)
            pal.extend([r, g, b])
        
        img.putpalette(pal)
        frames.append(img)
        
        if len(frames) <= 5:
            print(f"帧 {i}: param={param}, size={size}")
    
    print(f"\n解码了 {len(frames)} 帧")
    
    if frames:
        output_path = '/home/yinming/fd2_dat2/docs/afm_final_animation.gif'
        
        frames[0].save(
            output_path,
            save_all=True,
            append_images=frames[1:],
            duration=100,
            loop=0
        )
        
        print(f"保存到: {output_path}")
        print(f"文件大小: {os.path.getsize(output_path):,} 字节")
        
        # 保存第一帧
        frames[0].save('/home/yinming/fd2_dat2/docs/frame_final.png')
        print(f"保存第一帧到: /home/yinming/fd2_dat2/docs/frame_final.png")


if __name__ == '__main__':
    main()
