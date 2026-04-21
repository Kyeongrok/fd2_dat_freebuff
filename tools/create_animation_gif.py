#!/usr/bin/env python3
"""
将解码的帧合并为动画 GIF
"""

from PIL import Image
import os
import glob

def create_animation_gif(input_dir: str, output_path: str, fps: int = 10):
    """创建动画 GIF"""
    # 获取所有帧
    frame_files = sorted(glob.glob(os.path.join(input_dir, '*.png')))
    
    if not frame_files:
        print("没有找到帧文件")
        return
    
    print(f"找到 {len(frame_files)} 帧")
    
    # 加载帧
    frames = []
    for f in frame_files:
        img = Image.open(f)
        frames.append(img.convert('P'))
    
    print(f"加载了 {len(frames)} 帧")
    
    # 保存为 GIF
    duration = 1000 // fps  # 每帧持续时间 (毫秒)
    
    frames[0].save(
        output_path,
        save_all=True,
        append_images=frames[1:],
        duration=duration,
        loop=0  # 无限循环
    )
    
    print(f"保存动画到: {output_path}")
    print(f"文件大小: {os.path.getsize(output_path)} 字节")


def main():
    input_dir = '/tmp/afm_full_animation'
    output_path = '/home/yinming/fd2_dat2/docs/afm_animation.gif'
    
    create_animation_gif(input_dir, output_path, fps=10)


if __name__ == '__main__':
    main()
