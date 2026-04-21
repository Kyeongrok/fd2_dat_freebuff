/*
 * func-name: sub_34940
 * func-address: 0x34940
 * callers: 0x117e7, 0x16f55, 0x190ac, 0x1a813, 0x1aa1d, 0x1d80b, 0x1d8ba
 * callees: 0x344f2, 0x3702f
 */

void __fastcall sub_34940(__int32 a1, int a2, int a3, int a4)
{
  int v4; // eax
  int v5; // eax

  v4 = sub_3702F(a1, a2, a3, a4, 40);
  v5 = sub_344F2(v4, a2, a3, a4, 37, 40, 0);
  sub_344F2(v5, a2, a3, a4, 13, 24, 0);
  JUMPOUT(0x34885);
}
