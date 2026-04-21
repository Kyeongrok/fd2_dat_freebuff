/*
 * func-name: sub_18D8C
 * func-address: 0x18d8c
 * callers: 0x18890
 * callees: 0x115b6, 0x11cac, 0x12c0d, 0x12cea, 0x134e4, 0x13512, 0x13fd4, 0x14818, 0x173e7, 0x1741c, 0x176b4, 0x177fc, 0x190ac, 0x1aa1d, 0x1b6b7, 0x1b722, 0x1b83d, 0x1b8a6, 0x1bbdc, 0x1c269, 0x1cff0, 0x1db65, 0x1f04a, 0x2e2b0, 0x3702f, 0x3706e, 0x3776e, 0x4df4c, 0x4e381, 0x4e8bc
 */

int __fastcall sub_18D8C(__int32 a1, int a2, int a3, int a4, int n6, _DWORD *dst, int a7)
{
  int v7; // eax
  _DWORD *dst_1; // eax
  int v9; // eax
  char *v10; // eax
  int v11; // eax
  unsigned __int8 *v12; // esi
  __int32 dst_2; // eax
  __int32 v14; // eax
  int v15; // eax
  unsigned __int8 *n6_3; // esi
  int n6_2; // edi
  __int64 n6_1; // rax
  int v20; // ebx
  __int64 v21; // rax
  int v22; // ebx
  __int32 v23; // eax
  int v24; // ebx
  int v25; // eax
  __int32 v26; // eax
  int v27[25]; // [esp-64h] [ebp-94h] BYREF
  _BYTE dst_[16]; // [esp+0h] [ebp-30h] BYREF
  int v29; // [esp+10h] [ebp-20h]
  int v30; // [esp+14h] [ebp-1Ch]
  __int32 n16; // [esp+18h] [ebp-18h]
  int v32; // [esp+1Ch] [ebp-14h]
  int v33; // [esp+2Ch] [ebp-4h]

  sub_3702F(a1, a2, a3, a4, 176);
  v33 = a3;
  qmemcpy(dst_, &src__10, sizeof(dst_));
  *dst = 0;
  dword_53EC8 = 0;
  v7 = sub_1B83D(n6, 0);
  if ( v7 == -1 )
  {
    dst_1 = dst;
    *dst = 1;
  }
  else
  {
    v9 = sub_1B722(n6, v7);
    v10 = sub_4E8BC(v9);
    a3 = (unsigned __int8)v10[11];
    v32 = a3;
    n16 = (unsigned __int8)v10[12];
    sub_14818(n16, a2, a3, 0, dword_53AB1, dword_53AB5, 0, n16, a3, 0);
    if ( !v11 )
      *dst = 1;
    LOBYTE(dst_1) = sub_4DF4C((unsigned __int8 *)dword_53A51);
  }
  sub_173E7((__int32)dst_1, a2, a3, 0, (int)dst);
  sub_1741C(
    (__int32)dst_,
    a2,
    a3,
    0,
    (int)dst_,
    (int)dst,
    v27[0],
    v27[1],
    v27[2],
    v27[3],
    v27[4],
    v27[5],
    v27[6],
    v27[7],
    v27[8]);
  if ( !sub_1B8A6(n6) )
    dst[2] = 1;
  if ( !sub_1C269(n6, 0) )
    dst[1] = 1;
  v12 = (unsigned __int8 *)(80 * n6 + dword_53A45);
  dst_2 = v12[39];
  if ( v12[39] )
  {
    dst_2 = (__int32)dst;
    dst[1] = 1;
  }
  sub_173E7(dst_2, a2, a3, 0, (int)dst);
  do
    a3 = sub_177FC((__int32)dst_, a2, a3, 0, (int)dst_, dst);
  while ( !a3 );
  sub_176B4((__int32)dst_, a2, a3, 0, (int)dst_, (int)dst);
  v15 = sub_11CAC(v14, a2, a3, 0, 0);
  if ( a3 == -1 )
    return -1;
  if ( n3_3 )
  {
    if ( n3_3 == 1 )
    {
      do
        v23 = sub_1CFF0(n6);
      while ( !v23 );
      if ( v23 == -1 )
        return 0;
      sub_13512(v23, a2, a3, 0, n6);
      v24 = v12[33];
      if ( v12[32] > 8u )
        v24 += 30;
      dword_53EC8 /= v24;
    }
    else if ( n3_3 == 2 )
    {
      do
        v25 = sub_1BBDC(n6);
      while ( !v25 );
      if ( v25 == -1 )
        return 0;
      dword_53EC8 = 0;
    }
    else
    {
      if ( !a7 )
        sub_13FD4(v15, a2, a3, 0, n6);
      v26 = sub_190AC(n6);
      sub_13512(v26, a2, a3, 0, n6);
    }
  }
  else
  {
    v30 = dword_53AB1;
    v29 = dword_53AB5;
    n6_1 = malloc(100);
    n6_3 = (unsigned __int8 *)n6_1;
    sub_14818(n6_1, SHIDWORD(n6_1), a3, 0, dword_53AB1, dword_53AB5, n6_1, n16, v32, 0);
    sub_115B6(n6_1, SHIDWORD(n6_1), a3, 0, 0, n6_1, n6_3);
    n6_2 = n6_1;
    sub_4DF4C((unsigned __int8 *)dword_53A51);
    LODWORD(n6_1) = free(n6_3);
    if ( n6_2 == -1 )
    {
      sub_12CEA(n6_1, SHIDWORD(n6_1), a3, 0, v30, v29);
      return 0;
    }
    v20 = sub_12C0D(n6_1, SHIDWORD(n6_1), a3, 0);
    sub_1F04A(n6, v20);
    LODWORD(n6_1) = sub_2E2B0(n6, v20);
    sub_134E4(n6_1, SHIDWORD(n6_1), v20, 0);
    v21 = sub_1B6B7(v27);
    v22 = v21;
    sub_1DB65(v21);
    LODWORD(v21) = sub_1AA1D(n6, v22, v27);
    sub_13512(v21, SHIDWORD(v21), v22, 0, n6);
    sub_4E381();
  }
  return 1;
}
