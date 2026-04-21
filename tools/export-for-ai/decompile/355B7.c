/*
 * func-name: sub_355B7
 * func-address: 0x355b7
 * callers: 0x117e7, 0x16f55, 0x190ac, 0x1a813, 0x1aa1d, 0x1d80b, 0x1d8ba
 * callees: 0x10b4e, 0x112a5, 0x135dd, 0x17aa9, 0x3702f
 */

void __fastcall sub_355B7(__int32 a1, int a2, int a3, int a4)
{
  int v4; // eax
  int v5; // eax
  __int32 v6; // eax
  int v7; // eax

  v4 = sub_3702F(a1, a2, a3, a4, 40);
  v5 = sub_10B4E(v4, a2, a3, a4, 2);
  sub_135DD(v5, a2, a3, a4, 16, 42);
  v7 = sub_17AA9(v6, a2, a3, a4, 8);
  sub_112A5(v7, a2, a3, a4, 0x14u);
  JUMPOUT(0x34B47);
}
