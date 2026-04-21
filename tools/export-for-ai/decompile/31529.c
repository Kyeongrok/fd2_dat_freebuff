/*
 * func-name: sub_31529
 * func-address: 0x31529
 * callers: 0x250cc, 0x25757
 * callees: 0x111ba, 0x11d40, 0x11df2, 0x11eb0, 0x17aa9, 0x1f525, 0x1f882, 0x20421, 0x25977, 0x2e2b0, 0x2eb9f, 0x31bdf, 0x31c49, 0x3702f, 0x3706e, 0x3771c, 0x3776e, 0x3790a, 0x37910, 0x4e98d
 */

int __fastcall sub_31529(__int32 a1, int a2, int a3, int a4)
{
  int n3_1; // ecx
  int arg8_1; // esi
  __int64 arg8_2; // rax
  int arg8; // ebx
  _BYTE *_FDOTHER.DAT_; // ebp
  __int64 v9; // rax
  __int64 v10; // rax
  int n63; // ebx
  int n3; // edi
  int n63_1; // ebx
  int n12; // ebx
  __int64 v15; // rax
  int n25; // ebx
  __int64 _FDOTHER.DAT__4; // rax
  int v18; // edi
  int n135; // ebx
  __int16 *_FDOTHER.DAT__1; // esi
  int _FDOTHER.DAT__5; // ebp
  int arg4; // ebx
  __int16 *_FDOTHER.DAT__6; // esi
  _BYTE dst__2[20]; // [esp+0h] [ebp-64h] BYREF
  _BYTE dst__1[20]; // [esp+14h] [ebp-50h] BYREF
  _BYTE dst_[20]; // [esp+28h] [ebp-3Ch] BYREF
  int v28; // [esp+3Ch] [ebp-28h]
  __int32 _FDOTHER.DAT__3; // [esp+40h] [ebp-24h]
  _BYTE *_FDOTHER.DAT__2; // [esp+44h] [ebp-20h]
  int arg8_3; // [esp+48h] [ebp-1Ch]
  int n80; // [esp+4Ch] [ebp-18h]
  int n290; // [esp+50h] [ebp-14h]
  int v34; // [esp+60h] [ebp-4h]

  sub_3702F(a1, a2, a3, a4, 128);
  v34 = a3;
  n290 = 290;
  n80 = 80;
  _FDOTHER.DAT__3 = 0;
  _FDOTHER.DAT__2 = 0;
  qmemcpy(dst_, &src__0, sizeof(dst_));
  qmemcpy(dst__1, &src__1, sizeof(dst__1));
  qmemcpy(dst__2, &src__2, sizeof(dst__2));
  n3_1 = 0;
  arg8_1 = malloc(&loc_1F400);
  arg8_2 = malloc(64000);
  arg8 = arg8_2;
  arg8_3 = arg8_2;
  LODWORD(arg8_2) = memset(arg8_2, 0, 64000);
  _FDOTHER.DAT_ = sub_111BA(arg8_2, SHIDWORD(arg8_2), arg8, 0, (int)aFdotherDat, 0, 54);// "FDOTHER.DAT"
  LOBYTE(arg8_2) = sub_2EB9F((__int32)_FDOTHER.DAT_, SHIDWORD(arg8_2), arg8, 0, (int)_FDOTHER.DAT_, 0, arg8, 320, -1);
  sub_1F882(arg8_2, SHIDWORD(arg8_2), arg8, 0);
  v9 = memmove(655360, arg8, 64000);
  sub_1F525(v9, SHIDWORD(v9), arg8, 0);
  LODWORD(v9) = j___delay(1000);
  sub_20421(v9, SHIDWORD(v9), arg8, 0, 2, 100, 0);
  sub_11DF2(v9, SHIDWORD(v9), arg8, 0, 0, 255, 63);
  v10 = memmove(655360, arg8, 64000);
  LOBYTE(v10) = sub_2EB9F(v10, SHIDWORD(v10), arg8, 0, (int)_FDOTHER.DAT_, 9, 655360, 320, -1);
  for ( n63 = 63; n63 >= 0; --n63 )
  {
    sub_11DF2(v10, SHIDWORD(v10), n63, 0, 0, 255, n63);
    LODWORD(v10) = j___delay(4);
  }
  j___delay(2000);
  if ( n17 == 26 )
  {
    sub_31BDF(4, 17);
  }
  else
  {
    sub_31BDF(37, 2);
    sub_31BDF(21, 3);
    sub_31BDF(26, 4);
    sub_31BDF(105, 5);
    sub_31BDF(32, 6);
  }
  LODWORD(v10) = j___delay(500);
  for ( n3 = 0; n3 < 3; ++n3 )
  {
    for ( n63_1 = 63; n63_1 >= 0; --n63_1 )
    {
      sub_11DF2(v10, SHIDWORD(v10), n63_1, 0, 0, 255, n63_1);
      LODWORD(v10) = j___delay(4);
    }
    LODWORD(v10) = j___delay(200);
  }
  for ( n12 = 12; n12 < 109; ++n12 )
  {
    sub_2EB9F(v10, SHIDWORD(v10), n12, 0, (int)_FDOTHER.DAT_, n12, 655360, 320, -1);
    LODWORD(v10) = j___delay(20);
  }
  v15 = memmove(655360, arg8_3, 64000);
  if ( n17 == 26 )
  {
    sub_31BDF(21, 18);
    sub_31BDF(24, 19);
    sub_31BDF(26, 20);
  }
  else
  {
    sub_31BDF(45, 7);
  }
  LODWORD(v15) = j___delay(2000);
  for ( n25 = 0; n25 < 40; ++n25 )
  {
    sub_11EB0(v15, SHIDWORD(v15), n25, arg8_1 + 160, arg8_1 + 160, 640, arg8_3, 320, 320, 200);
    HIDWORD(v15) = n25 % 4;
    LOBYTE(v15) = sub_2EB9F(n25 / 4, n25 % 4, n25, n25 % 4 + 1, (int)_FDOTHER.DAT_, n25 % 4 + 1, arg8_1 + n290, 640, -1);
    sub_2EB9F(v15, n25 % 4, n25, arg8_1 + n80, (int)_FDOTHER.DAT_, n25 % 4 + 5, arg8_1 + n80, 640, -1);
    n80 += 2;
    n290 -= 2;
    if ( n25 < 25 )
      n290 -= 2;
    LODWORD(v15) = j___delay(20);
    n3_1 = arg8_1 + 160;
    LODWORD(v15) = sub_11EB0(v15, SHIDWORD(v15), n25, arg8_1 + 160, 655360, 320, arg8_1 + 160, 640, 320, 200);
  }
  _FDOTHER.DAT__4 = memmove(arg8_1, arg8_3, 64000);
  LOBYTE(_FDOTHER.DAT__4) = sub_2EB9F(
                              _FDOTHER.DAT__4,
                              SHIDWORD(_FDOTHER.DAT__4),
                              n25,
                              n3_1,
                              (int)_FDOTHER.DAT_,
                              1,
                              arg8_1,
                              320,
                              -1);
  LOBYTE(_FDOTHER.DAT__4) = sub_2EB9F(
                              _FDOTHER.DAT__4,
                              SHIDWORD(_FDOTHER.DAT__4),
                              n25,
                              n3_1,
                              (int)_FDOTHER.DAT_,
                              5,
                              arg8_1,
                              320,
                              -1);
  sub_11EB0(_FDOTHER.DAT__4, SHIDWORD(_FDOTHER.DAT__4), n25, n3_1, 655360, 320, arg8_1, 320, 320, 200);
  if ( n17 == 26 )
  {
    sub_31BDF(32, 21);
    sub_31BDF(36, 22);
    sub_31BDF(32, 23);
  }
  else
  {
    sub_31BDF(32, 8);
    sub_31BDF(36, 9);
  }
  v18 = 0;
  for ( n135 = 0; n135 < 200; ++n135 )
  {
    memmove(arg8_1, arg8_3, 64000);
    HIDWORD(_FDOTHER.DAT__4) = n135 % 4;
    v28 = n135 % 4;
    LOBYTE(_FDOTHER.DAT__4) = sub_2EB9F(
                                n135 / 4,
                                n135 % 4,
                                n135,
                                n135 % 4 + 1,
                                (int)_FDOTHER.DAT_,
                                n135 % 4 + 1,
                                arg8_1,
                                320,
                                -1);
    n3_1 = v28 + 5;
    sub_2EB9F(_FDOTHER.DAT__4, n135 % 4, n135, v28 + 5, (int)_FDOTHER.DAT_, v28 + 5, arg8_1, 320, -1);
    LODWORD(_FDOTHER.DAT__4) = j___delay(20);
    LODWORD(_FDOTHER.DAT__4) = sub_11EB0(_FDOTHER.DAT__4, n135 % 4, n135, n3_1, 655360, 320, arg8_1, 320, 320, 200);
    if ( n135 > 135 )
      ++v18;
    sub_11D40(_FDOTHER.DAT__4, SHIDWORD(_FDOTHER.DAT__4), n135, n3_1, 0, 255, v18);
  }
  free(arg8_1);
  LODWORD(_FDOTHER.DAT__4) = memset(655360, 0, 64000);
  sub_31C49(_FDOTHER.DAT__4);
  LODWORD(_FDOTHER.DAT__4) = memset(655360, 0, 64000);
  LODWORD(_FDOTHER.DAT__4) = sub_25977(_FDOTHER.DAT__4, SHIDWORD(_FDOTHER.DAT__4), n135, n3_1, -1, 1);
  LODWORD(_FDOTHER.DAT__4) = sub_17AA9(_FDOTHER.DAT__4, SHIDWORD(_FDOTHER.DAT__4), n135, n3_1, 50);
  _FDOTHER.DAT__1 = (__int16 *)sub_111BA(
                                 _FDOTHER.DAT__4,
                                 SHIDWORD(_FDOTHER.DAT__4),
                                 n135,
                                 n3_1,
                                 (int)aFdotherDat,
                                 (int)_FDOTHER.DAT__2,
                                 60);           // "FDOTHER.DAT"
  LOBYTE(_FDOTHER.DAT__4) = sub_4E98D(_FDOTHER.DAT__1, 0, 0, 655360, 320, -1);
  LODWORD(_FDOTHER.DAT__4) = sub_1F525(_FDOTHER.DAT__4, SHIDWORD(_FDOTHER.DAT__4), n135, n3_1);
  LODWORD(_FDOTHER.DAT__4) = sub_25977(_FDOTHER.DAT__4, SHIDWORD(_FDOTHER.DAT__4), n135, n3_1, 18, 0);
  LODWORD(_FDOTHER.DAT__4) = sub_17AA9(_FDOTHER.DAT__4, SHIDWORD(_FDOTHER.DAT__4), n135, n3_1, 80);
  sub_1F882(_FDOTHER.DAT__4, SHIDWORD(_FDOTHER.DAT__4), n135, n3_1);
  LODWORD(_FDOTHER.DAT__4) = memset(655360, 0, 64000);
  _FDOTHER.DAT__2 = sub_111BA(
                      _FDOTHER.DAT__4,
                      SHIDWORD(_FDOTHER.DAT__4),
                      n135,
                      n3_1,
                      (int)aFdotherDat,
                      (int)_FDOTHER.DAT__1,
                      58);                      // "FDOTHER.DAT"
  LODWORD(_FDOTHER.DAT__4) = sub_111BA(
                               (__int32)_FDOTHER.DAT__2,
                               SHIDWORD(_FDOTHER.DAT__4),
                               n135,
                               n3_1,
                               (int)aFdotherDat,
                               _FDOTHER.DAT__3,
                               57);             // "FDOTHER.DAT"
  _FDOTHER.DAT__3 = _FDOTHER.DAT__4;            // "FDOTHER.DAT"
  _FDOTHER.DAT__5 = FDOTHER_DAT;
  for ( arg4 = 0; arg4 < 20; ++arg4 )
  {
    FDOTHER_DAT = _FDOTHER.DAT__5;
    if ( (unsigned __int8)dst_[arg4] >= 0x4Cu )
      *(_BYTE *)(n8_0 + 6) = 0;
    else
      *(_BYTE *)(n8_0 + 6) = 2;
    *(_BYTE *)(n8_0 + 7) = dst_[arg4];
    if ( (unsigned __int8)dst__1[arg4] >= 0x4Cu )
      *(_BYTE *)(n8_0 + 86) = 0;
    else
      *(_BYTE *)(n8_0 + 86) = 2;
    *(_BYTE *)(n8_0 + 87) = dst__1[arg4];
    n3_1 = (unsigned __int8)dst__2[arg4];
    n3_9 = n3_1;
    sub_2E2B0(_FDOTHER.DAT__4, SHIDWORD(_FDOTHER.DAT__4), arg4, n3_1, 0, 1);
    FDOTHER_DAT = _FDOTHER.DAT__3;
    sub_11D40(_FDOTHER.DAT__3, SHIDWORD(_FDOTHER.DAT__4), arg4, n3_1, 0, 255, 0);
    LODWORD(_FDOTHER.DAT__4) = sub_17AA9(_FDOTHER.DAT__4, SHIDWORD(_FDOTHER.DAT__4), arg4, n3_1, 20);
    LOBYTE(_FDOTHER.DAT__4) = sub_2EB9F(
                                _FDOTHER.DAT__4,
                                SHIDWORD(_FDOTHER.DAT__4),
                                arg4,
                                n3_1,
                                (int)_FDOTHER.DAT__2,
                                arg4,
                                655360,
                                320,
                                -1);
    LODWORD(_FDOTHER.DAT__4) = sub_17AA9(_FDOTHER.DAT__4, SHIDWORD(_FDOTHER.DAT__4), arg4, n3_1, 78);
    sub_1F882(_FDOTHER.DAT__4, SHIDWORD(_FDOTHER.DAT__4), arg4, n3_1);
    LODWORD(_FDOTHER.DAT__4) = memset(655360, 0, 64000);
  }
  FDOTHER_DAT = _FDOTHER.DAT__5;
  LODWORD(_FDOTHER.DAT__4) = free(_FDOTHER.DAT__3);
  LODWORD(_FDOTHER.DAT__4) = sub_17AA9(_FDOTHER.DAT__4, SHIDWORD(_FDOTHER.DAT__4), arg4, n3_1, 50);
  _FDOTHER.DAT__6 = (__int16 *)sub_111BA(
                                 _FDOTHER.DAT__4,
                                 SHIDWORD(_FDOTHER.DAT__4),
                                 arg4,
                                 n3_1,
                                 (int)aFdotherDat,
                                 (int)_FDOTHER.DAT__2,
                                 59);           // "FDOTHER.DAT"
  LOBYTE(_FDOTHER.DAT__4) = sub_4E98D(_FDOTHER.DAT__6, 0, 0, 655360, 320, -1);
  sub_1F525(_FDOTHER.DAT__4, SHIDWORD(_FDOTHER.DAT__4), arg4, n3_1);
  LODWORD(_FDOTHER.DAT__4) = free(_FDOTHER.DAT__6);
  return _FDOTHER.DAT__4;
}
