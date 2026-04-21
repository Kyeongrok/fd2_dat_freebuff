# ANI.DAT AFM 帧格式分析

## 帧头结构 (8 字节)

```
偏移 0-1: size (WORD) - 帧数据大小
偏移 2-3: param (WORD) - 解码参数
偏移 4-7: 保留
```

## 帧类型

| 类型 | 条件 | 说明 |
|------|------|------|
| 控制帧 | size = 0 | 初始化命令 |
| 关键帧 | size > 50000 | 完整画面数据 (~64KB) |
| 差分帧 | 0 < size <= 50000 | 帧间差异数据 |

## 帧序列分析 (第一个 AFM)

帧 0: size=0, param=62714 (0xF4FA) - 初始化
帧 1: size=0, param=256 (0x0100) - 调色板设置
帧 2: size=15872, param=1 - 第一帧数据
...

## 解码流程 (sub_20421)

```c
for (i = 0; i < frame_count; i++) {
    // 读取帧头
    fread(frame_header, 1, 8, file);
    size = frame_header[0];
    param = frame_header[1];
    
    // 读取帧数据
    if (size > 0) {
        fread(frame_data, 1, size, file);
    }
    
    // 解码帧
    sub_36FF4(param, frame_data);
    
    // 延迟
    delay(a6);
    
    // 检查退出
    if (check_exit()) break;
    
    // 更新显示
    update_display();
}
```

## 帧解码 (sub_36FF4)

帧数据包含一系列命令，由 param 控制循环次数：

```c
for (; param; --param) {
    cmd = *data++;
    result = funcs_37012[4 * cmd](data);
}
```

### 命令表 (funcs_37012)

| 命令 | 函数 | 说明 |
|------|------|------|
| 0x00 | sub_36E3D | 填充调色板 (单色) |
| 0x01 | sub_36E57 | 复制调色板 (768 字节) |
| 0x02 | sub_36E65 | RLE 解码调色板 |
| 0x03 | sub_36EA7 | 多段复制 |
| 0x04+ | ... | RLE 像素解码 |

### RLE 像素解码

对于命令 >= 0x04:
- 格式: `[count][color1][color2]`
- count: 重复次数
- color1: 调色板索引
- color2: 验证值 (应等于 color1)

输出为 320x200 = 64000 像素的调色板索引数组。

## 关键发现

1. **前两帧是控制帧**: 用于初始化调色板
2. **帧数据大小变化大**: 2 到 65279 字节
3. **关键帧约 64KB**: 接近 320x200 的原始大小
4. **差分帧较小**: 只包含变化部分
