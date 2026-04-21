/*
 * func-name: sub_23B5F
 * func-address: 0x23b5f
 * callers: 0x15311, 0x1cff0, 0x25bf4
 * callees: 0x10b4e, 0x112a5, 0x11506, 0x135dd, 0x1366a, 0x15f84, 0x233c6, 0x33499, 0x3702f
 */

int __fastcall sub_23B5F(__int32 a1, int a2, int n4, int a4)
{
  int v4; // eax
  __int32 v5; // eax
  __int32 v6; // eax
  __int32 v7; // eax
  int v8; // eax
  int v9; // eax
  __int32 v10; // eax
  __int32 v11; // eax
  int v12; // eax
  __int32 v13; // eax
  int v14; // eax
  __int32 v15; // eax
  int v16; // eax
  __int32 v17; // eax
  int result; // eax
  _BYTE dst__1[16]; // [esp+0h] [ebp-28h] BYREF
  unsigned __int8 dst_[24]; // [esp+10h] [ebp-18h] BYREF

  v4 = sub_3702F(a1, a2, n4, a4, 88);
  qmemcpy(dst_, &src__27, 0x10u);
  qmemcpy(dst__1, &src__28, sizeof(dst__1));
  sub_11506(v4, a2, n4, 0);
  v5 = sub_33499(18);
  if ( v5 )
  {
    sub_15F84(dst_, v5, a2, 0, n4, arg0_0, 5, 655360, 320, 205, 76, 74, 19, 1);
    n6_5 = 0;
    sub_135DD(v6, a2, n4, 0, 17, 14);
    v8 = sub_10B4E(v7, a2, n4, 0, 3);
    v9 = sub_1366A(v8, a2, n4, 0, 52);
  }
  else
  {
    sub_233C6((__int32)dst_, a2, n4, 0, (int)dst_, (int)dst__1, 0, 0, 15, 52, 23, 23, 2, 17, 17);
    sub_15F84(dst_, v10, a2, 0, n4, arg0_0, 7, 655360, 320, 205, 76, 74, 19, 1);
    n6_5 = 0;
    v12 = sub_1366A(v11, a2, n4, 0, 50);
    sub_135DD(v12, a2, n4, 0, 17, 14);
    v14 = sub_10B4E(v13, a2, n4, 0, 3);
    v9 = sub_1366A(v14, a2, n4, 0, 51);
  }
  sub_15F84(dst_, v9, a2, 0, n4, arg0_0, 6, 655360, 320, 205, 76, 74, 19, 1);
  v16 = sub_1366A(v15, a2, n4, 0, 53);
  sub_15F84(dst_, v16, a2, 0, n4, arg0_0, 8, 655360, 320, 205, 76, 74, 19, 1);
  result = sub_112A5(v17, a2, n4, 0, 0x16u);
  ++n17;
  return result;
}
