#!/usr/bin/env python3
"""
AFM 完整解码器 - 正确处理调色板和像素数据
"""

import struct
from PIL import Image

# 全局状态
palette = bytearray(768)  # 256色 × 3 RGB
frame_buffer = bytearray(64000)  # 320x200 像素


def decode_frame(frame_data: bytes, param: int) -> int:
    """
    解码 AFM 帧
    返回消耗的字节数
    """
    global palette, frame_buffer
    
    pos = 0
    cmd_count = 0
    
    while pos < len(frame_data) and cmd_count < param:
        cmd = frame_data[pos]
        pos += 1
        cmd_count += 1
        
        if cmd == 0x00:
            # 填充调色板 (单色)
            if pos < len(frame_data):
                color = frame_data[pos]
                pos += 1
                for i in range(256):
                    palette[i * 3] = color
                    palette[i * 3 + 1] = color
                    palette[i * 3 + 2] = color
        
        elif cmd == 0x01:
            # 复制调色板 (768 字节)
            if pos + 768 <= len(frame_data):
                # 调色板格式: R, G, B 交替
                palette[:] = frame_data[pos:pos + 768]
                pos += 768
        
        elif cmd == 0x02:
            # RLE 解码调色板
            pos = decode_rle_palette(frame_data, pos)
        
        elif cmd == 0x03:
            # 多段复制
            pos = decode_multi_segment(frame_data, pos)
        
        elif cmd == 0x04:
            # 清除帧缓冲区
            clear_color = frame_buffer[pos] if pos < len(frame_data) else 0
            pos += 1
            for i in range(64000):
                frame_buffer[i] = clear_color
        
        else:
            # RLE 像素数据: [count][color][verify]
            # count 是命令字节本身 (>= 5)
            count = cmd
            if pos + 1 < len(frame_data):
                color = frame_data[pos]
                verify = frame_data[pos + 1]
                pos += 2
                
                # 写入像素到帧缓冲区当前位置
                # 需要维护一个写入位置
                pass
    
    return pos


def decode_rle_palette(data: bytes, pos: int) -> int:
    """解码 RLE 压缩的调色板"""
    global palette
    
    buf_pos = 0
    
    while buf_pos < 768 and pos < len(data):
        v4 = data[pos]
        pos += 1
        
        if (v4 & 0xC0) == 0xC0:
            # RLE: 高 2 位 = 11
            count = v4 & 0x3F
            if pos < len(data):
                color = data[pos]
                pos += 1
                
                for _ in range(count):
                    if buf_pos < 768:
                        palette[buf_pos] = color
                        buf_pos += 1
        else:
            # 直接复制
            if buf_pos < 768:
                palette[buf_pos] = v4
                buf_pos += 1
    
    return pos


def decode_multi_segment(data: bytes, pos: int) -> int:
    """解码多段复制"""
    if pos >= len(data):
        return pos
    
    segment_count = data[pos]
    pos += 1
    
    for _ in range(segment_count):
        if pos + 4 > len(data):
            break
        
        offset = struct.unpack('<H', data[pos:pos+2])[0]
        count = struct.unpack('<H', data[pos+2:pos+4])[0]
        pos += 4
        
        for i in range(count):
            if pos < len(data) and offset + i < 64000:
                frame_buffer[offset + i] = data[pos]
                pos += 1
    
    return pos


def decode_rle_frame_pixels(frame_data: bytes) -> bytes:
    """
    解码 RLE 压缩的帧像素数据
    格式: [count][color][verify] 重复
    """
    global frame_buffer
    
    pixels = bytearray(64000)
    pixel_pos = 0
    pos = 0
    
    while pos < len(frame_data) - 2 and pixel_pos < 64000:
        count = frame_data[pos]
        color = frame_data[pos + 1]
        verify = frame_data[pos + 2]
        
        if count > 0:
            # RLE 解码
            for _ in range(count):
                if pixel_pos < 64000:
                    pixels[pixel_pos] = color
                    pixel_pos += 1
            pos += 3
        else:
            # 结束或特殊标记
            pos += 1
    
    return bytes(pixels)


def main():
    with open('/home/yinming/fd2_dat/game/ANI.DAT', 'rb') as f:
        data = f.read()
    
    print("=" * 70)
    print("AFM 完整解码")
    print("=" * 70)
    
    # 第一个 AFM
    offset = 0x2E
    frame_count = struct.unpack('<H', data[offset + 0xA5:offset + 0xA7])[0]
    
    print(f"AFM 偏移: 0x{offset:X}")
    print(f"帧数: {frame_count}")
    
    # 解析所有帧
    pos = offset + 0xAA
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
    
    # 解码帧 2 (调色板帧)
    print("\n解码调色板帧...")
    frame2 = frames[2]
    print(f"帧 2: size={frame2['size']}, param={frame2['param']}")
    print(f"数据前 32 字节: {frame2['data'][:32].hex()}")
    
    # 解析调色板
    # 格式: 0x01 后面是 768 字节的 RGB 数据
    if frame2['data'][0] == 0x01:
        print("\n解析调色板 (命令 0x01 - 复制调色板)...")
        palette_data = frame2['data'][1:769]
        
        # 设置全局调色板
        palette[:] = palette_data
        
        print(f"调色板前 30 字节: {palette[:30].hex()}")
        print(f"颜色 0: RGB({palette[0]}, {palette[1]}, {palette[2]})")
        print(f"颜色 1: RGB({palette[3]}, {palette[4]}, {palette[5]})")
        print(f"颜色 2: RGB({palette[6]}, {palette[7]}, {palette[8]})")
    
    # 解码帧 3 (关键帧 - 完整画面)
    print("\n解码关键帧...")
    frame3 = frames[3]
    print(f"帧 3: size={frame3['size']}, param={frame3['param']}")
    
    # 解码像素
    pixels = decode_rle_frame_pixels(frame3['data'])
    
    # 创建图像
    print("\n创建图像...")
    img = Image.new('P', (320, 200))
    img.putdata(list(pixels[:64000]))
    
    # 设置调色板
    pal = list(palette)
    img.putpalette(pal)
    
    # 保存
    output_path = '/tmp/afm_decoded_frame.png'
    img.save(output_path)
    print(f"保存到: {output_path}")
    
    # 显示调色板信息
    print("\n调色板预览:")
    for i in range(0, 256, 16):
        colors = []
        for j in range(16):
            r = palette[(i + j) * 3]
            g = palette[(i + j) * 3 + 1]
            b = palette[(i + j) * 3 + 2]
            if r > 0 or g > 0 or b > 0:
                colors.append(f"#{i+j:02X}({r},{g},{b})")
        if colors:
            print(f"  {', '.join(colors[:4])}")


if __name__ == '__main__':
    main()
