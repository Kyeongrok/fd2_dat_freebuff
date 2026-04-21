/*
 * func-name: sub_240FA
 * func-address: 0x240fa
 * callers: 0x15311, 0x1cff0, 0x25bf4
 * callees: 0x112a5, 0x11506, 0x1366a, 0x15f84, 0x1b8e7, 0x1c220, 0x233c6, 0x24336, 0x2aedb, 0x3702f
 */

void __fastcall sub_240FA(__int32 a1, int n5, int a3, int a4)
{
  int n0x10_1; // ebx
  __int32 v5; // eax
  __int32 v6; // eax
  __int32 v7; // eax
  __int32 v8; // eax
  int v9; // eax
  __int32 v10; // eax
  int v11; // eax
  __int32 v12; // eax
  __int32 v13; // eax
  int v14; // eax
  int v15; // eax
  _BYTE dst__2[25]; // [esp+0h] [ebp-68h] BYREF
  unsigned __int8 v17[3]; // [esp+19h] [ebp-4Fh] BYREF
  _BYTE dst__1[28]; // [esp+1Ch] [ebp-4Ch] BYREF
  _BYTE dst_[28]; // [esp+38h] [ebp-30h] BYREF
  unsigned __int8 n0xD7; // [esp+54h] [ebp-14h]
  unsigned __int8 n0x10; // [esp+58h] [ebp-10h]
  int v22; // [esp+64h] [ebp-4h]

  sub_3702F(a1, n5, a3, a4, 152);
  v22 = a3;
  qmemcpy(dst_, &src__32, 0x18u);
  dst_[24] = unk_52240;
  qmemcpy(dst__1, &src__33, 0x18u);
  dst__1[24] = unk_52259;
  qmemcpy(dst__2, &src__34, 0x18u);
  dst__2[24] = unk_52272;
  n0x10_1 = 0;
  sub_233C6((__int32)dst_, n5, 0, 0, (int)dst_, (int)dst__1, (unsigned int)dst__2, 0, 24, 25, 23, 14, 1, 14, 10);
  sub_15F84(v17, v5, n5, 0, 0, arg0_0, 5, 655360, 320, 205, 76, 74, 19, 1);
  for ( n0xD7 = -47; n0xD7 < 0xD7u; ++n0xD7 )
  {
    for ( n0x10 = 0; n0x10 < 0x10u; ++n0x10 )
    {
      n5 = n0xD7;
      if ( sub_2AEDB(n0x10, n0xD7) != -1 )
        ++n0x10_1;
    }
  }
  if ( n0x10_1 == 6 )
  {
    for ( n0xD7 = -47; n0xD7 < 0xD7u; ++n0xD7 )
    {
      for ( n0x10 = 0; ; ++n0x10 )
      {
        n0x10_1 = n0x10;
        if ( n0x10 >= 0x10u )
          break;
        v6 = sub_2AEDB(n0x10, n0xD7);
        if ( v6 != -1 )
          sub_1B8E7(v6, n5, n0x10_1, 0, n0x10_1, v6);
      }
    }
    v7 = sub_1C220(n0xD7, n5, n0x10_1, 0, 100);
    sub_15F84(v17, v7, n5, 0, n0x10_1, arg0_0, 7, 655360, 320, 205, 76, 74, 19, 1);
    n6_5 = 0;
    v9 = sub_1366A(v8, n5, n0x10_1, 0, 63);
    sub_15F84(v17, v9, n5, 0, n0x10_1, arg0_0, 8, 655360, 320, 205, 76, 74, 19, 1);
    n6_5 = 0;
    v11 = sub_1366A(v10, n5, n0x10_1, 0, 64);
    sub_15F84(v17, v11, n5, 0, n0x10_1, arg0_0, 9, 655360, 320, 205, 76, 74, 19, 1);
    v12 = sub_24336();
    sub_15F84(v17, v12, n5, 0, n0x10_1, arg0_0, 10, 655360, 320, 205, 76, 74, 19, 1);
  }
  else
  {
    sub_15F84(v17, n0xD7, n5, 0, n0x10_1, arg0_0, 6, 655360, 320, 205, 76, 74, 19, 1);
  }
  v14 = sub_112A5(v13, n5, n0x10_1, 0, 0x18u);
  v15 = sub_112A5(v14, n5, n0x10_1, 0, 0x17u);
  sub_11506(v15, n5, n0x10_1, 0);
  ++n17;
}
