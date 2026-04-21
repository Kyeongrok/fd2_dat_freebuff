/*
 * func-name: sub_44E70
 * func-address: 0x44e70
 * callers: 0x3c11c
 * callees: none
 */

int __cdecl sub_44E70(int a1, int a2)
{
  int result; // eax

  result = *(_DWORD *)(a1 + 416);
  *(_DWORD *)(a1 + 416) = a2;
  return result;
}
