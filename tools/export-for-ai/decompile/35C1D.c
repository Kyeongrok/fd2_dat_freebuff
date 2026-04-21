/*
 * func-name: sub_35C1D
 * func-address: 0x35c1d
 * callers: 0x117e7, 0x16f55, 0x190ac, 0x1a813, 0x1aa1d, 0x1d80b, 0x1d8ba
 * callees: 0x35b78, 0x3702f
 */

void __fastcall sub_35C1D(__int32 a1, int a2, int a3, int a4)
{
  int v4; // eax

  v4 = sub_3702F(a1, a2, a3, a4, 16);
  sub_35B78(v4, a2, a3, a4, 3, 27, 1u);
  JUMPOUT(0x3566E);
}
