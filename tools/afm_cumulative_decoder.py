#!/usr/bin/env python3
"""
AFM 动画完整解码器 - 支持差分帧累积渲染
"""

import struct
from PIL import Image
import os

class AFMAnimationDecoder:
    def __init__(self, data: bytes):
        self.data = data
        self.palette = bytearray(768)
        self.frame_buffer = bytearray(64000)  # 累积的帧缓冲区
        self.initialized = False
        
    def parse_afm(self, offset: int) -> dict:
        """解析 AFM 头"""
        if b'AFM' not in self.data[offset:offset+50]:
            return None
        
        frame_count = struct.unpack('<H', self.data[offset + 0xA5:offset + 0xA7])[0]
        title = self.data[offset + 0x51:offset + 0x70].rstrip(b'\x00').decode('ascii', errors='replace')
        
        return {
            'offset': offset,
            'frame_count': frame_count,
            'title': title
        }
    
    def get_frames(self, offset: int, frame_count: int) -> list:
        """获取所有帧信息"""
        frames = []
        pos = offset + 0xAA
        
        for i in range(frame_count):
            if pos + 8 > len(self.data):
                break
            
            size = struct.unpack('<H', self.data[pos:pos+2])[0]
            param = struct.unpack('<H', self.data[pos+2:pos+4])[0]
            pos += 8
            
            frame_data = self.data[pos:pos+size] if size > 0 else b''
            
            frames.append({
                'index': i,
                'size': size,
                'param': param,
                'data': frame_data,
                'data_offset': pos
            })
            
            pos += size
        
        return frames
    
    def decode_palette_command(self, cmd: int, data: bytes, pos: int) -> int:
        """解码调色板命令，返回消耗的字节数"""
        if cmd == 0x00:
            # 填充调色板
            if pos < len(data):
                color = data[pos]
                for i in range(256):
                    self.palette[i * 3] = color
                    self.palette[i * 3 + 1] = color
                    self.palette[i * 3 + 2] = color
                return 1
        
        elif cmd == 0x01:
            # 复制调色板
            if pos + 768 <= len(data):
                self.palette[:] = data[pos:pos + 768]
                return 768
        
        elif cmd == 0x02:
            # RLE 解码调色板
            return self._decode_rle_palette(data, pos)
        
        return 0
    
    def _decode_rle_palette(self, data: bytes, pos: int) -> int:
        """RLE 解码调色板"""
        start_pos = pos
        buf_pos = 0
        
        while buf_pos < 768 and pos < len(data):
            byte = data[pos]
            pos += 1
            
            if (byte & 0xC0) == 0xC0:
                count = byte & 0x3F
                if pos < len(data):
                    color = data[pos]
                    pos += 1
                    for _ in range(count):
                        if buf_pos < 768:
                            self.palette[buf_pos] = color
                            buf_pos += 1
            else:
                if buf_pos < 768:
                    self.palette[buf_pos] = byte
                    buf_pos += 1
        
        return pos - start_pos
    
    def decode_frame_commands(self, frame_data: bytes, param: int) -> None:
        """
        解码帧命令，更新帧缓冲区
        这是累积渲染的核心函数
        """
        pos = 0
        cmd_count = 0
        
        while pos < len(frame_data) and cmd_count < param:
            cmd = frame_data[pos]
            pos += 1
            cmd_count += 1
            
            if cmd <= 0x02:
                # 调色板命令
                consumed = self.decode_palette_command(cmd, frame_data, pos)
                pos += consumed
            
            elif cmd == 0x03:
                # 多段复制 - 直接更新帧缓冲区的指定位置
                if pos >= len(frame_data):
                    break
                
                segment_count = frame_data[pos]
                pos += 1
                
                for _ in range(segment_count):
                    if pos + 4 > len(frame_data):
                        break
                    
                    offset = struct.unpack('<H', frame_data[pos:pos+2])[0]
                    count = struct.unpack('<H', frame_data[pos+2:pos+4])[0]
                    pos += 4
                    
                    # 复制数据到帧缓冲区指定位置
                    for i in range(count):
                        if pos < len(frame_data) and offset + i < 64000:
                            self.frame_buffer[offset + i] = frame_data[pos]
                            pos += 1
            
            elif cmd == 0x04:
                # 清除/填充帧缓冲区
                if pos < len(frame_data):
                    fill_color = frame_data[pos]
                    pos += 1
                    for i in range(64000):
                        self.frame_buffer[i] = fill_color
            
            elif cmd == 0x05:
                # 像素复制 (从指定位置开始)
                if pos + 2 < len(frame_data):
                    start_pos = struct.unpack('<H', frame_data[pos:pos+2])[0]
                    count = frame_data[pos + 2]
                    color = frame_data[pos + 3] if pos + 3 < len(frame_data) else 0
                    pos += 4
                    
                    for i in range(count):
                        if start_pos + i < 64000:
                            self.frame_buffer[start_pos + i] = color
            
            else:
                # RLE 像素数据: [count][color][verify]
                # count 就是 cmd 本身 (>= 6)
                count = cmd
                if pos + 1 < len(frame_data):
                    color = frame_data[pos]
                    verify = frame_data[pos + 1]
                    pos += 2
                    
                    # RLE 解码 - 写入当前位置
                    # 需要跟踪写入位置
                    
                    # 注意: 这种简单的 RLE 不指定位置
                    # 可能需要维护一个隐式的写入位置
                    pass
    
    def decode_rle_frame(self, frame_data: bytes) -> None:
        """
        解码 RLE 压缩的帧数据
        格式: [count][color][verify] 重复
        """
        pos = 0
        pixel_pos = 0
        
        while pos < len(frame_data) - 2 and pixel_pos < 64000:
            count = frame_data[pos]
            
            if count == 0:
                pos += 1
                continue
            
            color = frame_data[pos + 1]
            verify = frame_data[pos + 2]
            
            for _ in range(min(count, 64000 - pixel_pos)):
                self.frame_buffer[pixel_pos] = color
                pixel_pos += 1
            
            pos += 3
    
    def decode_full_frame(self, frame_data: bytes) -> None:
        """解码完整帧 (关键帧)"""
        self.frame_buffer = bytearray(64000)
        self.decode_rle_frame(frame_data)
    
    def render_frame(self, output_path: str) -> None:
        """渲染当前帧缓冲区为图像"""
        img = Image.new('P', (320, 200))
        img.putdata(list(self.frame_buffer))
        
        # 设置调色板
        pal = []
        for i in range(256):
            r = min(255, self.palette[i * 3] * 4)
            g = min(255, self.palette[i * 3 + 1] * 4)
            b = min(255, self.palette[i * 3 + 2] * 4)
            pal.extend([r, g, b])
        
        img.putpalette(pal)
        img.save(output_path)
    
    def decode_animation(self, afm_offset: int, output_dir: str, max_frames: int = None) -> int:
        """
        解码完整动画，保存所有帧
        返回解码的帧数
        """
        afm_info = self.parse_afm(afm_offset)
        if not afm_info:
            return 0
        
        frames = self.get_frames(afm_offset, afm_info['frame_count'])
        os.makedirs(output_dir, exist_ok=True)
        
        decoded_count = 0
        
        for frame in frames:
            if max_frames and decoded_count >= max_frames:
                break
            
            # 控制帧
            if frame['size'] == 0:
                # 处理控制帧的参数
                if frame['param'] == 256:  # 可能是调色板设置
                    pass
                continue
            
            frame_data = frame['data']
            
            # 检查是否是调色板帧
            if frame_data[0] in [0x00, 0x01, 0x02]:
                # 调色板命令
                cmd = frame_data[0]
                self.decode_palette_command(cmd, frame_data, 1)
                continue
            
            # 判断帧类型
            if frame['size'] > 50000:
                # 关键帧 - 重置帧缓冲区
                self.decode_full_frame(frame_data)
            else:
                # 差分帧 - 使用命令解码
                # 但大多数差分帧实际上是 RLE 编码的
                self.decode_rle_frame(frame_data)
            
            # 渲染并保存
            output_path = os.path.join(output_dir, f'frame_{decoded_count:04d}.png')
            self.render_frame(output_path)
            decoded_count += 1
        
        return decoded_count


def main():
    with open('/home/yinming/fd2_dat/game/ANI.DAT', 'rb') as f:
        data = f.read()
    
    decoder = AFMAnimationDecoder(data)
    
    print("=" * 70)
    print("AFM 动画解码器 - 累积渲染")
    print("=" * 70)
    
    # 解码第一个 AFM 的所有帧
    afm_offset = 0x2E
    afm_info = decoder.parse_afm(afm_offset)
    
    print(f"AFM 偏移: 0x{afm_offset:X}")
    print(f"帧数: {afm_info['frame_count']}")
    
    output_dir = '/tmp/afm_animation'
    
    print(f"\n解码动画到: {output_dir}")
    count = decoder.decode_animation(afm_offset, output_dir, max_frames=20)
    
    print(f"\n成功解码 {count} 帧")
    
    # 列出生成的文件
    print(f"\n生成的文件:")
    for f in sorted(os.listdir(output_dir))[:10]:
        filepath = os.path.join(output_dir, f)
        size = os.path.getsize(filepath)
        print(f"  {f}: {size} 字节")


if __name__ == '__main__':
    main()
