/*
 * func-name: sub_2D80D
 * func-address: 0x2d80d
 * callers: 0x2ff01
 * callees: 0x111ba, 0x11cac, 0x11eb0, 0x12e38, 0x17aa9, 0x1d4cb, 0x1d4f6, 0x1f882, 0x2111a, 0x211a4, 0x22721, 0x22866, 0x22997, 0x22d1b, 0x25a96, 0x25b45, 0x2df01, 0x2e9a8, 0x2eb9f, 0x2facd, 0x30e9d, 0x3702f, 0x3706e, 0x3771c, 0x3776e, 0x3790a, 0x37910, 0x4e98d
 */

void __fastcall sub_2D80D(__int32 a1, int a2, int a3, int n2_1, int n6, int n28, int n30, unsigned __int8 *a8)
{
  unsigned __int8 *v8; // edi
  int v9; // ebp
  __int64 v10; // rax
  int v11; // esi
  int v12; // edx
  int v13; // ebx
  unsigned __int8 *_FIGANI.DAT__2; // ebx
  _BYTE *_FDOTHER.DAT_; // edi
  int v16; // eax
  int n8; // ebx
  __int32 v18; // eax
  int v19; // eax
  int n8_1; // ebx
  __int32 v21; // eax
  int v22; // eax
  int n2; // ebx
  __int64 v24; // rax
  int n10; // ebx
  int v26; // edx
  __int32 v27; // eax
  int v28; // eax
  __int64 n655360; // rax
  int v30; // ebx
  int n50; // edx
  int v32; // eax
  int n40; // ebx
  __int32 v34; // eax
  _BYTE *v35; // eax
  __int32 v36; // eax
  __int32 v37; // eax
  __int32 v38; // eax
  __int32 v39; // eax
  _DWORD v40[2]; // [esp+0h] [ebp-54h]
  int v41; // [esp+8h] [ebp-4Ch]
  int v42; // [esp+Ch] [ebp-48h] BYREF
  unsigned __int8 v43; // [esp+12h] [ebp-42h]
  int v44; // [esp+14h] [ebp-40h]
  int v45; // [esp+18h] [ebp-3Ch]
  _DWORD v46[2]; // [esp+1Ch] [ebp-38h] BYREF
  _BYTE *_FIGANI.DAT_; // [esp+24h] [ebp-30h]
  __int16 *_TAI.DAT__1; // [esp+28h] [ebp-2Ch]
  unsigned __int8 *_FIGANI.DAT__3; // [esp+2Ch] [ebp-28h]
  __int16 *_BG.DAT__1; // [esp+30h] [ebp-24h]
  __int16 *_TAI.DAT_; // [esp+34h] [ebp-20h]
  __int16 *_BG.DAT_; // [esp+38h] [ebp-1Ch]
  _BYTE *_FIGANI.DAT__1; // [esp+3Ch] [ebp-18h]
  unsigned __int8 v54; // [esp+40h] [ebp-14h]
  int v55; // [esp+50h] [ebp-4h]

  sub_3702F(a1, a2, a3, n2_1, 108);
  v55 = a3;
  qmemcpy(v46, "?355[\\]^", sizeof(v46));
  v45 = dword_52660;
  v44 = dword_52664;
  free(n655360_0);
  free(n7);
  n7 = 0;
  v8 = (unsigned __int8 *)(80 * n6 + n8_0);
  sub_12E38(*v8, n6, a3, n2_1, *v8, v8[1], (int)&v42);
  LOBYTE(a3) = v43;
  _TAI.DAT_ = (__int16 *)sub_111BA(v43, n6, a3, n2_1, (int)aTaiDat, 0, v43);// "TAI.DAT"
  _TAI.DAT__1 = _TAI.DAT_;
  _BG.DAT_ = (__int16 *)sub_111BA((unsigned __int8)a3, n6, a3, n2_1, (int)aBgDat, 0, (unsigned __int8)a3);// "BG.DAT"
  _BG.DAT__1 = _BG.DAT_;
  v9 = malloc(64000);
  v10 = malloc(&loc_1F400);
  v11 = v10;
  memset(v9, 0, 64000);
  sub_4E98D(_BG.DAT_, 0, 50, v9, 320, -1);
  LODWORD(v10) = sub_2FACD(v9, n6);
  LODWORD(v10) = sub_1F882(v10, SHIDWORD(v10), a3, n2_1);
  v12 = v8[7];
  v13 = 3 * v12;
  _FIGANI.DAT_ = sub_111BA(v10, v12, v13, n2_1, (int)aFiganiDat, 0, v13);// "FIGANI.DAT"
  _FIGANI.DAT__1 = _FIGANI.DAT_;
  _FIGANI.DAT__2 = sub_111BA((__int32)_FIGANI.DAT_, v12, v13 + 1, n2_1, (int)aFiganiDat, 0, v13 + 1);// "FIGANI.DAT"
  _FIGANI.DAT__3 = _FIGANI.DAT__2;
  _FDOTHER.DAT_ = sub_111BA(n28 + 33, v12, (int)_FIGANI.DAT__2, n2_1, (int)aFdotherDat, 0, n28 + 33);// "FDOTHER.DAT"
  FDOTHER_DAT__7 = 0;
  FDOTHER_DAT__7 = (int)sub_111BA(
                          *((unsigned __int8 *)v40 + n28),
                          v12,
                          (int)_FIGANI.DAT__2,
                          n2_1,
                          (int)aFdotherDat,
                          0,
                          *((unsigned __int8 *)v40 + n28));// "FDOTHER.DAT"
  LOBYTE(v10) = sub_2E9A8(n6, 1, (int)_FIGANI.DAT_, 0, v11, v9, _TAI.DAT_);
  LODWORD(v10) = sub_30E9D(
                   v10,
                   v12,
                   (int)_FIGANI.DAT__2,
                   n2_1,
                   n6,
                   n28,
                   _FIGANI.DAT__2,
                   _FIGANI.DAT__2,
                   v11,
                   v9,
                   _BG.DAT_,
                   _TAI.DAT_);
  v16 = sub_17AA9(v10, v12, (int)_FIGANI.DAT__2, n2_1, 6);
  for ( n8 = 0; n8 < 8; ++n8 )
  {
    sub_11EB0(v16, v12, n8, n2_1, v11, 640, v9, 320, 320, 200);
    LOBYTE(v18) = sub_2EB9F((int)_FIGANI.DAT__1, 0, v11 + 20 * n8, 640, -1);
    v19 = sub_11EB0(v18, v12, n8, n2_1, 655360, 320, v11, 640, 320, 200);
    v16 = sub_17AA9(v19, v12, n8, n2_1, 1);
  }
  for ( n8_1 = 8; n8_1 >= 0; --n8_1 )
  {
    sub_11EB0(v16, v12, n8_1, n2_1, v11, 640, v9, 320, 320, 200);
    LOBYTE(v21) = sub_2EB9F((int)_FDOTHER.DAT_, 0, v11 + 30 * n8_1, 640, -1);
    v22 = sub_11EB0(v21, v12, n8_1, n2_1, 655360, 320, v11, 640, 320, 200);
    v16 = sub_17AA9(v22, v12, n8_1, n2_1, 1);
  }
  if ( n28 == 33 || n28 == 34 )
    sub_2EB9F((int)_FDOTHER.DAT_, 0, v9, 320, -1);
  for ( n2 = 1; n2 < (unsigned __int8)*_FDOTHER.DAT_; ++n2 )
  {
    v24 = memmove(v11, v9, 64000);
    LOBYTE(v24) = sub_2EB9F((int)_FDOTHER.DAT_, n2, v11, 320, -1);
    LODWORD(v24) = sub_11EB0(v24, SHIDWORD(v24), n2, n2_1, 655360, 320, v11, 320, 320, 200);
    if ( n28 == 34 && n2 == 2 )
      goto LABEL_18;
    if ( n28 == 35 && n2 == 1 )
    {
LABEL_13:
      LODWORD(v24) = sub_25B45(v24, SHIDWORD(v24), n2, n2_1, FDOTHER_DAT__7, 2, n2);
      goto LABEL_14;
    }
    if ( n28 == 33 && n2 == 6 )
    {
LABEL_18:
      LODWORD(v24) = sub_25A96(v24, SHIDWORD(v24), n2, n2_1, FDOTHER_DAT__7, 1, 1);
    }
    else if ( n28 == 32 && n2 == 1 )
    {
      goto LABEL_13;
    }
LABEL_14:
    sub_17AA9(v24, SHIDWORD(v24), n2, n2_1, 2);
  }
  v54 = n28 - 32;
  if ( n28 == 32 || n28 == 35 )
  {
    for ( n10 = 0; n10 <= 10; ++n10 )
    {
      n2_1 = 2;
      if ( !(n10 % 2) )
        sub_25A96(n10 / 2, 0, n10, 2, FDOTHER_DAT__7, 1, 1);
      memmove(v11, v9, 64000);
      v41 = -1;
      v40[1] = 320;
      v40[0] = v11;
      v26 = (unsigned __int8)*_FDOTHER.DAT_ - 2;
      LOBYTE(v27) = sub_2EB9F((int)_FDOTHER.DAT_, v26 + (n10 & 1), v11, 320, -1);
      v28 = sub_11EB0(v27, v26, n10, 2, 655360, 320, v11, 320, 320, 200);
      sub_17AA9(v28, v26, n10, 2, 2);
      sub_2DF01(
        4 * n10,
        40 - 4 * n10,
        n10,
        2,
        0,
        255,
        40 - 4 * n10,
        *((_BYTE *)v46 + v54),
        *((_BYTE *)&v46[-1] + v54),
        *((_BYTE *)&v44 + v54));
    }
  }
  free(_FDOTHER.DAT_);
  free(_BG.DAT__1);
  free(_TAI.DAT__1);
  free(v9);
  free(v11);
  free(_FIGANI.DAT__1);
  free(_FIGANI.DAT__3);
  n655360 = malloc(153216);
  n655360_0 = n655360;
  v30 = 2 * *(unsigned __int8 *)dword_53A55;
  n7 = (int)sub_111BA(n655360, SHIDWORD(n655360), v30, n2_1, (int)aFdshapDat, n7, v30);// "FDSHAP.DAT"
  v41 = *((unsigned __int8 *)&v44 + v54);
  n50 = *((unsigned __int8 *)&v46[-1] + v54);
  sub_2DF01(
    *((unsigned __int8 *)v46 + v54),
    n50,
    v30,
    n2_1,
    0,
    255,
    0,
    *((_BYTE *)v46 + v54),
    *((_BYTE *)&v46[-1] + v54),
    v41);
  LODWORD(n655360) = memset(655360, 0, 64000);
  v32 = sub_11CAC(n655360, n50, v30, n2_1, 1);
  for ( n40 = 0; n40 <= 40; ++n40 )
  {
    v41 = *((unsigned __int8 *)&v44 + v54);
    n50 = *((unsigned __int8 *)&v46[-1] + v54);
    sub_2DF01(
      *((unsigned __int8 *)v46 + v54),
      n50,
      n40,
      n2_1,
      0,
      255,
      n40,
      *((_BYTE *)v46 + v54),
      *((_BYTE *)&v46[-1] + v54),
      v41);
    v32 = j___delay(6);
  }
  sub_25A96(v32, n50, n40, n2_1, FDOTHER_DAT__7, -1, 1);
  v34 = free(FDOTHER_DAT__7);
  dword_53EC4 = 0;
  v35 = sub_1D4CB(v34, n50, n40, n2_1);
  switch ( n28 )
  {
    case ' ':
      sub_2111A((__int32)v35, n50, n2_1, n40, v9, (int)_FDOTHER.DAT_, n6, n30, a8, 32);
      break;
    case '!':
      for ( n40 = 0; n40 < n30; ++n40 )
      {
        n50 = 80 * a8[n40];
        v35 = (_BYTE *)memset(n50 + n8_0 + 37, 0, 3);
      }
      sub_211A4((__int32)v35, n50, n40, n2_1, n6, n30, a8, 950);
      break;
    case '"':
      sub_22721((__int32)v35, n50, n40, n2_1, n6, n30, a8);
      dword_53EC4 = 0;
      sub_22866(v36, n50, n40, n2_1, n6, n30, a8);
      dword_53EC4 = 0;
      sub_22997(v37, n50, n40, n2_1, n6, n30, a8);
      break;
    case '#':
      sub_22D1B((__int32)v35, n50, n40, n2_1, n6, 26, n30, (int)a8, 37);
      dword_53EC4 = 0;
      sub_22D1B(v38, n50, n40, n2_1, n6, 22, n30, (int)a8, 39);
      dword_53EC4 = 0;
      sub_22D1B(v39, n50, n40, n2_1, n6, 27, n30, (int)a8, 38);
      break;
  }
  sub_1D4F6((__int32)v35, n50, n40, n2_1);
}
