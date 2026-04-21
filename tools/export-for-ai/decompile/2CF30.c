/*
 * func-name: sub_2CF30
 * func-address: 0x2cf30
 * callers: 0x2ff01
 * callees: 0x111ba, 0x11cac, 0x11eb0, 0x12e38, 0x17aa9, 0x1c81f, 0x1f525, 0x1f882, 0x25a96, 0x2e95b, 0x2e9a8, 0x2eb9f, 0x2f4d4, 0x2facd, 0x30e25, 0x30e9d, 0x311e5, 0x314de, 0x3702f, 0x3706e, 0x3776e, 0x37910, 0x4e98d
 */

int __fastcall sub_2CF30(__int32 a1, int a2, int a3, int a4, int arg0, int n28, int n30_2, unsigned __int8 *argC)
{
  int v8; // edx
  int v9; // edi
  __int32 v10; // esi
  __int16 *_BG.DAT_; // ebx
  __int16 *_BG.DAT__2; // edi
  int v13; // esi
  int v14; // edx
  int n30_1; // ebx
  __int32 v16; // eax
  int n50; // edx
  __int32 v18; // eax
  int v19; // eax
  unsigned __int8 *v20; // edi
  __int32 j; // ebp
  __int32 v22; // eax
  int n5_1; // esi
  __int32 v24; // eax
  int v25; // eax
  __int32 v26; // eax
  __int64 n655360; // rax
  __int64 v28; // rax
  unsigned __int8 *v30[30]; // [esp+0h] [ebp-DCh]
  _BYTE v31[8]; // [esp+78h] [ebp-64h] BYREF
  int v32; // [esp+80h] [ebp-5Ch]
  __int16 v33; // [esp+84h] [ebp-58h]
  __int16 *_BG.DAT__1; // [esp+88h] [ebp-54h]
  _BYTE *_FIGANI.DAT_; // [esp+8Ch] [ebp-50h]
  __int16 *_TAI.DAT_; // [esp+90h] [ebp-4Ch]
  int v37; // [esp+94h] [ebp-48h]
  __int16 *_BG.DAT__3; // [esp+98h] [ebp-44h]
  int v39; // [esp+9Ch] [ebp-40h]
  int v40; // [esp+A0h] [ebp-3Ch]
  unsigned __int8 *v41; // [esp+A4h] [ebp-38h]
  int v42; // [esp+A8h] [ebp-34h]
  int v43; // [esp+ACh] [ebp-30h]
  int n30; // [esp+B0h] [ebp-2Ch]
  unsigned __int8 *n3; // [esp+B4h] [ebp-28h]
  int i; // [esp+B8h] [ebp-24h]
  int n33; // [esp+BCh] [ebp-20h]
  unsigned __int8 n5; // [esp+C0h] [ebp-1Ch]
  unsigned __int8 v49; // [esp+C4h] [ebp-18h]
  unsigned __int8 n8; // [esp+C8h] [ebp-14h]
  int v51; // [esp+D8h] [ebp-4h]

  sub_3702F(a1, a2, a3, a4, 256);
  v51 = a3;
  _TAI.DAT_ = 0;
  _BG.DAT__3 = 0;
  n3 = 0;
  _FIGANI.DAT_ = 0;
  v32 = unk_52656;
  v33 = unk_5265A;
  n5 = 0;
  n33 = -1;
  free(dword_53A61);
  free(n655360_0);
  free(n7);
  n7 = 0;
  for ( n30 = 0; n30 < 30; ++n30 )
    v30[n30] = 0;
  switch ( n28 )
  {
    case 24:
      n30 = 15;
      break;
    case 28:
      n30 = 20;
      break;
    case 29:
      n30 = 13;
      break;
    default:
      n30 = 18;
      break;
  }
  v41 = (unsigned __int8 *)(80 * arg0 + n8_0);
  v8 = n30 * *((__int16 *)v41 + 36) % 10;
  v37 = n30 * *((__int16 *)v41 + 36) / 10;
  sub_12E38(*v41, v8, 10, a4, *v41, v41[1], (int)v31);
  v9 = v31[6];
  v10 = sub_30E25(n30_2, argC);
  _BG.DAT_ = (__int16 *)sub_111BA(v10, v8, 10, a4, (int)aBgDat, (int)_BG.DAT__3, v9);// "BG.DAT"
  _BG.DAT__1 = _BG.DAT_;
  _TAI.DAT_ = (__int16 *)sub_111BA((__int32)_BG.DAT_, v8, (int)_BG.DAT_, a4, (int)aTaiDat, (int)_TAI.DAT_, v9);// "TAI.DAT"
  _BG.DAT__2 = (__int16 *)sub_111BA((__int32)_TAI.DAT_, v8, (int)_BG.DAT_, a4, (int)aBgDat, (int)_BG.DAT__3, v10);// "BG.DAT"
  _BG.DAT__3 = _BG.DAT__2;
  dword_5413F[0] = 0;
  BG_DAT = 0;
  BG_DAT__0 = 0;
  dword_5413F[0] = (int)sub_111BA((__int32)_BG.DAT__2, v8, (int)_BG.DAT_, a4, (int)aBgDat, 0, 0);// "BG.DAT"
  BG_DAT = (int)sub_111BA(dword_5413F[0], v8, (int)_BG.DAT_, a4, (int)aBgDat, BG_DAT, 1);// "BG.DAT"
  BG_DAT__0 = (int)sub_111BA(BG_DAT, v8, (int)_BG.DAT_, a4, (int)aBgDat, BG_DAT__0, 2);// "BG.DAT"
  v13 = malloc(64000);
  v43 = v13;
  v42 = malloc(&loc_1F400);
  memset(v13, 0, 64000);
  sub_2FACD(v13, arg0);
  if ( n28 == 28 )
  {
    sub_4E98D(_BG.DAT__2, 0, 50, v13, 320, -1);
    sub_2FACD(v13, *argC);
  }
  else
  {
    sub_4E98D(_BG.DAT_, 0, 50, v13, 320, -1);
  }
  v14 = *(unsigned __int8 *)(n8_0 + 80 * arg0 + 7);
  _FIGANI.DAT_ = sub_111BA(80 * arg0, v14, 3 * v14, a4, (int)aFiganiDat, (int)_FIGANI.DAT_, 3 * v14);// "FIGANI.DAT"
  n30_1 = 3 * v14 + 2;
  n3 = sub_111BA((__int32)_FIGANI.DAT_, v14, n30_1, a4, (int)aFiganiDat, (int)n3, n30_1);// "FIGANI.DAT"
  dword_5414B = sub_314DE((int)n3);
  sub_1F882(dword_5414B, v14, n30_1, a4);
  for ( n30 = 0; n30 < n30_2; ++n30 )
  {
    v14 = *(unsigned __int8 *)(n8_0 + 80 * argC[n30] + 7);
    n30_1 = n30;
    v30[n30_1] = sub_111BA(3 * v14, v14, n30, a4, (int)aFiganiDat, (int)v30[n30], 3 * v14);// "FIGANI.DAT"
  }
  n30 = n28 != 28;
  LOBYTE(v16) = sub_2E9A8(arg0, n30, (int)_FIGANI.DAT_, (int)v30[0], v42, v43, _TAI.DAT_);
  sub_30E9D(v16, v14, n30_1, a4, arg0, n28, n3, v30[0], v42, v43, _BG.DAT__1, _TAI.DAT_);
  for ( n30 = 0; n30 < n30_2; ++n30 )
  {
    memset(v42, 0, &loc_1F400);
    sub_11EB0(v42 + 320, v14, n30_1, a4, v42 + 320, 640, 655360, 320, 320, 200);
    if ( n28 != 28 )
      sub_2F4D4(argC[n30], (int)v30[n30], v43, v42, _BG.DAT__3);
    sub_311E5(v30[n30], 0, v42, 320);
    n50 = argC[n30];
    v41 = (unsigned __int8 *)(80 * n50 + n8_0);
    v40 = *((__int16 *)v41 + 32);
    v18 = *((__int16 *)v41 + 37);
    n30_1 = v37 - v18;
    sub_1C81F(v18, n50, v37 - v18, a4, n50, v37 - v18);
    v39 = v19;
    if ( v19 > v40 )
      v39 = v40;
    v14 = (int)v41;
    *((_WORD *)v41 + 32) = v40;
    if ( n28 == 28 )
      n8 = 8;
    else
      n8 = 1;
    v49 = 0;
    for ( i = n3[2]; *n3 > i; ++i )
    {
      v20 = &n3[*(_DWORD *)&n3[4 * i + 8]];
      if ( v20[5] )
        sub_25A96(v20[5], v14, n30_1, a4, dword_5414B, v20[5], 1);
      if ( v20[4] == 1 )
      {
        n5 = 5;
        n33 = 33;
        ++v49;
        n30_1 = n8;
        v14 = (int)v41;
        *((_WORD *)v41 + 32) = v40 - v39 * v49 / n8;
        sub_2FACD(v43, argC[n30]);
      }
      for ( j = 0; ; ++j )
      {
        v22 = v20[6];
        if ( j >= v22 )
          break;
        n30_1 = v42 + 320;
        sub_11EB0(v22, v14, v42 + 320, a4, v42 + 320, 640, v43, 320, 320, 200);
        n5_1 = n5;
        v14 = n30_1 - *((unsigned __int8 *)&v32 + n5);
        sub_311E5(v30[n30], n33, v14, 640);
        LOBYTE(v24) = sub_2EB9F((int)n3, i, n30_1, 640, -1);
        v25 = sub_11EB0(v24, v14, n30_1, a4, 655360, 320, n30_1, 640, 320, 200);
        sub_17AA9(v25, v14, n30_1, a4, 1);
        if ( n5_1 )
          --n5;
        n33 = -1;
      }
    }
  }
  for ( n30 = 0; n30 < n30_2; ++n30 )
    free(v30[n30]);
  free(_BG.DAT__1);
  free(_BG.DAT__3);
  free(_TAI.DAT_);
  free(_BG.DAT__1);
  free(v43);
  free(v42);
  free(dword_5413F[0]);
  free(BG_DAT);
  free(BG_DAT__0);
  free(_FIGANI.DAT_);
  v26 = free(n3);
  sub_25A96(v26, v14, n30_1, a4, dword_5414B, -1, 1);
  if ( dword_5414B )
    free(dword_5414B);
  n655360 = malloc(153216);
  n655360_0 = n655360;
  n30 = *(unsigned __int8 *)dword_53A55;
  n7 = (int)sub_111BA(2 * n30, SHIDWORD(n655360), n30_1, a4, (int)aFdshapDat, n7, 2 * n30);// "FDSHAP.DAT"
  v28 = sub_2E95B();
  LODWORD(v28) = sub_17AA9(v28, SHIDWORD(v28), n30_1, a4, 6);
  sub_1F882(v28, SHIDWORD(v28), n30_1, a4);
  LODWORD(v28) = memset(655360, 0, 64000);
  LODWORD(v28) = sub_11CAC(v28, SHIDWORD(v28), n30_1, a4, 1);
  return sub_1F525(v28, SHIDWORD(v28), n30_1, a4);
}
