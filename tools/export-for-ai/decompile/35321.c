/*
 * func-name: sub_35321
 * func-address: 0x35321
 * callers: 0x117e7, 0x16f55, 0x190ac, 0x1a813, 0x1aa1d, 0x1d80b, 0x1d8ba
 * callees: 0x10b4e, 0x135dd, 0x3702f
 */

void __fastcall sub_35321(__int32 a1, int a2, int a3, int a4)
{
  int v4; // eax
  int v5; // eax

  v4 = sub_3702F(a1, a2, a3, a4, 40);
  v5 = sub_10B4E(v4, a2, a3, a4, 2);
  sub_135DD(v5, a2, a3, a4, 17, 37);
  JUMPOUT(0x34F4C);
}
