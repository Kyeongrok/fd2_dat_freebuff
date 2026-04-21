#!/usr/bin/env python3
"""
AFM (Animation File Manager) 解码器
用于解码 FD2 游戏中的 ANI.DAT 动画文件

基于 IDA Pro 反编译代码分析:
- sub_20421: ANI.DAT 加载函数
- sub_36FF4: 帧解码分发函数
- sub_36E65: 调色板 RLE 解码
- sub_36F24: 帧数据 RLE 解码
"""

import struct
import sys
from pathlib import Path
from dataclasses import dataclass
from typing import List, Tuple, Optional

@dataclass
class AFMHeader:
    """AFM 头部结构"""
    copyright_info: bytes      # 0x00-0x4F: 版权信息
    terminator: int            # 0x50: 终止符 0x1A
    title: bytes               # 0x51-0x9F: 标题
    metadata: bytes            # 0xA0-0xA4: 元数据
    frame_count: int           # 0xA5-0xA6: 帧数
    
@dataclass
class AFMFrame:
    """AFM 帧结构"""
    size: int                  # 帧数据大小
    param: int                 # 帧参数 (用于解码函数选择)
    data: bytes                # 帧数据

class AFMDecoder:
    """AFM 解码器"""
    
    # 命令处理函数表 (对应 sub_36FF4 中的 funcs_37012)
    COMMAND_HANDLERS = {
        0x00: 'fill_palette',      # sub_36E3D: 填充调色板 (192 字节)
        0x01: 'copy_palette',      # sub_36E57: 直接复制调色板
        0x02: 'rle_palette',       # sub_36E65: RLE 解码调色板
        0x03: 'multi_copy',        # sub_36EA7: 多段复制
        0x04: 'fill_frame',        # sub_36EE0: 填充整个帧
        0x05: 'copy_frame',        # sub_36F08: 直接复制帧
        0x06: 'rle_frame',         # sub_36F24: RLE 解码帧
        0x07: 'pixel_set',         # sub_36F69: 像素点设置
        0x08: 'rle_pixel_fill',    # sub_36F82: RLE 像素填充
        0x09: 'multi_copy_frame',  # sub_36FAC: 多段复制帧
    }
    
    def __init__(self):
        self.frame_buffer = bytearray(64000)  # 320x200 像素
        self.palette_buffer = bytearray(768)  # 256 色 * 3 字节
        self.video_buffer = None              # 模拟视频内存
        
    def decode_rle(self, data: bytes, target_size: int) -> bytearray:
        """
        RLE 解码算法 (对应 sub_36F24)
        
        格式:
        - 如果高 2 位是 11: [count|0xC0][value] = 重复 value count 次
        - 否则: 直接使用该字节
        """
        result = bytearray()
        i = 0
        while len(result) < target_size and i < len(data):
            byte = data[i]
            i += 1
            
            if (byte & 0xC0) == 0xC0:  # RLE 模式
                count = byte & 0x3F
                if i < len(data):
                    value = data[i]
                    i += 1
                    result.extend([value] * count)
            else:  # 直接模式
                result.append(byte)
        
        return result[:target_size]
    
    def decode_rle_palette(self, data: bytes) -> bytearray:
        """
        调色板 RLE 解码 (对应 sub_36E65)
        目标大小: 768 字节
        """
        return self.decode_rle(data, 768)
    
    def decode_rle_frame(self, data: bytes) -> bytearray:
        """
        帧数据 RLE 解码 (对应 sub_36F24)
        目标大小: 64000 字节
        """
        return self.decode_rle(data, 64000)
    
    def process_frame(self, param: int, data: bytes) -> None:
        """
        处理帧数据 (对应 sub_36FF4)
        根据参数选择解码函数
        """
        handler = self.COMMAND_HANDLERS.get(param, 'unknown')
        
        if handler == 'fill_palette':
            # sub_36E3D: 填充调色板
            value = data[0]
            self.palette_buffer[:] = bytes([value]) * 192
            
        elif handler == 'copy_palette':
            # sub_36E57: 直接复制调色板
            size = min(len(data), 768)
            self.palette_buffer[:size] = data[:size]
            
        elif handler == 'rle_palette':
            # sub_36E65: RLE 解码调色板
            decoded = self.decode_rle_palette(data)
            self.palette_buffer[:] = decoded
            
        elif handler == 'fill_frame':
            # sub_36EE0: 填充整个帧
            value = data[0]
            self.frame_buffer[:] = bytes([value]) * 64000
            
        elif handler == 'copy_frame':
            # sub_36F08: 直接复制帧
            size = min(len(data), 64000)
            self.frame_buffer[:size] = data[:size]
            
        elif handler == 'rle_frame':
            # sub_36F24: RLE 解码帧
            decoded = self.decode_rle_frame(data)
            self.frame_buffer[:] = decoded
            
        elif handler == 'multi_copy':
            # sub_36EA7: 多段复制
            self._multi_copy(data)
            
        elif handler == 'pixel_set':
            # sub_36F69: 像素点设置
            self._pixel_set(data)
            
        elif handler == 'rle_pixel_fill':
            # sub_36F82: RLE 像素填充
            self._rle_pixel_fill(data)
            
        elif handler == 'multi_copy_frame':
            # sub_36FAC: 多段复制帧
            self._multi_copy_frame(data)
            
        else:
            print(f"未知命令: {param}")
    
    def _multi_copy(self, data: bytes) -> None:
        """多段复制 (对应 sub_36EA7)"""
        count = data[0]
        pos = 1
        for _ in range(count):
            offset = data[pos]
            pos += 1
            size = data[pos]
            pos += 1
            self.frame_buffer[offset:offset+size] = data[pos:pos+size]
            pos += size
    
    def _pixel_set(self, data: bytes) -> None:
        """像素点设置 (对应 sub_36F69)"""
        count = struct.unpack('<H', data[0:2])[0]
        pos = 2
        for _ in range(count):
            offset = struct.unpack('<H', data[pos:pos+2])[0]
            pos += 2
            value = data[pos]
            pos += 1
            self.frame_buffer[offset] = value
    
    def _rle_pixel_fill(self, data: bytes) -> None:
        """RLE 像素填充 (对应 sub_36F82)"""
        count = struct.unpack('<H', data[0:2])[0]
        pos = 2
        for _ in range(count):
            offset = struct.unpack('<H', data[pos:pos+2])[0]
            pos += 2
            fill_count = data[pos]
            pos += 1
            value = data[pos]
            pos += 1
            self.frame_buffer[offset:offset+fill_count] = bytes([value]) * fill_count
    
    def _multi_copy_frame(self, data: bytes) -> None:
        """多段复制帧 (对应 sub_36FAC)"""
        count = struct.unpack('<H', data[0:2])[0]
        pos = 2
        for _ in range(count):
            offset = struct.unpack('<H', data[pos:pos+2])[0]
            pos += 2
            size = data[pos]
            pos += 1
            self.frame_buffer[offset:offset+size] = data[pos:pos+size]
            pos += size


class ANIDATParser:
    """ANI.DAT 文件解析器"""
    
    MAGIC = b'LLLLLL'
    
    def __init__(self, filepath: str):
        self.filepath = Path(filepath)
        self.data = None
        self.index_count = 0
        self.index_table = []
        
    def parse(self) -> bool:
        """解析 ANI.DAT 文件"""
        with open(self.filepath, 'rb') as f:
            self.data = f.read()
        
        # 检查魔数
        if self.data[:6] != self.MAGIC:
            print(f"错误: 无效的魔数 {self.data[:6]}")
            return False
        
        # 读取索引数量
        self.index_count = struct.unpack('<H', self.data[6:8])[0]
        print(f"索引条目数: {self.index_count}")
        
        # 读取索引表 (每条目 8 字节: start, end)
        self.index_table = []
        for i in range(min(self.index_count, 50)):  # 限制读取数量
            offset = 0x0A + i * 8  # 8 字节条目
            if offset + 8 <= len(self.data):
                start = struct.unpack('<I', self.data[offset:offset+4])[0]
                end = struct.unpack('<I', self.data[offset+4:offset+8])[0]
                # 验证数据有效性
                if start < len(self.data) and end <= len(self.data) and end > start:
                    self.index_table.append((start, end, end - start))
                else:
                    self.index_table.append((start, end, 0))
        
        return True
    
    def get_afm_resource(self, index: int) -> Optional[Tuple[bytes, int, int]]:
        """获取指定索引的 AFM 资源"""
        if index >= len(self.index_table):
            return None
        
        start, end, size = self.index_table[index]
        if index + 1 < len(self.index_table):
            _, next_end, _ = self.index_table[index + 1]
        else:
            end = len(self.data)
        
        return self.data[start:end], start, end - start
    
    def parse_afm(self, data: bytes) -> Tuple[AFMHeader, List[AFMFrame]]:
        """解析 AFM 数据"""
        # 读取头部 (173 字节)
        header = AFMHeader(
            copyright_info=data[0:0x50],
            terminator=data[0x50],
            title=data[0x51:0xA0],
            metadata=data[0xA0:0xA5],
            frame_count=struct.unpack('<H', data[0xA5:0xA7])[0]
        )
        
        # 读取帧数据
        frames = []
        pos = 0xAA  # 帧数据起始位置
        
        for i in range(header.frame_count):
            if pos + 8 > len(data):
                break
            
            # 读取帧头 (8 字节)
            size = struct.unpack('<H', data[pos:pos+2])[0]
            param = struct.unpack('<H', data[pos+2:pos+4])[0]
            pos += 8
            
            # 读取帧数据
            if pos + size > len(data):
                break
            
            frame_data = data[pos:pos+size]
            pos += size
            
            frames.append(AFMFrame(size=size, param=param, data=frame_data))
        
        return header, frames
    
    def dump_info(self) -> None:
        """输出文件信息"""
        print(f"\n文件: {self.filepath}")
        print(f"大小: {len(self.data):,} 字节")
        print(f"魔数: {self.data[:6]}")
        print(f"索引条目数: {self.index_count}")
        
        print("\n索引表:")
        for i, offset in enumerate(self.index_table[:10]):
            print(f"  [{i}]: 偏移 0x{offset:08X}")
        
        if self.index_count > 10:
            print(f"  ... ({self.index_count - 10} 更多条目)")


def main():
    if len(sys.argv) < 2:
        # 默认路径
        filepath = "/home/yinming/fd2_dat/game/ANI.DAT"
    else:
        filepath = sys.argv[1]
    
    print("=" * 60)
    print("ANI.DAT / AFM 解码器")
    print("=" * 60)
    
    parser = ANIDATParser(filepath)
    if not parser.parse():
        sys.exit(1)
    
    parser.dump_info()
    
    # 解析第一个 AFM 资源
    print("\n" + "=" * 60)
    print("解析第一个 AFM 资源")
    print("=" * 60)
    
    afm_data = parser.get_afm_resource(0)
    if afm_data:
        header, frames = parser.parse_afm(afm_data)
        
        print(f"\nAFM 头部:")
        print(f"  版权信息: {header.copyright_info[:50]}...")
        print(f"  帧数: {header.frame_count}")
        
        print(f"\n帧数据 (前 10 帧):")
        for i, frame in enumerate(frames[:10]):
            handler = AFMDecoder.COMMAND_HANDLERS.get(frame.param, 'unknown')
            print(f"  帧 {i}: 大小={frame.size:5d}, 参数={frame.param} ({handler})")
        
        if len(frames) > 10:
            print(f"  ... ({len(frames) - 10} 更多帧)")
    
    # 查找所有 AFM 签名
    print("\n" + "=" * 60)
    print("扫描文件中的 AFM 签名")
    print("=" * 60)
    
    afm_signature = b'AFM - Animation File Manager'
    pos = 0
    found = 0
    while True:
        pos = parser.data.find(afm_signature, pos)
        if pos == -1:
            break
        found += 1
        print(f"  AFM #{found}: 偏移 0x{pos:08X}")
        pos += 1
    
    print(f"\n共找到 {found} 个 AFM 资源")


if __name__ == '__main__':
    main()
