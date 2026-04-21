/*
 * func-name: sub_44E90
 * func-address: 0x44e90
 * callers: 0x3c209
 * callees: none
 */

int __cdecl sub_44E90(int a1, int a2)
{
  int result; // eax

  result = *(_DWORD *)(a1 + 420);
  *(_DWORD *)(a1 + 420) = a2;
  return result;
}
