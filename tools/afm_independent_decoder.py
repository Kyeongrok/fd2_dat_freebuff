#!/usr/bin/env python3
"""
AFM 动画解码器 - 正确处理独立帧
每个帧都是完整的 320x200 画面
"""

import struct
from PIL import Image
import os

class AFMDecoder:
    def __init__(self, data: bytes):
        self.data = data
        self.palette = bytearray(768)
    
    def parse_afm(self, offset: int) -> dict:
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
                'data': frame_data
            })
            
            pos += size
        
        return frames
    
    def decode_palette(self, frame_data: bytes) -> bool:
        """解码调色板帧"""
        if len(frame_data) < 1:
            return False
        
        cmd = frame_data[0]
        
        if cmd == 0x01:
            # 复制调色板
            if len(frame_data) >= 769:
                self.palette[:] = frame_data[1:769]
                return True
        
        return False
    
    def decode_frame_pixels(self, frame_data: bytes) -> bytes:
        """解码帧像素数据 (RLE)"""
        pixels = bytearray(64000)
        pixel_pos = 0
        data_pos = 0
        
        while data_pos < len(frame_data) - 2 and pixel_pos < 64000:
            count = frame_data[data_pos]
            
            if count == 0:
                data_pos += 1
                continue
            
            color = frame_data[data_pos + 1]
            
            for _ in range(min(count, 64000 - pixel_pos)):
                pixels[pixel_pos] = color
                pixel_pos += 1
            
            data_pos += 3
        
        return bytes(pixels)
    
    def render_frame(self, pixels: bytes, output_path: str) -> None:
        """渲染帧为图像"""
        img = Image.new('P', (320, 200))
        img.putdata(list(pixels))
        
        # 设置调色板 (DOS 6位转8位)
        pal = []
        for i in range(256):
            r = min(255, self.palette[i * 3] * 4)
            g = min(255, self.palette[i * 3 + 1] * 4)
            b = min(255, self.palette[i * 3 + 2] * 4)
            pal.extend([r, g, b])
        
        img.putpalette(pal)
        img.save(output_path)
    
    def decode_animation(self, afm_offset: int, output_dir: str, max_frames: int = None) -> int:
        """解码完整动画"""
        afm_info = self.parse_afm(afm_offset)
        if not afm_info:
            return 0
        
        frames = self.get_frames(afm_offset, afm_info['frame_count'])
        os.makedirs(output_dir, exist_ok=True)
        
        saved_count = 0
        last_pixels = None
        
        for frame in frames:
            if max_frames and saved_count >= max_frames:
                break
            
            # 控制帧
            if frame['size'] == 0:
                continue
            
            # 调色板帧
            if frame['data'][0] <= 0x02:
                self.decode_palette(frame['data'])
                continue
            
            # 像素帧
            pixels = self.decode_frame_pixels(frame['data'])
            
            # 保存帧
            output_path = os.path.join(output_dir, f'frame_{saved_count:04d}.png')
            self.render_frame(pixels, output_path)
            saved_count += 1
            last_pixels = pixels
        
        return saved_count


def main():
    with open('/home/yinming/fd2_dat/game/ANI.DAT', 'rb') as f:
        data = f.read()
    
    decoder = AFMDecoder(data)
    
    print("=" * 70)
    print("AFM 动画解码器 - 独立帧模式")
    print("=" * 70)
    
    # 解码第一个 AFM
    afm_offset = 0x2E
    afm_info = decoder.parse_afm(afm_offset)
    
    print(f"AFM 偏移: 0x{afm_offset:X}")
    print(f"帧数: {afm_info['frame_count']}")
    
    output_dir = '/tmp/afm_full_animation'
    
    print(f"\n解码动画到: {output_dir}")
    count = decoder.decode_animation(afm_offset, output_dir, max_frames=30)
    
    print(f"\n成功解码 {count} 帧")
    
    # 列出生成的文件
    files = sorted(os.listdir(output_dir))
    print(f"\n生成的文件:")
    for f in files[:10]:
        filepath = os.path.join(output_dir, f)
        size = os.path.getsize(filepath)
        print(f"  {f}: {size} 字节")
    
    print(f"\n总共: {len(files)} 个文件")


if __name__ == '__main__':
    main()
