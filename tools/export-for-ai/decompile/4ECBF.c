/*
 * func-name: sub_4ECBF
 * func-address: 0x4ecbf
 * callers: 0x15e9e, 0x15f0e, 0x165ac
 * callees: 0x4ecf0
 */

void __cdecl sub_4ECBF(int a1, __int16 count, __int16 a3, int a4, int a5, int a6)
{
  ::count = count;
  *(_WORD *)a1 = count;
  word_627B6 = a3;
  *(_WORD *)(a1 + 2) = a3;
  *(_DWORD *)(a1 + 4) = a5;
  sub_4ECF0(a6, (char *)(a1 + 8), (char *)(a5 + a4));
}
