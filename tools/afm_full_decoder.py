#!/usr/bin/env python3
"""
AFM 帧完整解码器
基于 sub_36FF4 反编译代码实现完整的帧解码
"""

import struct
import os
from PIL import Image

# 全局缓冲区
frame_buffer = bytearray(64000)  # 320x200 像素
palette = bytearray(768)  # 256色 × 3 RGB

def decode_frame(frame_data: bytes, param: int) -> bytes:
    """
    解码 AFM 帧
    param: 命令循环次数
    """
    global frame_buffer
    
    data_pos = 0
    
    for _ in range(param):
        if data_pos >= len(frame_data):
            break
        
        cmd = frame_data[data_pos]
        data_pos += 1
        
        # 根据命令类型处理
        if cmd == 0x00:
            # 填充调色板 (单色)
            if data_pos < len(frame_data):
                color = frame_data[data_pos]
                data_pos += 1
                for i in range(256):
                    palette[i * 3] = color
                    palette[i * 3 + 1] = color
                    palette[i * 3 + 2] = color
        
        elif cmd == 0x01:
            # 复制调色板 (768 字节)
            if data_pos + 768 <= len(frame_data):
                palette[:] = frame_data[data_pos:data_pos + 768]
                data_pos += 768
        
        elif cmd == 0x02:
            # RLE 解码调色板
            data_pos = decode_rle_palette(frame_data, data_pos)
        
        elif cmd == 0x03:
            # 多段复制
            data_pos = decode_multi_segment(frame_data, data_pos)
        
        else:
            # RLE 像素数据: [count][color1][color2]
            if data_pos + 1 < len(frame_data):
                count = cmd
                color1 = frame_data[data_pos]
                color2 = frame_data[data_pos + 1]
                data_pos += 2
                
                # 写入像素 (需要找到写入位置)
                # 这里需要更复杂的逻辑来处理帧缓冲区位置
                pass
    
    return bytes(frame_buffer)


def decode_rle_palette(data: bytes, pos: int) -> int:
    """解码 RLE 压缩的调色板 (命令 0x02)"""
    global palette
    
    n768 = 0
    buf_pos = 0
    
    while n768 < 768 and pos < len(data):
        v4 = data[pos]
        pos += 1
        
        if (v4 & 0xC0) == 0xC0:
            # RLE 解码
            count = v4 & 0x3F
            if pos < len(data):
                color = data[pos]
                pos += 1
                
                for _ in range(count):
                    if buf_pos < 768:
                        palette[buf_pos] = color
                        buf_pos += 1
                        n768 += 1
        else:
            # 直接复制
            if buf_pos < 768:
                palette[buf_pos] = v4
                buf_pos += 1
                n768 += 1
    
    return pos


def decode_multi_segment(data: bytes, pos: int) -> int:
    """解码多段复制 (命令 0x03)"""
    global frame_buffer
    
    # 读取段数
    if pos >= len(data):
        return pos
    
    segment_count = data[pos]
    pos += 1
    
    for _ in range(segment_count):
        if pos + 4 > len(data):
            break
        
        # 读取段信息: [offset_low][offset_high][count_low][count_high]
        offset = struct.unpack('<H', data[pos:pos+2])[0]
        count = struct.unpack('<H', data[pos+2:pos+4])[0]
        pos += 4
        
        # 复制数据
        for i in range(count):
            if pos < len(data) and offset + i < 64000:
                frame_buffer[offset + i] = data[pos]
                pos += 1
    
    return pos


def decode_rle_pixels(data: bytes, pos: int, pixel_pos: int, count: int) -> tuple:
    """解码 RLE 像素数据"""
    global frame_buffer
    
    if pos + 1 >= len(data):
        return pos, pixel_pos
    
    color = data[pos]
    pos += 2  # color1 和 color2 (验证)
    
    for _ in range(count):
        if pixel_pos < 64000:
            frame_buffer[pixel_pos] = color
            pixel_pos += 1
    
    return pos, pixel_pos


def analyze_frame_commands(frame_data: bytes, param: int) -> list:
    """分析帧中的命令序列"""
    commands = []
    pos = 0
    
    for i in range(param):
        if pos >= len(frame_data):
            break
        
        cmd = frame_data[pos]
        cmd_info = {'index': i, 'cmd': cmd, 'pos': pos}
        
        if cmd == 0x00:
            # 填充调色板
            if pos + 1 < len(frame_data):
                cmd_info['type'] = 'fill_palette'
                cmd_info['color'] = frame_data[pos + 1]
                pos += 2
            else:
                break
        elif cmd == 0x01:
            # 复制调色板
            cmd_info['type'] = 'copy_palette'
            cmd_info['size'] = 768
            pos += 1 + 768
        elif cmd == 0x02:
            # RLE 调色板
            cmd_info['type'] = 'rle_palette'
            break  # 复杂，跳过
        elif cmd == 0x03:
            # 多段复制
            cmd_info['type'] = 'multi_segment'
            break
        else:
            # RLE 像素
            cmd_info['type'] = 'rle_pixels'
            cmd_info['count'] = cmd
            if pos + 2 < len(frame_data):
                cmd_info['color'] = frame_data[pos + 1]
                pos += 3
            else:
                break
        
        commands.append(cmd_info)
    
    return commands


def main():
    with open('/home/yinming/fd2_dat/game/ANI.DAT', 'rb') as f:
        data = f.read()
    
    # 第一个 AFM
    offset = 0x2E
    frame_count = struct.unpack('<H', data[offset + 0xA5:offset + 0xA7])[0]
    
    print("=" * 70)
    print("AFM 帧命令分析")
    print("=" * 70)
    print(f"AFM 偏移: 0x{offset:X}")
    print(f"帧数: {frame_count}")
    
    # 读取帧
    pos = offset + 0xAA
    frames_info = []
    
    for i in range(frame_count):
        if pos + 8 > len(data):
            break
        
        size = struct.unpack('<H', data[pos:pos+2])[0]
        param = struct.unpack('<H', data[pos+2:pos+4])[0]
        pos += 8
        
        if size > 0:
            frame_data = data[pos:pos+size]
            frames_info.append({
                'index': i,
                'size': size,
                'param': param,
                'data': frame_data
            })
            pos += size
        else:
            frames_info.append({
                'index': i,
                'size': 0,
                'param': param,
                'data': b''
            })
    
    # 分析第一个有数据的帧
    print("\n分析帧命令序列:")
    for frame in frames_info[:5]:
        print(f"\n帧 {frame['index']}: size={frame['size']}, param={frame['param']}")
        
        if frame['size'] > 0:
            cmds = analyze_frame_commands(frame['data'], min(frame['param'], 20))
            for cmd in cmds[:10]:
                print(f"  命令 {cmd['index']}: 0x{cmd['cmd']:02X} - {cmd['type']}")
                if 'color' in cmd:
                    print(f"    颜色: 0x{cmd['color']:02X}")
                if 'count' in cmd:
                    print(f"    像素数: {cmd['count']}")
    
    # 尝试解码第三帧 (第一个有数据的帧)
    print("\n" + "=" * 70)
    print("解码测试")
    print("=" * 70)
    
    # 找到第一个数据帧
    data_frame = None
    for frame in frames_info:
        if frame['size'] > 10000:
            data_frame = frame
            break
    
    if data_frame:
        print(f"解码帧 {data_frame['index']} (size={data_frame['size']}, param={data_frame['param']})")
        
        # 分析这个帧的数据
        frame_data = data_frame['data']
        print(f"帧数据前 64 字节: {frame_data[:64].hex()}")
        
        # 尝试直接解码为像素
        # 如果帧数据接近 64000 字节，可能是原始像素数据
        if len(frame_data) >= 63000:
            print("\n帧数据大小接近 64000，可能是压缩或原始数据")
            
            # 检查是否是 RLE 压缩
            # RLE 格式: [count][byte][byte]
            # 如果 count > 0，则重复 byte count 次
            
            # 尝试简单的 RLE 解码
            pixels = bytearray(64000)
            pixel_pos = 0
            data_pos = 0
            
            while data_pos < len(frame_data) - 2 and pixel_pos < 64000:
                count = frame_data[data_pos]
                b1 = frame_data[data_pos + 1]
                b2 = frame_data[data_pos + 2]
                
                if count > 0:
                    for _ in range(min(count, 64000 - pixel_pos)):
                        pixels[pixel_pos] = b1
                        pixel_pos += 1
                    data_pos += 3
                else:
                    data_pos += 1
            
            print(f"解码后像素数: {pixel_pos}")
            
            # 保存为图像
            if pixel_pos >= 60000:
                # 需要调色板 - 使用默认灰度
                img = Image.new('P', (320, 200))
                img.putdata(pixels[:64000])
                
                # 创建灰度调色板
                pal = []
                for i in range(256):
                    pal.extend([i, i, i])
                img.putpalette(pal)
                
                output_path = '/tmp/afm_frame_test.png'
                img.save(output_path)
                print(f"保存图像到: {output_path}")


if __name__ == '__main__':
    main()
