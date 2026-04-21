/*
 * func-name: sub_34984
 * func-address: 0x34984
 * callers: 0x117e7, 0x16f55, 0x190ac, 0x1a813, 0x1aa1d, 0x1d80b, 0x1d8ba
 * callees: 0x10b4e, 0x134e4, 0x135dd, 0x1366a, 0x344f2, 0x3702f
 */

void __fastcall sub_34984(__int32 a1, int a2, int a3, int a4)
{
  int v4; // eax
  int v5; // eax
  __int32 v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax

  v4 = sub_3702F(a1, a2, a3, a4, 40);
  n6_5 = 0;
  byte_53AFA = 1;
  v5 = sub_10B4E(v4, a2, a3, a4, 2);
  byte_53AFA = 0;
  sub_135DD(v5, a2, a3, a4, 14, 0);
  v7 = sub_1366A(v6, a2, a3, a4, 23);
  v8 = sub_134E4(v7, a2, a3, a4);
  v9 = sub_344F2(v8, a2, a3, a4, 7, 12, 0);
  sub_344F2(v9, a2, a3, a4, 33, 35, 0);
  JUMPOUT(0x3486C);
}
