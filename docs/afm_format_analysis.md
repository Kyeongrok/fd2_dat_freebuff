# ANI.DAT 与 AFM 格式完整分析报告

## 1. 文件结构概览

### ANI.DAT 容器格式

```
偏移 0x00-0x05: 魔数 "LLLLLL" (6字节)
偏移 0x06-0x07: 索引条目数 (WORD)
偏移 0x08-0x09: 保留
偏移 0x0A+:     索引表 (每条目 4 字节偏移)
```

### 索引公式

```c
// 在 sub_20421 中
fseek(file, 4 * index + 6, SEEK_SET);  // 定位到索引表
fread(&offset, 4, 1, file);             // 读取 4 字节偏移
fseek(file, offset, SEEK_SET);          // 定位到 AFM 数据
```

## 2. AFM 资源格式

### AFM 头部结构 (173 字节)

```
偏移 0x00-0x4F: 版权信息
  "AFM - Animation File Manager Version 1.00 Copyright (C) 1993 Lo Yuan Tsung"
  
偏移 0x50:      终止符 0x1A
偏移 0x51-0x9F: 标题 ".Empty Title." 和填充
偏移 0xA0-0xA4: 元数据 (宽度相关)
偏移 0xA5-0xA6: 帧数 (WORD) - 关键字段！
偏移 0xA7-0xA9: 保留
偏移 0xAA+:    帧数据表
```

### 帧数据结构

每帧由帧头和帧数据组成：

```
帧头 (8 字节):
  [2字节] 帧数据大小
  [2字节] 帧参数 (传递给解码函数)
  [4字节] 保留/未使用

帧数据:
  [帧数据大小] 编码的像素数据
```

## 3. 帧解码函数表

`sub_36FF4` 是帧分发函数，通过 `funcs_37012` 函数表调用不同的解码器：

| 命令字节 | 函数 | 说明 |
|---------|------|------|
| 0x00 | sub_36E3D | 填充调色板 (192 字节) |
| 0x01 | sub_36E57 | 直接复制 (768 字节) |
| 0x02 | sub_36E65 | RLE 解码到调色板 (768 字节) |
| 0x03 | sub_36EA7 | 多段复制 |
| 0x04 | sub_36EE0 | 填充整个帧 (64000 字节) |
| 0x05 | sub_36F08 | 直接复制帧数据 |
| 0x06 | sub_36F24 | RLE 解码帧数据 (64000 字节) |
| 0x07 | sub_36F69 | 像素点设置 |
| 0x08 | sub_36F82 | RLE 像素填充 |
| 0x09 | sub_36FAC | 多段复制 |

## 4. RLE 解码算法

### 调色板 RLE (sub_36E65)

```c
while (n768 != 768) {
    byte = *data++;
    if ((byte & 0xC0) == 0xC0) {
        // RLE 模式: 高 2 位为 11
        count = byte & 0x3F;  // 低 6 位是计数
        value = *data++;      // 下一个字节是值
        for (i = count >> 1; i; --i)
            *palette++ = value;
        memset(palette, value, count & 1);
        n768 += count;
    } else {
        // 直接模式
        *palette++ = byte;
        n768++;
    }
}
```

### 帧数据 RLE (sub_36F24)

```c
while (n64000 != 64000) {
    byte = *data++;
    if ((byte & 0xC0) == 0xC0) {
        // RLE 模式
        count = byte & 0x3F;
        value = *data++;
        for (i = count >> 1; i; --i)
            *frame++ = value;
        memset(frame, value, count & 1);
        n64000 += count;
    } else {
        // 直接模式
        *frame++ = byte;
        n64000++;
    }
}
```

## 5. 完整加载流程

```c
// 1. 打开 ANI.DAT
file = fopen("ANI.DAT", "rb");

// 2. 定位到索引表
fseek(file, 4 * resource_index + 6, SEEK_SET);

// 3. 读取资源偏移
fread(&offset, 4, 1, file);

// 4. 定位到 AFM 数据
fseek(file, offset, SEEK_SET);

// 5. 读取 AFM 头部 (173 字节)
fread(header, 173, 1, file);
frame_count = *(WORD*)(header + 165);  // 偏移 0xA5

// 6. 初始化调色板缓冲区
sub_36FD3(64000, video_buffer, palette_buffer);

// 7. 循环读取每帧
for (i = 0; i < frame_count; i++) {
    fread(frame_header, 8, 1, file);
    fread(frame_data, frame_header[0], 1, file);
    sub_36FF4(frame_header[1], frame_data);  // 解码帧
    delay(frame_delay);                       // 延迟
}

// 8. 关闭文件
fclose(file);
```

## 6. 关键函数地址

| 地址 | 函数 | 说明 |
|------|------|------|
| 0x111BA | sub_111BA | DAT 文件通用加载函数 |
| 0x20421 | sub_20421 | ANI.DAT 专用加载函数 |
| 0x36FD3 | sub_36FD3 | 初始化缓冲区 |
| 0x36FF4 | sub_36FF4 | 帧解码分发函数 |

## 7. 内存布局

```
n64000:  帧缓冲区大小 (64000 = 320x200)
n655360: 视频内存地址 (0xA0000)
buf:     调色板缓冲区 (768 字节)
```

## 8. 与 FDOTHER.DAT 的区别

| 特性 | ANI.DAT | FDOTHER.DAT |
|------|---------|-------------|
| 索引大小 | 4 字节 | 8 字节 (start, end) |
| 资源类型 | AFM 动画 | 混合资源 (调色板、图标等) |
| 帧结构 | 多帧动画 | 单帧图像 |
| 使用场景 | 游戏内动画 | 界面元素 |

## 9. 示例代码

### Python 解码器

```python
import struct

def decode_ani_dat(filename, resource_index):
    with open(filename, 'rb') as f:
        # 定位到索引表
        f.seek(4 * resource_index + 6)
        offset = struct.unpack('<I', f.read(4))[0]
        
        # 定位到 AFM 数据
        f.seek(offset)
        
        # 读取头部
        header = f.read(173)
        frame_count = struct.unpack('<H', header[165:167])[0]
        
        frames = []
        for _ in range(frame_count):
            # 读取帧头
            frame_header = f.read(8)
            size = struct.unpack('<H', frame_header[0:2])[0]
            param = struct.unpack('<H', frame_header[2:4])[0]
            
            # 读取帧数据
            data = f.read(size)
            frames.append((param, data))
        
        return frames

def decode_rle(data, size):
    result = bytearray()
    i = 0
    while len(result) < size:
        byte = data[i]
        i += 1
        if (byte & 0xC0) == 0xC0:
            count = byte & 0x3F
            value = data[i]
            i += 1
            result.extend([value] * count)
        else:
            result.append(byte)
    return bytes(result)
```

## 10. 总结

ANI.DAT 使用嵌套的 AFM (Animation File Manager) 格式存储动画数据。每个 AFM 资源包含：

1. 173 字节头部（包含版权信息和帧数）
2. 多个帧，每帧有 8 字节头和编码数据
3. 使用 RLE 压缩算法解码帧数据
4. 帧数据通过命令字节分发到不同的解码函数

这种设计允许高效存储和播放动画序列，同时保持与 FD2 游戏引擎的兼容性。
