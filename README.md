# FD2 - 饿狼伝説2 네이티브 포트

1993년 DOS 게임 **Fatal Fury 2 (饿狼伝説2)**를 역공학하여 C/SDL2로 1:1 재구현한 프로젝트입니다.

원본 DOS 실행 파일(`FD2.EXE`)을 IDA Pro로 분석하여 게임 로직, 에셋 포맷, AFM 애니메이션 시스템을 복원했습니다.

## 구현 현황

- [x] DAT 리소스 로더 (`fd2_dat`)
- [x] RLE 압축 해제 (`fd2_decoder`)
- [x] AFM 애니메이션 플레이어 (`fd2_afm`)
- [x] 팔레트 기반 렌더링 파이프라인 (`fd2_render`)
- [x] 입력 처리 (`fd2_input`)
- [x] 오디오 스텁 (`fd2_audio`)
- [x] 상태 머신 골격 (인트로 → 메뉴 → 캐릭터 선택 → 배틀)
- [ ] 배틀 시스템 완성
- [ ] 캐릭터 스프라이트 / 애니메이션 연동
- [ ] 메뉴 시스템
- [ ] 폰트 / 텍스트 렌더링
- [ ] 오디오 완성 (MIDI + 디지털 SFX)

## 빌드 환경

- GCC (또는 C99 호환 컴파일러)
- SDL2 (`sdl2_install/` 디렉토리에 사전 빌드된 라이브러리 필요)
- 원본 FD2 게임 데이터 파일 (`game/` 디렉토리에 배치)

## 빌드

```bash
make          # 전체 빌드
make game     # 게임 바이너리만 빌드
make decoder  # 디코더 테스트 바이너리만 빌드
make test     # 디코더 테스트 빌드 및 실행
make clean    # 빌드 결과물 삭제
```

빌드된 바이너리는 `bin/`에 생성됩니다.

## 실행

```bash
bin/fd2                      # 기본 데이터 디렉토리 game/ 사용
bin/fd2 /path/to/game_data   # 데이터 디렉토리 직접 지정
```

### 조작키

| 키 | 동작 |
|----|------|
| 방향키 | 이동 |
| Z / A | 약 펀치 |
| X / S | 약 킥 |
| C / D | 강 펀치 / 강 킥 |
| Enter / Space | 스타트 |
| Tab | 코인 투입 |
| ESC | 뒤로 / 종료 |
| F11 | 전체화면 전환 |

## 디렉토리 구조

```
src/          C 소스 파일
include/      헤더 파일 (fd2_*.h + SDL2)
docs/         역공학 노트 및 포맷 분석 문서
game/         원본 게임 데이터 파일 (별도 제공 필요)
bin/          빌드된 바이너리 (자동 생성)
obj/          오브젝트 파일 (자동 생성)
```

## 게임 데이터 파일

| 파일 | 내용 |
|------|------|
| `FDOTHER.DAT` | UI 그래픽, 타이틀 화면, 인트로 애니메이션 |
| `FDTXT.DAT` | 폰트 및 텍스트 리소스 |
| `FDSHAP.DAT` | 캐릭터 스프라이트 |
| `FDFIELD.DAT` | 배틀 스테이지 요소 |
| `FIGANI.DAT` | 캐릭터 애니메이션 프레임 |
| `BG.DAT` | 배틀 배경 이미지 |
| `ANI.DAT` | AFM 포맷 컷씬 애니메이션 |
| `FDMUS.DAT` | 음악 및 효과음 |
| `DATO.DAT` | 게임 로직 데이터 |
| `TAI.DAT` | 캐릭터 초상화 이미지 |
| `TITLE.DAT` | 타이틀 화면 요소 |

모든 DAT 파일은 공통 인덱스 포맷을 사용합니다: 6바이트 매직 `LLLLLL`, 4바이트 리소스 수, 4바이트 오프셋 테이블. 리소스는 RLE 압축 이미지(폭/높이 헤더 + 픽셀 데이터) 또는 원시 바이너리 데이터입니다.

## 문서

역공학 분석 노트는 `docs/`에 있습니다:

- [`FD2_REVERSE_ENGINEERING.md`](docs/FD2_REVERSE_ENGINEERING.md) — 함수 오프셋, 메모리 맵, DAT 포맷 명세
- [`reverse-engineering.md`](docs/reverse-engineering.md) — 기본 분석 결과 및 검증된 포맷 정보
- [`afm_format_analysis.md`](docs/afm_format_analysis.md) — AFM 애니메이션 포맷 분석
- [`ani_dat_reverse_report.md`](docs/ani_dat_reverse_report.md) — ANI.DAT 역공학 보고서
- [`port-architecture.md`](docs/port-architecture.md) — 네이티브 포트 아키텍처 설계

## 라이선스

이 프로젝트는 재구현된 엔진 코드만 포함합니다. 원본 게임 에셋(`*.DAT`, `FD2.EXE`)은 포함되지 않으며, 해당 저작권은 원저작자에게 있습니다.
