#!/usr/bin/env python3
"""
AFM 帧解码器 - 基于 sub_36FF4 反编译代码
"""

import struct
import os

# 全局调色板缓冲区 (768 字节 = 256 色 × 3 RGB)
palette = bytearray(768)

def cmd_00_fill_palette(data: bytes, pos: int) -> int:
    """命令 0x00: 填充调色板 (单色)"""
    global palette
    color = data[pos]
    for i in range(256):
        palette[i * 3] = color
        palette[i * 3 + 1] = color
        palette[i * 3 + 2] = color
    return 1  # 消耗 1 字节

def cmd_01_copy_palette(data: bytes, pos: int) -> int:
    """命令 0x01: 复制调色板 (768 字节)"""
    global palette
    palette[:] = data[pos:pos + 768]
    return 768

def cmd_02_rle_palette(data: bytes, pos: int) -> int:
    """命令 0x02: RLE 解码调色板"""
    global palette
    n768 = 0
    buf_pos = 0
    
    while n768 < 768:
        v4 = data[pos]
        pos += 1
        
        if (v4 & 0xC0) == 0xC0:
            # RLE 解码
            count = v4 & 0x3F
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

def decode_afm_frame(data: bytes) -> bytes:
    """解码 AFM 帧 (320x200 = 64000 像素)"""
    global palette
    
    pixels = bytearray(64000)
    pixel_pos = 0
    data_pos = 0
    
    while data_pos < len(data) and pixel_pos < 64000:
        cmd = data[data_pos]
        data_pos += 1
        
        if cmd == 0x00:
            # 填充调色板
            if data_pos < len(data):
                color = data[data_pos]
                data_pos += 1
                for i in range(256):
                    palette[i * 3] = color
                    palette[i * 3 + 1] = color
                    palette[i * 3 + 2] = color
        
        elif cmd == 0x01:
            # 复制调色板
            if data_pos + 768 <= len(data):
                palette[:] = data[data_pos:data_pos + 768]
                data_pos += 768
        
        elif cmd == 0x02:
            # RLE 调色板 (复杂，跳过)
            pass
        
        elif cmd < 0x10:
            # 其他命令，跳过
            pass
        
        else:
            # RLE 像素数据: [count][color1][color2]
            count = cmd
            if data_pos + 1 < len(data):
                color1 = data[data_pos]
                color2 = data[data_pos + 1]
                data_pos += 2
                
                for _ in range(count):
                    if pixel_pos < 64000:
                        pixels[pixel_pos] = color1
                        pixel_pos += 1
    
    return bytes(pixels)

def main():
    # 测试
    with open('/home/yinming/fd2_dat/game/ANI.DAT', 'rb') as f:
        data = f.read()
    
    print("=" * 70)
    print("AFM 帧解码测试")
    print("=" * 70)
    
    # 第一个 AFM 在偏移 0x2E
    offset = 0x2E
    frame_count = struct.unpack('<H', data[offset + 0xA5:offset + 0xA7])[0]
    
    print(f"AFM 偏移: 0x{offset:X}")
    print(f"帧数: {frame_count}")
    
    # 读取第一帧
    pos = offset + 0xAA
    
    print(f"\n帧数据起始: 0x{pos:X}")
    print(f"前 32 字节: {data[pos:pos+32].hex()}")
    
    # 尝试解码第一帧
    print("\n尝试解码第一帧...")
    
    # 第一帧通常设置调色板
    cmd = data[pos]
    print(f"命令字节: 0x{cmd:02X}")
    
    if cmd == 0x00:
        print("  -> 填充调色板命令")
        color = data[pos + 1]
        print(f"  -> 填充值: 0x{color:02X}")
        
        # 找到下一帧的开始
        # 调色板填充后的数据
        next_pos = pos + 2
        
        # 尝试找到下一个命令
        print(f"\n偏移 0x{next_pos:X} 的数据: {data[next_pos:next_pos+16].hex()}")
    
    print("\n" + "=" * 70)
    print("帧结构分析")
    print("=" * 70)
    
    # 分析前 10 帧
    for i in range(min(10, frame_count)):
        if pos + 10 > len(data):
            break
        
        cmd = data[pos]
        print(f"帧 {i}: 偏移 0x{pos:X}, 命令 0x{cmd:02X}", end="")
        
        if cmd == 0x00:
            # 填充调色板
            pos += 2
            print(" (填充调色板)")
        elif cmd == 0x01:
            # 复制调色板
            pos += 1 + 768
            print(" (复制调色板)")
        elif cmd == 0x02:
            # RLE 调色板 - 需要解码
            print(" (RLE 调色板)")
            # 简单跳过，假设下一个帧在新位置
            break
        else:
            # RLE 像素数据
            count = cmd
            if pos + 2 < len(data):
                color1 = data[pos + 1]
                color2 = data[pos + 2]
                print(f" (RLE: {count} 个像素, 颜色 0x{color1:02X})")
                pos += 3

if __name__ == '__main__':
    main()
