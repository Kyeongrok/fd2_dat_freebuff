#!/usr/bin/env python3
"""调试 AFM 帧头结构"""

import struct

with open('/home/yinming/fd2_dat/game/ANI.DAT', 'rb') as f:
    data = f.read()

# 第一个 AFM 的偏移
offset = 0x2E

# AFM 头
print("=" * 70)
print("AFM 头分析 (偏移 0x2E)")
print("=" * 70)

print(f"偏移 0x00-0x50: 版权信息")
print(f"  内容: {data[offset:offset+0x50]}")

print(f"\n偏移 0x50: 终止符 = 0x{data[offset+0x50]:02X}")

print(f"\n偏移 0x51-0xA0: 标题")
print(f"  内容: {data[offset+0x51:offset+0xA0]}")

print(f"\n偏移 0xA0-0xA4: 元数据")
print(f"  内容: {data[offset+0xA0:offset+0xA5].hex()}")

print(f"\n偏移 0xA5-0xA6: 帧数")
frame_count = struct.unpack('<H', data[offset+0xA5:offset+0xA7])[0]
print(f"  值: {frame_count}")

print(f"\n偏移 0xA7-0xA9: 未知")
print(f"  内容: {data[offset+0xA7:offset+0xAA].hex()}")

print(f"\n偏移 0xAA+: 帧数据开始")

# 读取前几帧的头
print("\n" + "=" * 70)
print("帧头分析")
print("=" * 70)

pos = offset + 0xAA
for i in range(5):
    if pos + 10 > len(data):
        break
    
    # 显示原始数据
    raw = data[pos:pos+10]
    print(f"\n帧 {i} (偏移 0x{pos:X}):")
    print(f"  原始: {raw.hex()}")
    
    # 尝试不同解释
    # 解释 1: 2 字节大小 + 2 字节参数
    size1 = struct.unpack('<H', raw[0:2])[0]
    param1 = struct.unpack('<H', raw[2:4])[0]
    print(f"  解释1: size={size1}, param={param1}")
    
    # 解释 2: 4 字节大小
    size2 = struct.unpack('<I', raw[0:4])[0]
    print(f"  解释2: size={size2}")
    
    # 解释 3: 命令字节
    cmd = raw[0]
    print(f"  解释3: cmd=0x{cmd:02X}, 数据: {raw[1:10].hex()}")
    
    # 检查是否是已知的帧命令
    if cmd == 0x00:
        print(f"  -> 填充调色板命令")
        # 下一个字节可能是颜色数量
        colors = struct.unpack('<H', raw[1:3])[0]
        print(f"     颜色数: {colors}")
        pos += 3 + colors * 3
    elif cmd == 0x01:
        print(f"  -> 复制调色板命令")
        pos += 1 + 768
    elif cmd == 0x02:
        print(f"  -> RLE 调色板命令")
        pos += 1
    else:
        print(f"  -> 可能是 RLE 数据")
        pos += 3
