/*
 * func-name: sub_22960
 * func-address: 0x22960
 * callers: 0x15311, 0x1cff0
 * callees: 0x1ca89, 0x22997, 0x3702f
 */

int __fastcall sub_22960(__int32 a1, int a2, int a3, int a4, int n6, int n30, unsigned __int8 *a7)
{
  int v7; // eax

  v7 = sub_3702F(a1, a2, a3, a4, 16);
  dword_53EC4 = 0;
  sub_1CA89(v7, a2, a3, a4, n6, 19);
  return sub_22997(n6, n30, a7);
}
