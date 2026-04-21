/*
 * func-name: sub_35298
 * func-address: 0x35298
 * callers: 0x117e7, 0x16f55, 0x190ac, 0x1a813, 0x1aa1d, 0x1d80b, 0x1d8ba
 * callees: 0x10b4e, 0x3702f
 */

void __fastcall sub_35298(__int32 a1, int a2, int a3, int a4)
{
  int v4; // eax

  v4 = sub_3702F(a1, a2, a3, a4, 40);
  sub_10B4E(v4, a2, a3, a4, 1);
  JUMPOUT(0x34F65);
}
