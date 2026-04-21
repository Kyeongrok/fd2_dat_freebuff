/*
 * func-name: sub_34673
 * func-address: 0x34673
 * callers: 0x117e7, 0x16f55, 0x190ac, 0x1a813, 0x1aa1d, 0x1d80b, 0x1d8ba
 * callees: 0x11cac, 0x134e4, 0x135dd, 0x1366a, 0x32999, 0x3702f, 0x4e381
 */

void __fastcall sub_34673(__int32 a1, int a2, int n34, int n4)
{
  int v4; // eax
  __int32 v5; // eax
  __int32 v6; // eax
  int v7; // eax
  int v8; // eax

  v4 = sub_3702F(a1, a2, n34, n4, 44);
  sub_135DD(v4, a2, n34, n4, 0, 16);
  sub_32999(v5, a2, n34, n4, 5);
  LOWORD(v6) = sub_4E381();
  v7 = sub_11CAC(v6, a2, n34, n4, 1);
  v8 = sub_1366A(v7, a2, n34, n4, 4);
  sub_134E4(v8, a2, n34, n4);
  JUMPOUT(0x34663);
}
