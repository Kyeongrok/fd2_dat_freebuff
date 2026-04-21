#!/usr/bin/env python3
"""根据 sub_20421 反编译代码重新分析索引结构"""

import struct

with open('/home/yinming/fd2_dat/game/ANI.DAT', 'rb') as f:
    data = f.read()

print("=" * 70)
print("根据 sub_20421 重新分析 ANI.DAT 索引")
print("=" * 70)

# 反编译代码中的索引公式:
# fseek(_rb_, 4 * a5 + 6, 0);  // 偏移 = 4 * index + 6
# sub_373CA(v8, 1u, 8, _rb_);  // 读取 8 字节
# fseek(_rb_, *(_DWORD *)v8, 0); // 使用前 4 字节作为偏移

print("\n代码分析:")
print("  fseek(_rb_, 4 * a5 + 6, 0)  // 偏移公式")
print("  fread(v8, 1, 8, _rb_)      // 读取 8 字节")
print("  fseek(_rb_, *(DWORD*)v8, 0) // 使用前 4 字节")
print()

print("验证索引公式 (偏移 = 4 * index + 6):")
print("-" * 70)

for index in range(10):
    offset = 4 * index + 6
    if offset + 8 > len(data):
        break
    
    # 读取 8 字节
    raw = data[offset:offset+8]
    value = struct.unpack('<I', raw[:4])[0]
    value2 = struct.unpack('<I', raw[4:8])[0]
    
    # 检查这个值是否是有效的 AFM 偏移
    is_valid = value < len(data)
    has_afm = is_valid and b'AFM - Animation' in data[value:value+50] if value < len(data) - 50 else False
    
    print(f"  index={index}: 偏移=0x{offset:02X}, 值=0x{value:08X}, 次值=0x{value2:08X}", end="")
    if has_afm:
        print(" [AFM 有效]")
    elif is_valid:
        print(f" [数据]")
    else:
        print(" [无效]")

print("\n" + "=" * 70)
print("关键发现:")
print("-" * 70)
print("索引表是 4 字节条目（不是 8 字节）！")
print("每个条目是一个偏移值，指向 AFM 数据。")
print()

# 查找所有有效条目
print("有效索引条目:")
valid_indices = []
for index in range(50):
    offset = 4 * index + 6
    if offset + 8 > len(data):
        break
    
    value = struct.unpack('<I', data[offset:offset+4])[0]
    if value > 0 and value < len(data) - 100:
        # 检查是否是 AFM
        if b'AFM - Animation' in data[value:value+50]:
            valid_indices.append((index, value))
            print(f"  [{index}]: 0x{value:08X} - AFM 资源")

print(f"\n共 {len(valid_indices)} 个有效索引")

# 验证第一个索引
print("\n" + "=" * 70)
print("验证第一个索引 (index=0):")
print("-" * 70)
index = 0
offset = 4 * index + 6
value = struct.unpack('<I', data[offset:offset+4])[0]
print(f"  公式: 4 * {index} + 6 = {offset}")
print(f"  读取偏移: 0x{value:08X}")

# 检查这个偏移的内容
if value < len(data) - 200:
    print(f"  偏移处内容:")
    print(f"    前 50 字节: {data[value:value+50]}")
    
    # 解析 AFM 头
    if b'AFM' in data[value:value+50]:
        frame_count = struct.unpack('<H', data[value + 0xA5:value + 0xA7])[0]
        title = data[value + 0x51:value + 0x70].rstrip(b'\x00').decode('ascii', errors='replace')
        print(f"    AFM 帧数: {frame_count}")
        print(f"    AFM 标题: {title}")
