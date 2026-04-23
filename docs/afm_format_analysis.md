# ANI.DAT 및 AFM 포맷 완전 분석 보고서

## 1. 파일 구조 개요

### ANI.DAT 컨테이너 포맷

```
오프셋 0x00-0x05: 매직 "LLLLLL" (6바이트)
오프셋 0x06-0x07: 인덱스 항목 수 (WORD)
오프셋 0x08-0x09: 예약
오프셋 0x0A+:     인덱스 테이블 (항목당 4바이트 오프셋)
```

### 인덱스 공식

```c
// sub_20421 내부
fseek(file, 4 * index + 6, SEEK_SET);  // 인덱스 테이블로 이동
fread(&offset, 4, 1, file);             // 4바이트 오프셋 읽기
fseek(file, offset, SEEK_SET);          // AFM 데이터로 이동
```

## 2. AFM 리소스 포맷

### AFM 헤더 구조 (173바이트)

```
오프셋 0x00-0x4F: 저작권 정보
  "AFM - Animation File Manager Version 1.00 Copyright (C) 1993 Lo Yuan Tsung"
  
오프셋 0x50:      종료자 0x1A
오프셋 0x51-0x9F: 제목 ".Empty Title." 및 패딩
오프셋 0xA0-0xA4: 메타데이터 (너비 관련)
오프셋 0xA5-0xA6: 프레임 수 (WORD) - 핵심 필드!
오프셋 0xA7-0xA9: 예약
오프셋 0xAA+:    프레임 데이터 테이블
```

### 프레임 데이터 구조

각 프레임은 프레임 헤더와 프레임 데이터로 구성됩니다:

```
프레임 헤더 (8바이트):
  [2바이트] 프레임 데이터 크기
  [2바이트] 프레임 파라미터 (디코딩 함수에 전달)
  [4바이트] 예약/미사용

프레임 데이터:
  [프레임 데이터 크기] 인코딩된 픽셀 데이터
```

## 3. 프레임 디코딩 함수 테이블

`sub_36FF4`는 프레임 디스패치 함수로, `funcs_37012` 함수 테이블을 통해 각 디코더를 호출합니다:

| 명령 바이트 | 함수 | 설명 |
|------------|------|------|
| 0x00 | sub_36E3D | 팔레트 채우기 (192바이트) |
| 0x01 | sub_36E57 | 직접 복사 (768바이트) |
| 0x02 | sub_36E65 | 팔레트 RLE 디코딩 (768바이트) |
| 0x03 | sub_36EA7 | 다중 구간 복사 |
| 0x04 | sub_36EE0 | 전체 프레임 채우기 (64000바이트) |
| 0x05 | sub_36F08 | 프레임 데이터 직접 복사 |
| 0x06 | sub_36F24 | 프레임 데이터 RLE 디코딩 (64000바이트) |
| 0x07 | sub_36F69 | 픽셀 점 설정 |
| 0x08 | sub_36F82 | RLE 픽셀 채우기 |
| 0x09 | sub_36FAC | 다중 구간 복사 |

## 4. RLE 디코딩 알고리즘

### 팔레트 RLE (sub_36E65)

```c
while (n768 != 768) {
    byte = *data++;
    if ((byte & 0xC0) == 0xC0) {
        // RLE 모드: 상위 2비트가 11
        count = byte & 0x3F;  // 하위 6비트가 카운트
        value = *data++;      // 다음 바이트가 값
        for (i = count >> 1; i; --i)
            *palette++ = value;
        memset(palette, value, count & 1);
        n768 += count;
    } else {
        // 직접 모드
        *palette++ = byte;
        n768++;
    }
}
```

### 프레임 데이터 RLE (sub_36F24)

```c
while (n64000 != 64000) {
    byte = *data++;
    if ((byte & 0xC0) == 0xC0) {
        // RLE 모드
        count = byte & 0x3F;
        value = *data++;
        for (i = count >> 1; i; --i)
            *frame++ = value;
        memset(frame, value, count & 1);
        n64000 += count;
    } else {
        // 직접 모드
        *frame++ = byte;
        n64000++;
    }
}
```

## 5. 전체 로딩 흐름

```c
// 1. ANI.DAT 열기
file = fopen("ANI.DAT", "rb");

// 2. 인덱스 테이블로 이동
fseek(file, 4 * resource_index + 6, SEEK_SET);

// 3. 리소스 오프셋 읽기
fread(&offset, 4, 1, file);

// 4. AFM 데이터로 이동
fseek(file, offset, SEEK_SET);

// 5. AFM 헤더 읽기 (173바이트)
fread(header, 173, 1, file);
frame_count = *(WORD*)(header + 165);  // 오프셋 0xA5

// 6. 팔레트 버퍼 초기화
sub_36FD3(64000, video_buffer, palette_buffer);

// 7. 프레임 반복 읽기
for (i = 0; i < frame_count; i++) {
    fread(frame_header, 8, 1, file);
    fread(frame_data, frame_header[0], 1, file);
    sub_36FF4(frame_header[1], frame_data);  // 프레임 디코딩
    delay(frame_delay);                       // 지연
}

// 8. 파일 닫기
fclose(file);
```

## 6. 핵심 함수 주소

| 주소 | 함수 | 설명 |
|------|------|------|
| 0x111BA | sub_111BA | DAT 파일 공통 로더 |
| 0x20421 | sub_20421 | ANI.DAT 전용 로더 |
| 0x36FD3 | sub_36FD3 | 버퍼 초기화 |
| 0x36FF4 | sub_36FF4 | 프레임 디코딩 디스패처 |

## 7. 메모리 레이아웃

```
n64000:  프레임 버퍼 크기 (64000 = 320x200)
n655360: 비디오 메모리 주소 (0xA0000)
buf:     팔레트 버퍼 (768바이트)
```

## 8. FDOTHER.DAT와의 차이점

| 특성 | ANI.DAT | FDOTHER.DAT |
|------|---------|-------------|
| 인덱스 크기 | 4바이트 | 8바이트 (start, end) |
| 리소스 타입 | AFM 애니메이션 | 혼합 리소스 (팔레트, 아이콘 등) |
| 프레임 구조 | 다중 프레임 애니메이션 | 단일 프레임 이미지 |
| 사용 용도 | 게임 내 애니메이션 | UI 요소 |

## 9. 예제 코드

### Python 디코더

```python
import struct

def decode_ani_dat(filename, resource_index):
    with open(filename, 'rb') as f:
        # 인덱스 테이블로 이동
        f.seek(4 * resource_index + 6)
        offset = struct.unpack('<I', f.read(4))[0]
        
        # AFM 데이터로 이동
        f.seek(offset)
        
        # 헤더 읽기
        header = f.read(173)
        frame_count = struct.unpack('<H', header[165:167])[0]
        
        frames = []
        for _ in range(frame_count):
            # 프레임 헤더 읽기
            frame_header = f.read(8)
            size = struct.unpack('<H', frame_header[0:2])[0]
            param = struct.unpack('<H', frame_header[2:4])[0]
            
            # 프레임 데이터 읽기
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

## 10. 요약

ANI.DAT는 중첩된 AFM (Animation File Manager) 포맷으로 애니메이션 데이터를 저장합니다. 각 AFM 리소스는 다음을 포함합니다:

1. 173바이트 헤더 (저작권 정보와 프레임 수 포함)
2. 다수의 프레임 (각 프레임은 8바이트 헤더 + 인코딩된 데이터)
3. RLE 압축 알고리즘으로 프레임 데이터 디코딩
4. 명령 바이트로 각기 다른 디코딩 함수에 디스패치

이 설계를 통해 애니메이션 시퀀스를 효율적으로 저장하고 재생하면서 FD2 게임 엔진과의 호환성을 유지합니다.
