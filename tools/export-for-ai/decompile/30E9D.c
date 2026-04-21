/*
 * func-name: sub_30E9D
 * func-address: 0x30e9d
 * callers: 0x2cf30, 0x2d80d, 0x2ff01
 * callees: 0x11eb0, 0x17aa9, 0x1ca89, 0x25a96, 0x2eb9f, 0x2facd, 0x3702f, 0x3790a, 0x37ae5, 0x4e8d3
 */

int __fastcall sub_30E9D(
        __int32 a1,
        int a2,
        int n3,
        int n2,
        int arg0,
        int n28,
        unsigned __int8 *n3a,
        unsigned __int8 *arg0_1,
        int arg8,
        int a10,
        __int16 *_BG.DAT_,
        __int16 *_TAI.DAT_)
{
  int arg4_2; // eax
  int _FDOTHER.DAT_; // edx
  int v14; // eax
  __int32 v15; // eax
  __int32 v16; // eax
  __int32 v17; // eax
  __int32 v18; // eax
  __int32 n3_1; // eax
  int v20; // [esp+0h] [ebp-30h]
  int n11; // [esp+4h] [ebp-2Ch]
  int v22; // [esp+8h] [ebp-28h]
  int _FDOTHER.DAT__1; // [esp+Ch] [ebp-24h]
  int arg4; // [esp+10h] [ebp-20h]
  int n6; // [esp+14h] [ebp-1Ch]
  unsigned __int8 arg4_1; // [esp+18h] [ebp-18h]
  unsigned __int8 v27; // [esp+1Ch] [ebp-14h]

  sub_3702F(a1, a2, n3, n2, 76);
  v27 = 0;
  arg4_1 = 0;
  n6 = 0;
  n11 = 11;
  if ( n28 == 8 || n28 == 32 || n28 == 33 )
  {
    n11 = 19;
  }
  else if ( n28 > 3 )
  {
    n11 = 15;
  }
  v22 = 80 * arg0 + n8_0;
  for ( arg4 = 0; ; ++arg4 )
  {
    arg4_2 = n3a[2];
    if ( arg4_2 <= arg4 )
      break;
    _FDOTHER.DAT_ = (int)&n3a[*(_DWORD *)&n3a[4 * arg4 + 8]];
    _FDOTHER.DAT__1 = _FDOTHER.DAT_;
    if ( (n28 == 24 || n28 > 27 && n28 < 31) && *(_BYTE *)(_FDOTHER.DAT_ + 5) )
      sub_25A96(
        *(unsigned __int8 *)(_FDOTHER.DAT_ + 5),
        _FDOTHER.DAT_,
        n3,
        n2,
        dword_5414B,
        *(unsigned __int8 *)(_FDOTHER.DAT_ + 5),
        1);
    if ( *(_BYTE *)(_FDOTHER.DAT_ + 4) == 1 )
    {
      v14 = sub_1CA89(1, _FDOTHER.DAT_, n3, n2, arg0, n28);
      sub_2FACD(v14, _FDOTHER.DAT_, n3, n2, a10, arg0);
      if ( n28 < 10 || n28 >= 32 )
      {
        n6 = 6;
        _FDOTHER.DAT_ = FDOTHER_DAT__3;
        v20 = FDOTHER_DAT__3 + *(_DWORD *)(FDOTHER_DAT__3 + 4 * n11 + 6);
        sub_4E8D3(_BG.DAT_, 0, 50, a10, 320, v20);
        LOBYTE(v15) = sub_4E8D3(_TAI.DAT_, 164, 157, a10, 320, v20);
        sub_25A96(v15, _FDOTHER.DAT_, n3, n2, FDOTHER_DAT__7, 0, 1);
      }
    }
    for ( n3 = 0; ; ++n3 )
    {
      n3_1 = *(unsigned __int8 *)(_FDOTHER.DAT__1 + 6);
      if ( n3 >= n3_1 )
        break;
      sub_11EB0(n3_1, _FDOTHER.DAT_, n3, n2, arg8, 320, a10, 320, 320, 200);
      v16 = *(unsigned __int8 *)(v22 + 6);
      if ( *(_BYTE *)(v22 + 6) )
      {
        LOBYTE(v17) = sub_2EB9F(v16, _FDOTHER.DAT_, n3, n2, (int)n3a, arg4, arg8, 320, -1);
        if ( n28 < 10 || n28 == 28 )
          LOBYTE(v17) = sub_2EB9F(arg4_1, _FDOTHER.DAT_, n3, n2, (int)arg0_1, arg4_1, arg8, 320, -1);
      }
      else
      {
        if ( n28 < 10 || n28 == 28 )
          LOBYTE(v16) = sub_2EB9F(arg4_1, _FDOTHER.DAT_, n3, n2, (int)arg0_1, arg4_1, arg8, 320, -1);
        LOBYTE(v17) = sub_2EB9F(v16, _FDOTHER.DAT_, n3, n2, (int)n3a, arg4, arg8, 320, -1);
      }
      sub_11EB0(v17, _FDOTHER.DAT_, n3, n2, 655360, 320, arg8, 320, 320, 200);
      if ( n6 )
      {
        outp(968, 0);
        outp(969, byte_51AAD[n28]);
        outp(969, byte_51AD1[n28]);
        outp(969, byte_51AF5[n28]);
        j___delay(30);
        outp(968, 0);
        outp(969, 0);
        outp(969, 0);
        outp(969, 0);
        --n6;
      }
      v18 = arg0_1[*(_DWORD *)&arg0_1[4 * arg4_1 + 8] + 6];
      _FDOTHER.DAT_ = ++v27;
      if ( v27 == v18 )
      {
        v27 = 0;
        v18 = ++arg4_1;
        _FDOTHER.DAT_ = *arg0_1;
        if ( arg4_1 == _FDOTHER.DAT_ )
          arg4_1 = 0;
      }
      sub_17AA9(v18, _FDOTHER.DAT_, n3, n2, 1);
    }
  }
  return arg4_2;
}
