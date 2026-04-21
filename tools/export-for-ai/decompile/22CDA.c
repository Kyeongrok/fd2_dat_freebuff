/*
 * func-name: sub_22CDA
 * func-address: 0x22cda
 * callers: 0x22be1
 * callees: 0x1ca89, 0x22d1b, 0x3702f
 */

int __fastcall sub_22CDA(__int32 a1, int a2, int a3, int a4, int a5, int n22, int a7, int a8, int n39)
{
  int v9; // eax

  v9 = sub_3702F(a1, a2, a3, a4, 24);
  dword_53EC4 = 0;
  sub_1CA89(v9, a2, a3, a4, a5, n22);
  return sub_22D1B(a5, n22, a7, a8, n39);
}
