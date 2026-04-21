#!/usr/bin/env python3
"""
完整 AFM 动画解码 - 所有帧
"""

import struct
from PIL import Image
import os
import glob

class AFMDecoder:
    def __init__(self, data: bytes):
        self.data = data
        self.palette = bytearray(768)
    
    def parse_afm(self, offset: int) -> dict:
        if b'AFM' not in self.data[offset:offset+50]:
            return None
        frame_count = struct.unpack('<H', self.data[offset + 0xA5:offset + 0xA7])[0]
        return {'offset': offset, 'frame_count': frame_count}
    
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
            frames.append({'index': i, 'size': size, 'param': param, 'data': frame_data})
            pos += size
        
        return frames
    
    def decode_palette(self, frame_data: bytes) -> bool:
        if len(frame_data) < 1:
            return False
        cmd = frame_data[0]
        if cmd == 0x01 and len(frame_data) >= 769:
            self.palette[:] = frame_data[1:769]
            return True
        return False
    
    def decode_frame_pixels(self, frame_data: bytes) -> bytes:
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
    
    def render_frame(self, pixels: bytes) -> Image.Image:
        img = Image.new('P', (320, 200))
        img.putdata(list(pixels))
        
        pal = []
        for i in range(256):
            r = min(255, self.palette[i * 3] * 4)
            g = min(255, self.palette[i * 3 + 1] * 4)
            b = min(255, self.palette[i * 3 + 2] * 4)
            pal.extend([r, g, b])
        
        img.putpalette(pal)
        return img
    
    def decode_all_frames(self, afm_offset: int):
        """生成所有帧的图像"""
        afm_info = self.parse_afm(afm_offset)
        if not afm_info:
            return
        
        frames = self.get_frames(afm_offset, afm_info['frame_count'])
        
        frame_index = 0
        for frame in frames:
            # 控制帧
            if frame['size'] == 0:
                continue
            
            # 调色板帧
            if frame['data'][0] <= 0x02:
                self.decode_palette(frame['data'])
                continue
            
            # 像素帧
            pixels = self.decode_frame_pixels(frame['data'])
            img = self.render_frame(pixels)
            
            yield frame_index, img
            frame_index += 1


def main():
    with open('/home/yinming/fd2_dat/game/ANI.DAT', 'rb') as f:
        data = f.read()
    
    decoder = AFMDecoder(data)
    
    print("=" * 70)
    print("AFM 完整动画解码")
    print("=" * 70)
    
    afm_offset = 0x2E
    
    # 解码所有帧并保存为 GIF
    frames = []
    
    for idx, img in decoder.decode_all_frames(afm_offset):
        frames.append(img.convert('P'))
        
        if idx % 10 == 0:
            print(f"已处理 {idx + 1} 帧")
    
    print(f"\n总共解码 {len(frames)} 帧")
    
    # 保存为 GIF
    output_path = '/home/yinming/fd2_dat2/docs/afm_full_animation.gif'
    
    frames[0].save(
        output_path,
        save_all=True,
        append_images=frames[1:],
        duration=100,  # 10 FPS
        loop=0
    )
    
    print(f"\n保存动画到: {output_path}")
    print(f"文件大小: {os.path.getsize(output_path):,} 字节")


if __name__ == '__main__':
    main()
