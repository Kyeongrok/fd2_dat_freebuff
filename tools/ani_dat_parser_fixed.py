#!/usr/bin/env python3
"""
ANI.DAT 正确索引解析器
基于 sub_20421 反编译代码的索引公式: offset = 4 * index + 6
"""

import struct
import os
from dataclasses import dataclass
from typing import List, Tuple, Optional

@dataclass
class AFMHeader:
    copyright_info: bytes
    frame_count: int
    title: str

@dataclass
class AFMFrame:
    size: int
    param: int
    data: bytes

class ANIDATParser:
    def __init__(self, filepath: str):
        self.filepath = filepath
        self.data = None
        self.index_table = []
        
    def load(self) -> bool:
        with open(self.filepath, 'rb') as f:
            self.data = f.read()
        
        # 验证魔数
        if self.data[:6] != b'LLLLLL':
            return False
        
        # 读取索引表
        # 索引公式: offset = 4 * index + 6
        for index in range(100):
            offset = 4 * index + 6
            if offset + 4 > len(self.data):
                break
            
            value = struct.unpack('<I', self.data[offset:offset+4])[0]
            
            # 检查有效性
            if value == 0 or value >= len(self.data) - 100:
                continue
            
            # 检查是否是 AFM
            if b'AFM - Animation' in self.data[value:value+50]:
                self.index_table.append((index, value))
        
        return True
    
    def get_afm_count(self) -> int:
        return len(self.index_table)
    
    def get_afm_info(self, index: int) -> Optional[Tuple[int, int, int]]:
        """返回 (偏移, 帧数, 标题)"""
        if index >= len(self.index_table):
            return None
        
        idx, offset = self.index_table[index]
        
        # 读取 AFM 头
        frame_count = struct.unpack('<H', self.data[offset + 0xA5:offset + 0xA7])[0]
        title = self.data[offset + 0x51:offset + 0x70].rstrip(b'\x00').decode('ascii', errors='replace')
        
        return (offset, frame_count, title)
    
    def decode_frame(self, frame_data: bytes, param: int) -> bytes:
        """解码 AFM 帧 (320x200 = 64000 像素)"""
        pixels = bytearray(64000)
        pos = 0
        j = 0
        
        while j < len(frame_data) - 2 and pos < 64000:
            cmd = frame_data[j]
            
            if cmd == 0x00:
                # 填充调色板命令
                pass
            elif cmd == 0x01:
                # 复制调色板
                pass
            elif cmd == 0x02:
                # RLE 解码调色板
                pass
            else:
                # RLE 解码: [count][byte][byte]
                count = cmd
                b1 = frame_data[j + 1]
                b2 = frame_data[j + 2]
                
                if count > 0 and pos + count <= 64000:
                    for _ in range(count):
                        pixels[pos] = b1
                        pos += 1
                
                j += 3
                continue
            
            j += 1
        
        return bytes(pixels)
    
    def extract_afm_frames(self, index: int) -> List[AFMFrame]:
        """提取指定 AFM 的所有帧"""
        if index >= len(self.index_table):
            return []
        
        idx, offset = self.index_table[index]
        
        # 读取帧数
        frame_count = struct.unpack('<H', self.data[offset + 0xA5:offset + 0xA7])[0]
        
        frames = []
        pos = offset + 0xAA  # 帧数据起始位置
        
        for i in range(frame_count):
            if pos + 8 > len(self.data):
                break
            
            # 读取帧头 (8 字节)
            size = struct.unpack('<H', self.data[pos:pos+2])[0]
            param = struct.unpack('<H', self.data[pos+2:pos+4])[0]
            pos += 8
            
            # 读取帧数据
            if pos + size > len(self.data):
                break
            
            frame_data = self.data[pos:pos+size]
            frames.append(AFMFrame(size=size, param=param, data=frame_data))
            pos += size
        
        return frames
    
    def export_frames(self, index: int, output_dir: str) -> int:
        """导出指定 AFM 的所有帧为 RAW 文件"""
        os.makedirs(output_dir, exist_ok=True)
        
        frames = self.extract_afm_frames(index)
        
        for i, frame in enumerate(frames):
            raw_data = self.decode_frame(frame.data, frame.param)
            output_path = os.path.join(output_dir, f"frame_{i:04d}.raw")
            with open(output_path, 'wb') as f:
                f.write(raw_data)
        
        return len(frames)

def main():
    parser = ANIDATParser('/home/yinming/fd2_dat/game/ANI.DAT')
    if not parser.load():
        print("加载失败")
        return
    
    print("=" * 70)
    print("ANI.DAT 索引表 (修正版)")
    print("=" * 70)
    print(f"文件大小: {len(parser.data):,} 字节")
    print(f"AFM 资源数: {parser.get_afm_count()}")
    print()
    
    print("索引详情:")
    print("-" * 70)
    print(f"{'索引':<6} {'偏移':<12} {'帧数':<6} {'标题'}")
    print("-" * 70)
    
    for i in range(parser.get_afm_count()):
        info = parser.get_afm_info(i)
        if info:
            offset, frame_count, title = info
            print(f"{i:<6} 0x{offset:08X}   {frame_count:<6} {title[:30]}")
    
    print()
    print("=" * 70)
    print("帧解码测试 (第一个 AFM):")
    print("-" * 70)
    
    frames = parser.extract_afm_frames(0)
    print(f"提取帧数: {len(frames)}")
    
    if frames:
        print(f"第一帧: size={frames[0].size}, param={frames[0].param}")
        print(f"前 32 字节: {frames[0].data[:32].hex()}")
        
        # 导出前 5 帧
        output_dir = '/tmp/afm_test'
        count = parser.export_frames(0, output_dir)
        print(f"\n导出 {count} 帧到 {output_dir}")

if __name__ == '__main__':
    main()
