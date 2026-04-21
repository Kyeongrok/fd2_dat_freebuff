/*
 * func-name: sub_250CC
 * func-address: 0x250cc
 * callers: 0x15311, 0x1cff0, 0x25bf4
 * callees: 0x11506, 0x135dd, 0x1366a, 0x15f84, 0x1c2da, 0x1f882, 0x22253, 0x233c6, 0x24618, 0x24b14, 0x25052, 0x25089, 0x31529, 0x3702f, 0x3790a, 0x37910
 */

void __fastcall sub_250CC(__int32 a1, int a2, int n0x10, int a4)
{
  __int32 v4; // eax
  __int32 v5; // eax
  int v6; // eax
  int v7; // eax
  __int32 v8; // eax
  int v9; // eax
  __int32 v10; // eax
  __int32 v11; // eax
  int v12; // eax
  __int32 v13; // eax
  int v14; // eax
  __int32 v15; // eax
  __int32 v16; // eax
  __int32 v17; // eax
  __int32 v18; // eax
  __int32 v19; // eax
  __int32 v20; // eax
  __int32 v21; // eax
  __int32 v22; // eax
  __int32 v23; // eax
  int v24; // eax
  __int32 v25; // eax
  int v26; // eax
  int v27; // edx
  __int32 v28; // eax
  __int32 v29; // eax
  int dst_[4]; // [esp+0h] [ebp-30h] BYREF
  int dst__1[4]; // [esp+10h] [ebp-20h] BYREF
  int v32[4]; // [esp+20h] [ebp-10h] BYREF

  sub_3702F(a1, a2, n0x10, a4, 96);
  v32[3] = n0x10;
  qmemcpy(dst_, &src__41, sizeof(dst_));
  qmemcpy(dst__1, &src__42, sizeof(dst__1));
  LOBYTE(v32[0]) = byte_52326;
  LOBYTE(n0x10) = 0;
  while ( (unsigned __int8)n0x10 < 0x10u )
  {
    a2 = 80 * (unsigned __int8)n0x10;
    *(_BYTE *)(a2 + dword_53A45 + 5) = 0;
    LOBYTE(n0x10) = n0x10 + 1;
  }
  sub_233C6((__int32)dst_, a2, n0x10, 0, (int)dst_, (int)dst__1, 2u, 0, 15, 0, 0, 0, 0, 9, 8);
  sub_15F84((unsigned __int8 *)v32, v4, a2, 0, n0x10, arg0_0, 8, 655360, 320, 205, 76, 74, 19, 1);
  n6_5 = 0;
  v6 = sub_1366A(v5, a2, n0x10, 0, 82);
  v7 = sub_24B14(v6, a2, n0x10, 0, 100);
  if ( v7 != -1 )
  {
    sub_15F84((unsigned __int8 *)v32, v7, a2, 0, n0x10, arg0_0, 9, 655360, 320, 205, 76, 74, 19, 1);
    n6_5 = 0;
    v9 = sub_1366A(v8, a2, n0x10, 0, 83);
    sub_15F84((unsigned __int8 *)v32, v9, a2, 0, n0x10, arg0_0, 10, 655360, 320, 205, 76, 74, 19, 1);
    n6_5 = 0;
    sub_135DD(v10, a2, n0x10, 0, 9, 8);
    v12 = sub_1366A(v11, a2, n0x10, 0, 84);
    sub_15F84((unsigned __int8 *)v32, v12, a2, 0, n0x10, arg0_0, 11, 655360, 320, 205, 76, 74, 19, 1);
    v14 = sub_25052(v13, a2, n0x10, 0, 80, 5);
    sub_15F84((unsigned __int8 *)v32, v14, a2, 0, n0x10, arg0_0, 12, 655360, 320, 205, 76, 74, 19, 1);
    sub_25052(v15, a2, n0x10, 0, 80, 4);
    v16 = j___delay(500);
    sub_25052(v16, a2, n0x10, 0, 80, 3);
    v17 = j___delay(250);
    sub_25052(v17, a2, n0x10, 0, 80, 2);
    v18 = j___delay(100);
    sub_25052(v18, a2, n0x10, 0, 80, 2);
    v19 = j___delay(50);
    sub_25052(v19, a2, n0x10, 0, 80, 2);
    sub_24618(
      n2_1 - 1,
      a2,
      n0x10,
      0,
      (char *)n10,
      n2_1 - 1,
      10,
      10,
      dst_[0],
      dst_[1],
      dst_[2],
      dst_[3],
      dst__1[0],
      dst__1[1]);
    j___delay(500);
    v20 = memset(655360, 255, 64000);
    sub_1F882(v20, a2, n0x10, 0);
    v21 = memset(655360, 0, 64000);
    sub_11506(v21, a2, n0x10, 0);
    ++n17;
    sub_25089(v22, a2, n0x10, 0);
    JUMPOUT(0x1B5EA);
  }
  sub_15F84((unsigned __int8 *)v32, -1, a2, 0, n0x10, arg0_0, 13, 655360, 320, 205, 76, 74, 19, 1);
  n6_5 = 0;
  v24 = sub_1366A(v23, a2, n0x10, 0, 84);
  sub_15F84((unsigned __int8 *)v32, v24, a2, 0, n0x10, arg0_0, 14, 655360, 320, 205, 76, 74, 19, 1);
  n6_5 = 0;
  v26 = sub_1366A(v25, a2, n0x10, 0, 82);
  sub_15F84((unsigned __int8 *)v32, v26, a2, 0, n0x10, arg0_0, 15, 655360, 320, 205, 76, 74, 19, 1);
  n6_5 = 0;
  sub_1C2DA((__int32)v32, a2, n0x10, 0, 0, 19, 1, (int)v32);
  v27 = *(unsigned __int8 *)(dword_53A45 + 81);
  sub_22253(
    *(unsigned __int8 *)(dword_53A45 + 80),
    v27,
    0,
    n0x10,
    (int)v32,
    1,
    255,
    255,
    *(unsigned __int8 *)(dword_53A45 + 80),
    v27,
    dst_[0],
    dst_[1],
    dst_[2],
    dst_[3],
    dst__1[0],
    dst__1[1],
    dst__1[2],
    dst__1[3],
    v32[0],
    v32[1],
    v32[2]);
  sub_15F84((unsigned __int8 *)v32, v28, v27, 0, n0x10, arg0_0, 16, 655360, 320, 205, 76, 74, 19, 1);
  n6_5 = 0;
  sub_25089(v29, v27, n0x10, 0);
  sub_31529();
  while ( 1 )
    ;
}
