#!/usr/bin/env python3
"""
AFM 动画完整解码器
正确处理调色板和 RLE 压缩的帧数据
"""

import struct
from PIL import Image
import os

class AFMDecoder:
    def __init__(self, data: bytes):
        self.data = data
        self.palette = bytearray(768)  # 256 色 × 3 RGB
        self.frame_buffer = bytearray(64000)  # 320x200 像素
        
    def parse_afm(self, offset: int) -> dict:
        """解析 AFM 头和帧信息"""
        # 验证 AFM 签名
        if b'AFM' not in self.data[offset:offset+50]:
            return None
        
        # 读取帧数
        frame_count = struct.unpack('<H', self.data[offset + 0xA5:offset + 0xA7])[0]
        
        # 读取标题
        title = self.data[offset + 0x51:offset + 0x70].rstrip(b'\x00').decode('ascii', errors='replace')
        
        return {
            'offset': offset,
            'frame_count': frame_count,
            'title': title
        }
    
    def get_frames(self, offset: int, frame_count: int) -> list:
        """获取所有帧的头信息"""
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
    
    def decode_palette(self, frame_data: bytes) -> int:
        """解码调色板命令"""
        if len(frame_data) < 1:
            return 0
        
        cmd = frame_data[0]
        
        if cmd == 0x01:
            # 复制调色板
            if len(frame_data) >= 769:
                self.palette[:] = frame_data[1:769]
                return 769
        elif cmd == 0x00:
            # 填充调色板
            if len(frame_data) >= 2:
                color = frame_data[1]
                for i in range(256):
                    self.palette[i * 3] = color
                    self.palette[i * 3 + 1] = color
                    self.palette[i * 3 + 2] = color
                return 2
        elif cmd == 0x02:
            # RLE 解码调色板
            return self._decode_rle_palette(frame_data[1:])
        
        return 1
    
    def _decode_rle_palette(self, data: bytes) -> int:
        """RLE 解码调色板"""
        pos = 0
        buf_pos = 0
        
        while buf_pos < 768 and pos < len(data):
            byte = data[pos]
            pos += 1
            
            if (byte & 0xC0) == 0xC0:
                # RLE
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
        
        return pos + 1
    
    def decode_rle_pixels(self, frame_data: bytes) -> bytes:
        """解码 RLE 压缩的像素数据"""
        pixels = bytearray(64000)
        pixel_pos = 0
        data_pos = 0
        
        while data_pos < len(frame_data) - 2 and pixel_pos < 64000:
            count = frame_data[data_pos]
            
            if count == 0:
                # 结束标记或特殊处理
                data_pos += 1
                continue
            
            color = frame_data[data_pos + 1]
            verify = frame_data[data_pos + 2]
            
            for _ in range(min(count, 64000 - pixel_pos)):
                pixels[pixel_pos] = color
                pixel_pos += 1
            
            data_pos += 3
        
        return bytes(pixels)
    
    def render_frame(self, pixels: bytes, output_path: str):
        """渲染帧为图像"""
        # 创建 8 位调色板图像
        img = Image.new('P', (320, 200))
        img.putdata(list(pixels[:64000]))
        
        # 设置调色板 (DOS 调色板是 6 位，需要转换)
        pal = []
        for i in range(256):
            r = min(255, self.palette[i * 3] * 4)
            g = min(255, self.palette[i * 3 + 1] * 4)
            b = min(255, self.palette[i * 3 + 2] * 4)
            pal.extend([r, g, b])
        
        img.putpalette(pal)
        img.save(output_path)
    
    def get_palette_color(self, index: int) -> tuple:
        """获取调色板颜色"""
        if index < 0 or index >= 256:
            return (0, 0, 0)
        
        r = self.palette[index * 3] * 4
        g = self.palette[index * 3 + 1] * 4
        b = self.palette[index * 3 + 2] * 4
        
        return (r, g, b)


def main():
    with open('/home/yinming/fd2_dat/game/ANI.DAT', 'rb') as f:
        data = f.read()
    
    decoder = AFMDecoder(data)
    
    print("=" * 70)
    print("AFM 动画解码器")
    print("=" * 70)
    
    # 第一个 AFM
    offset = 0x2E
    afm_info = decoder.parse_afm(offset)
    
    if not afm_info:
        print("无效的 AFM")
        return
    
    print(f"AFM 偏移: 0x{offset:X}")
    print(f"标题: {afm_info['title']}")
    print(f"帧数: {afm_info['frame_count']}")
    
    # 获取帧信息
    frames = decoder.get_frames(offset, afm_info['frame_count'])
    print(f"\n找到 {len(frames)} 帧")
    
    # 创建输出目录
    output_dir = '/tmp/afm_frames'
    os.makedirs(output_dir, exist_ok=True)
    
    # 解码帧
    print("\n解码帧...")
    
    for i, frame in enumerate(frames):
        if i == 0 or i == 1:
            # 控制帧，跳过
            print(f"帧 {i}: 控制帧 (size={frame['size']}, param={frame['param']})")
            continue
        
        if frame['size'] == 0:
            print(f"帧 {i}: 控制帧 (param={frame['param']})")
            continue
        
        # 检查是否是调色板帧
        if frame['data'][0] in [0x00, 0x01, 0x02]:
            print(f"帧 {i}: 调色板帧 (命令 0x{frame['data'][0]:02X})")
            decoder.decode_palette(frame['data'])
        else:
            # 像素帧
            print(f"帧 {i}: 像素帧 (size={frame['size']}, param={frame['param']})")
            
            # 解码像素
            pixels = decoder.decode_rle_pixels(frame['data'])
            
            # 渲染
            output_path = os.path.join(output_dir, f'frame_{i:04d}.png')
            decoder.render_frame(pixels, output_path)
            print(f"      保存到: {output_path}")
        
        # 只解码前 10 帧
        if i >= 10:
            break
    
    print(f"\n完成! 帧保存在: {output_dir}")


if __name__ == '__main__':
    main()
