/*
 * func-name: sub_238DC
 * func-address: 0x238dc
 * callers: 0x15311, 0x1cff0, 0x25bf4
 * callees: 0x10b4e, 0x11506, 0x1366a, 0x15f84, 0x233c6, 0x3702f
 */

void __fastcall sub_238DC(__int32 a1, int a2, int n4, int a4)
{
  int v4; // eax
  __int32 v5; // eax
  __int32 v6; // eax
  int v7; // eax
  __int32 v8; // eax
  _BYTE dst__2[16]; // [esp+0h] [ebp-38h] BYREF
  unsigned __int8 dst__1[16]; // [esp+10h] [ebp-28h] BYREF
  _BYTE dst_[24]; // [esp+20h] [ebp-18h] BYREF

  v4 = sub_3702F(a1, a2, n4, a4, 104);
  qmemcpy(dst_, &src__22, 0x10u);
  qmemcpy(dst__1, &src__23, sizeof(dst__1));
  qmemcpy(dst__2, &src__24, sizeof(dst__2));
  sub_10B4E(v4, a2, n4, 0, 1);
  sub_233C6((__int32)dst_, a2, n4, 0, (int)dst_, (int)dst__1, (unsigned int)dst__2, 0, 15, 0, 0, 0, 0, 12, 10);
  sub_15F84(dst__1, v5, a2, 0, n4, arg0_0, 2, 655360, 320, 205, 76, 74, 19, 1);
  n6_5 = 0;
  v7 = sub_1366A(v6, a2, n4, 0, 47);
  sub_15F84(dst__1, v7, a2, 0, n4, arg0_0, 3, 655360, 320, 205, 76, 74, 19, 1);
  sub_11506(v8, a2, n4, 0);
  ++n17;
}
