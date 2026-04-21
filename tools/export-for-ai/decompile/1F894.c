/*
 * func-name: sub_1F894
 * func-address: 0x1f894
 * callers: 0x25ebb
 * callees: 0x10620, 0x111ba, 0x11d40, 0x11df2, 0x11eb0, 0x16886, 0x17aa9, 0x1f525, 0x1f73f, 0x1f81e, 0x1f882, 0x1ff79, 0x20421, 0x25a96, 0x25b45, 0x2df01, 0x3702f, 0x3706e, 0x370f0, 0x37324, 0x373ca, 0x3759c, 0x3776e, 0x3790a, 0x37910, 0x4df09, 0x4df28, 0x4e381, 0x4e98d
 */

void __usercall sub_1F894(
        int a1@<edx>,
        int n99_1@<ebx>,
        int n100_1@<ebp>,
        int n15_2@<esi>,
        __int32 a5@<eax>,
        int a6@<ecx>)
{
  int v6; // eax
  int n3; // ebp
  __int32 v8; // eax
  __int32 v9; // eax
  __int32 v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  __int32 v15; // eax
  __int32 v16; // eax
  __int32 v17; // eax
  int n15_1; // edi
  __int64 n15_4; // rax
  int n5; // esi
  __int64 v21; // rax
  int n535; // esi
  int n40; // esi
  _BYTE *_FDOTHER.DAT__2; // ebx
  int n40_1; // esi
  int _rb_; // ebx
  int v27; // esi
  int n4; // esi
  int n4_1; // [esp-Ch] [ebp-78h]
  int n15_3; // [esp-8h] [ebp-74h]
  int n99_2; // [esp-4h] [ebp-70h]
  _DWORD dst_[17]; // [esp+0h] [ebp-6Ch] BYREF
  __int16 *_FDOTHER.DAT__1; // [esp+44h] [ebp-28h]
  int v34; // [esp+48h] [ebp-24h]
  int n12; // [esp+4Ch] [ebp-20h]
  int v36; // [esp+50h] [ebp-1Ch]
  int _FDOTHER.DAT_; // [esp+54h] [ebp-18h]
  int n11; // [esp+58h] [ebp-14h]
  int n100; // [esp+5Ch] [ebp-10h]
  int v40; // [esp+60h] [ebp-Ch]
  int n15; // [esp+64h] [ebp-8h]
  int n99; // [esp+68h] [ebp-4h]

  v6 = sub_3702F(a5, a1, n99_1, a6, 136);
  n99 = n99_1;
  n15 = n15_2;
  n100 = n100_1;
  v36 = 1;
  dst_[16] = 0;
  n3 = 0;
  v34 = 0;
  n12 = 12;
  LOBYTE(n11) = 0;
  qmemcpy(dst_, &src, 0x3Cu);
  _FDOTHER.DAT_ = (int)sub_111BA(v6, a1, n99_1, 0, (int)aFdotherDat, 0, 77);// "FDOTHER.DAT"
  v8 = memset(655360, 0, 64000);
  FDOTHER_DAT = (int)sub_111BA(v8, a1, n99_1, 0, (int)aFdotherDat, FDOTHER_DAT, 76);// "FDOTHER.DAT"
  sub_11D40(FDOTHER_DAT, a1, n99_1, 0, 0, 255, 64);
  _FDOTHER.DAT__1 = (__int16 *)sub_111BA(v9, a1, n99_1, 0, (int)aFdotherDat, 0, 74);// "FDOTHER.DAT"
  LOBYTE(v10) = sub_4E98D(_FDOTHER.DAT__1, 0, 0, 655360, 320, -1);
  v11 = sub_1F525(v10, a1, n99_1, 0);
  v12 = sub_17AA9(v11, a1, n99_1, 0, 1);
  v13 = sub_17AA9(v12, a1, n99_1, 0, 30);
  v14 = sub_1F882(v13, a1, n99_1, 0);
  FDOTHER_DAT = (int)sub_111BA(v14, a1, n99_1, 0, (int)aFdotherDat, FDOTHER_DAT, 99);// "FDOTHER.DAT"
  v15 = memset(655360, 0, 64000);
  sub_11D40(v15, a1, n99_1, 0, 0, 255, 0);
  sub_20421(3, 90, 1);
  sub_1F882(v16, a1, n99_1, 0);
  v17 = memset(655360, 0, 64000);
  FDOTHER_DAT = (int)sub_111BA(v17, a1, n99_1, 0, (int)aFdotherDat, FDOTHER_DAT, 101);// "FDOTHER.DAT"
  sub_11D40(FDOTHER_DAT, a1, n99_1, 0, 0, 255, 64);
  n15_4 = malloc(&loc_396C0);
  n15_1 = n15_4;
  memset(n15_4, 0, &loc_396C0);
  for ( n5 = 0; n5 < 5; ++n5 )
  {
    _FDOTHER.DAT__1 = (__int16 *)sub_111BA(
                                   n5 + 69,
                                   SHIDWORD(n15_4),
                                   n99_1,
                                   0,
                                   (int)aFdotherDat,
                                   (int)_FDOTHER.DAT__1,
                                   n5 + 69);    // "FDOTHER.DAT"
    n99_1 = 147 * n5;
    sub_4E98D(_FDOTHER.DAT__1, 0, 147 * n5, n15_1, 320, -1);
  }
  sub_4E381();
  if ( dword_53A45 )
    free(dword_53A45);
  v21 = malloc(160);
  dword_53A45 = v21;
  for ( n535 = 535; ; --n535 )
  {
    if ( n535 < 0 )
    {
LABEL_32:
      for ( n40 = 40; n40 >= 0; --n40 )
      {
        sub_2DF01(v21, SHIDWORD(v21), n99_1, 0, 0, 255, n40, 0x3Fu, 0, 0);
        LODWORD(v21) = j___delay(8);
      }
      j___delay(100);
      sub_4E381();
      free(n15_1);
      LODWORD(v21) = free(v36);
      _FDOTHER.DAT__2 = sub_111BA(v21, SHIDWORD(v21), n99_1, 0, (int)aFdotherDat, _FDOTHER.DAT_, 7);// "FDOTHER.DAT"
      _FDOTHER.DAT_ = (int)_FDOTHER.DAT__2;     // "FDOTHER.DAT"
      FDOTHER_DAT = (int)sub_111BA(
                           (__int32)_FDOTHER.DAT__2,
                           SHIDWORD(v21),
                           (int)_FDOTHER.DAT__2,
                           0,
                           (int)aFdotherDat,
                           FDOTHER_DAT,
                           8);                  // "FDOTHER.DAT"
      LODWORD(v21) = memset(655360, 0, 64000);
      sub_11D40(v21, SHIDWORD(v21), (int)_FDOTHER.DAT__2, 0, 0, 255, 0);
      sub_20421(1, 15, 1);
      LODWORD(v21) = sub_25B45(v40, 3, 1);
      sub_11DF2(v21, SHIDWORD(v21), (int)_FDOTHER.DAT__2, 0, 0, 255, 64);
      LOBYTE(v21) = sub_16886(v21, SHIDWORD(v21), (int)_FDOTHER.DAT__2, 0, 655360, 320, (int)_FDOTHER.DAT__2, 0);
      for ( n40_1 = 0; n40_1 <= 40; ++n40_1 )
      {
        sub_2DF01(v21, SHIDWORD(v21), (int)_FDOTHER.DAT__2, 0, 0, 255, n40_1, 0x38u, 0x3Cu, 0x3Fu);
        LODWORD(v21) = j___delay(8);
      }
      sub_4E381();
      _rb_ = fopen((int)aFd2Sav_3, (int)aRb_3); // "rb"
      if ( _rb_ )
      {
        v21 = malloc(22987);
        v27 = v21;
        v34 = v21;
        sub_373CA((_BYTE *)v21, 1u, 22987, _rb_);
        fclose(_rb_);
        sub_4DF28((char *)v27, 22987);
        if ( sub_4DF09((_BYTE *)v27, 22987) == *(_DWORD *)(v27 + 22983) )
        {
          n100 = 2;
          if ( *(unsigned __int8 *)(v27 + 12485) != 255 )
            n100 = 3;
        }
        free(v34);
      }
      LODWORD(v21) = sub_1FF79(_FDOTHER.DAT_, 0, n100);
      while ( !n12 )
      {
        sub_1FF79(_FDOTHER.DAT_, n3, n100);
        HIBYTE(::n3) = 16;
        int386(22, &::n3, &::n3);
        LODWORD(v21) = HIBYTE(::n3);
        _rb_ = n100 - 1;
        if ( HIBYTE(::n3) == 72 )
        {
          LODWORD(v21) = sub_25A96(v40, 2, 1);
          if ( n3 )
            --n3;
          else
            n3 = _rb_;
        }
        else if ( HIBYTE(::n3) == 80 )
        {
          LODWORD(v21) = sub_25A96(v40, 2, 1);
          if ( n3 == _rb_ )
            n3 ^= _rb_;
          else
            ++n3;
        }
        else
        {
          _rb_ = (unsigned __int8)::n3;
          if ( (unsigned __int8)::n3 == 13 || (unsigned __int8)::n3 == 32 || HIBYTE(::n3) == 224 || HIBYTE(::n3) == 82 )
          {
            LODWORD(v21) = sub_25A96(v40, 1, 1);
            n12 = 1;
          }
        }
      }
      for ( n4 = 0; n4 < 4; ++n4 )
      {
        sub_1FF79(_FDOTHER.DAT_, -1, n100);
        j___delay(80);
        sub_1FF79(_FDOTHER.DAT_, n3, n100);
        LODWORD(v21) = j___delay(80);
      }
      sub_1F882(v21, SHIDWORD(v21), _rb_, 0);
      memset(655360, 0, 64000);
      free(_FDOTHER.DAT_);
      sub_25A96(v40, -1, 1);
      free(v40);
      JUMPOUT(0x13994);
    }
    LODWORD(v21) = sub_11EB0(
                     n15_1 + 320 * n535,
                     SHIDWORD(v21),
                     n99_1,
                     0,
                     655360,
                     320,
                     n15_1 + 320 * n535,
                     320,
                     320,
                     200);
    if ( n535 == 535 )
      sub_1F525(v21, SHIDWORD(v21), n99_1, 0);
    LODWORD(v21) = 320 * n535;
    n99_1 = n15_1 + 320 * n535;
    if ( n535 == 25 )
      break;
    switch ( n535 )
    {
      case 330:
        LODWORD(v21) = sub_1F882(v21, SHIDWORD(v21), n99_1, 0);
        LODWORD(v21) = sub_1F81E(v21, SHIDWORD(v21), n99_1, 0, 4, 90, 99);
        dst_[2] = 0;
        dst_[1] = 50;
        dst_[0] = 5;
        goto LABEL_13;
      case 210:
        LODWORD(v21) = sub_1F882(v21, SHIDWORD(v21), n99_1, 0);
        LODWORD(v21) = sub_1F81E(v21, SHIDWORD(v21), n99_1, 0, 6, 90, 99);
        dst_[2] = 0;
        dst_[1] = 50;
        dst_[0] = 7;
        goto LABEL_13;
      case 110:
        LODWORD(v21) = sub_1F882(v21, SHIDWORD(v21), n99_1, 0);
        LODWORD(v21) = sub_1F81E(v21, SHIDWORD(v21), n99_1, 0, 8, 90, 99);
        goto LABEL_14;
      case 450:
        sub_1F73F(v21, SHIDWORD(v21), n99_1, 0, 100, 99, n15_1, 450);
        break;
      case 10:
        sub_1F73F(v21, SHIDWORD(v21), n99_1, 0, 75, 76, n15_1, 10);
        break;
    }
LABEL_25:
    LODWORD(v21) = (unsigned __int8)n15;
    if ( n535 == dst_[(unsigned __int8)n15 + 3] )
    {
      n11 = 0;
      LODWORD(v21) = sub_25A96(v40, 0, 1);
      FDOTHER_DAT = (int)sub_111BA(v21, SHIDWORD(v21), n99_1, 0, (int)aFdotherDat, FDOTHER_DAT, 102);// "FDOTHER.DAT"
      sub_11D40(FDOTHER_DAT, SHIDWORD(v21), n99_1, 0, 0, 255, 0);
      LOBYTE(n15) = n15 + 1;
    }
    if ( n11 == 11 )
    {
      FDOTHER_DAT = (int)sub_111BA(v21, SHIDWORD(v21), n99_1, 0, (int)aFdotherDat, FDOTHER_DAT, 101);// "FDOTHER.DAT"
      sub_11D40(FDOTHER_DAT, SHIDWORD(v21), n99_1, 0, 0, 255, 0);
    }
    ++n11;
    j___delay(30);
    if ( !n535 )
      j___delay(1000);
    LODWORD(v21) = sub_10620();
    if ( (_DWORD)v21 )
      goto LABEL_32;
  }
  n99_2 = 0;
  n15_3 = 15;
  n4_1 = 0;
LABEL_13:
  LODWORD(v21) = sub_1F81E(v21, SHIDWORD(v21), n99_1, 0, n4_1, n15_3, n99_2);
LABEL_14:
  LODWORD(v21) = sub_11EB0(v21, SHIDWORD(v21), n99_1, 0, 655360, 320, n15_1 + 320 * n535, 320, 320, 200);
  FDOTHER_DAT = (int)sub_111BA(v21, SHIDWORD(v21), n99_1, 0, (int)aFdotherDat, FDOTHER_DAT, 101);// "FDOTHER.DAT"
  sub_1F525(FDOTHER_DAT, SHIDWORD(v21), n99_1, 0);
  goto LABEL_25;
}
/* Orphan comments:
"rb"
*/
