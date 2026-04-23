# 프로젝트 지식

이 파일은 Codebuff에게 프로젝트의 목표, 명령어, 코딩 규약, 주의사항을 설명합니다.

## 빠른 시작
- **설정**: 패키지 매니저 없음 — `gcc` + `sdl2_install/`에 번들된 SDL2 사용. `./configure`나 `cmake` 불필요.
- **빌드**: `make` (전체 빌드), `make game` (게임만), `make intro` (인트로 플레이어), `make decoder` (디코더 테스트)
- **게임 실행**: `bin/fd2 [data_dir]` — 기본 data_dir은 `game/`
- **테스트**: `make test` — `bin/fd2_decoder_test` 빌드 및 실행 (SDL 불필요)
- **정리**: `make clean`

## 아키텍처

FD2는 1993년 DOS 격투 게임 Fatal Fury 2 (饿狼传说2)의 **결정론적 재구현**입니다. 목표는 현대적 리메이크가 아닙니다 — DOS 빌드의 동작을 정확히 재현한 후, 그 코어를 플랫폼 레이어(SDL2)로 감싸는 것입니다.

### 주요 디렉토리
- `src/` — C 소스: 게임 엔진, 디코더, 렌더러, 오디오, 입력, AFM 애니메이션 플레이어
- `include/` — C 헤더; `include/SDL2/`에 번들된 SDL2 헤더 포함
- `game/` — 런타임에 필요한 원본 DOS 데이터 파일 (DAT, MDI, DIG 등)
- `bin/` — 빌드 출력물; 런타임 데이터 복사본과 설정 파일도 포함
- `sdl2_install/` — 로컬 빌드된 SDL2 라이브러리 (rpath로 링크)
- `tools/` — 역공학, 추출, 분석용 Python 스크립트
- `docs/` — 역공학 노트 (DAT 포맷, AFM 포맷, 포트 아키텍처)
- `tools/export-for-ai/` — FD2.EXE에서 IDA로 디컴파일한 C 코드 조각 및 메모리 덤프
- `output/` — 추출 결과물 (이미지, 리소스 맵, 메타데이터)

### 데이터 흐름
1. `fd2_dat_load()` — DAT 파일을 메모리에 매핑하고 LLLLLL 헤더 + 오프셋 테이블 파싱
2. `fd2_dat_get_resource()` — 인덱스로 특정 리소스 포인터 반환
3. `fd2_resource_classify()` — 리소스를 분류 (RLE 이미지, 팔레트, 원시 데이터, 중첩 DAT)
4. `fd2_rle_decompress()` — RLE 이미지 압축 해제 (IDA sub_4E98D 알고리즘)
5. `fd2_afm_*` API — AFM 애니메이션 (ANI.DAT) 프레임별 명령 디스패치로 디코딩
6. 게임 상태 머신: INIT → INTRO → MENU → CHAR_SELECT → BATTLE → VICTORY → ...

### 핵심 소스 파일
| 파일 | 역할 |
|------|------|
| `src/main.c` | 진입점, `fd2_game_t` 생성, 게임 루프 실행 |
| `src/fd2_game.c` | 상태 머신 (상태별 enter/update/exit) |
| `src/fd2_decoder.c` | DAT 로딩, RLE 압축 해제, 팔레트, 리소스 분류 |
| `src/fd2_afm.c` | AFM 애니메이션 디코더 (ANI.DAT 재생) |
| `src/fd2_render.c` | SDL2 렌더링 파이프라인 |
| `src/fd2_input.c` | 입력 처리 (키보드 → 게임 액션) |
| `src/fd2_audio.c` | 오디오 시스템 (Miles AIL / SDL 오디오) |
| `src/fd2_resources.c` | 리소스 매니저 (모든 DAT 파일 로드) |
| `src/fd2_rle.c` | 독립형 RLE 헬퍼 |
| `src/fd2_intro.c` | 레거시 인트로 플레이어 |
| `src/fd2_decoder_test.c` | 독립형 디코더 테스트 (SDL 불필요) |

## 코딩 규약

- **언어**: C99 (`-std=gnu99`), C++ 없음. 모든 게임 코드는 C.
- **컴파일러 플래그**: `-Wall -Wextra -O2 -Iinclude -Isdl2_install/include/SDL2`
- **링커**: `-Lsdl2_install/lib -Wl,-rpath,'$$ORIGIN/../sdl2_install/lib' -lSDL2 -lm`
- **네이밍**: 공개 API에 `fd2_` 접두사 (예: `fd2_dat_load`, `fd2_rle_decompress`). 일부 오래된 내부 헬퍼는 `fd_` 접두사.
- **타입**: 프로젝트는 `fd2_decoder.h`에 `u8/u16/u32/s8/s16/s32`를 정의. 일부 오래된 헤더는 `byte/word/dword`도 정의 — 새 코드에서는 `u8/u16/u32` 사용 권장.
- **SDL2 이외 동적 의존성 없음**: SDL2는 `sdl2_install/`에 번들됨. rpath로 바이너리가 자신의 위치 기준으로 찾음.
- **게임 데이터 필수**: `game/` (또는 `bin/`) 디렉토리에 원본 DAT 파일 (FDOTHER.DAT, ANI.DAT, FDSHAP.DAT 등) 이 있어야 실행됨.
- **Python 도구**: `tools/`의 분석/추출 스크립트는 Python 3. 빌드에 포함되지 않으며 역공학 워크플로우 전용.
- **중국어 문서**: 일부 문서는 중국어로 작성됨 (逆向工程 노트). 주요 기술 용어는 양 언어로 병기됨.

## 주요 DAT 파일 포맷

모든 DAT 파일은 공통 컨테이너 포맷을 공유:
- 6바이트: 매직 `"LLLLLL"`
- 4바이트: 리소스 수 (little-endian u32)
- N×4바이트: 오프셋 테이블 (리소스당 u32 하나)
- 리소스 종류: RLE 압축 이미지, 768바이트 팔레트, 원시 데이터, 중첩 DAT

### RLE 알고리즘 (sub_4E98D)
제어 바이트 상위 2비트로 모드 결정:
- `11`: 건너뛰기 (투명) — 건너뛸 픽셀 수
- `10`: 복사 — 소스에서 복사할 바이트 수
- `01`: 채우기 — 다음 바이트를 지정 횟수만큼 반복
- `00`: 희소 채우기 — 2번째 위치마다 씀

카운트 = `(value & 0x3F) + 1`

### AFM 애니메이션 포맷 (ANI.DAT)
- 프레임 수가 오프셋 0xA5에 있는 173바이트 헤더
- 각 프레임: 8바이트 헤더 (2B 크기 + 2B 파라미터 + 4B 예약) + 프레임 데이터
- 명령 바이트 (0x00–0x09)로 다른 디코딩 함수에 디스패치
- 다른 RLE 변형: `if (byte & 0xC0) == 0xC0` → RLE 런, 아니면 리터럴

## 주의사항

- **서로 다른 두 RLE 알고리즘**: `fd2_rle_decompress` (sub_4E98D, DAT 이미지 리소스용) vs `fd2_afm_rle_decode` (AFM 애니메이션 프레임용). 혼동 금지.
- **6비트 vs 8비트 팔레트**: DOS VGA는 6비트 값 (0–63) 사용. SDL2로 렌더링하려면 `(v6 << 2) | (v6 >> 4)`로 8비트 변환 필요.
- **중복 타입 정의**: `fd2_types.h`와 `fd2_reimpl.h`에 `byte/word/dword`; `fd2_decoder.h`에 `u8/u16/u32`. 새 코드에는 디코더 타입 사용.
- **`fd2_reimpl.h`는 레거시**: 구형 `GameState` 구조체와 플랫 함수 API를 정의함. 현재 코드베이스는 `fd2_game.h`의 `fd2_game_t`를 사용. 이 파일에 새 코드 추가 금지.
- **SDL2는 시스템 경로에 없음**: `sdl2_install/`에 있음. Makefile이 처리하지만, 새 빌드 타겟 추가 시 동일한 `-I`, `-L` 플래그 사용 필수.
- **원본 DOS 데이터 필수**: DOS 배포판의 원본 DAT 파일 없이는 게임 실행 불가. `game/`과 `bin/`에 위치.
- **인트로 애니메이션 타이밍**: 원본은 535 프레임을 30ms 간격으로 재생 (총 16.05초). 특정 프레임 번호 (10, 25, 110, 210, 330, 450)에서 사운드/영상 이펙트 트리거됨.
