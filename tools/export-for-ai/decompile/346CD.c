/*
 * func-name: sub_346CD
 * func-address: 0x346cd
 * callers: 0x117e7, 0x16f55, 0x190ac, 0x1a813, 0x1aa1d, 0x1d80b, 0x1d8ba
 * callees: 0x10b4e, 0x11cac, 0x134e4, 0x135dd, 0x1366a, 0x3702f, 0x4e381
 */

void __fastcall sub_346CD(__int32 a1, int a2, int a3, int a4)
{
  int v4; // eax
  __int32 v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax

  v4 = sub_3702F(a1, a2, a3, a4, 44);
  sub_135DD(v4, a2, a3, a4, 11, 11);
  byte_53AFA = 1;
  v6 = sub_10B4E(v5, a2, a3, a4, 6);
  byte_53AFA = 0;
  v7 = sub_11CAC(v6, a2, a3, a4, 1);
  v8 = sub_1366A(v7, a2, a3, a4, 6);
  sub_134E4(v8, a2, a3, a4);
  sub_4E381();
  JUMPOUT(0x34663);
}
