/*
 * func-name: sub_41610
 * func-address: 0x41610
 * callers: 0x3994c
 * callees: none
 */

int __cdecl sub_41610(int a1, int a2)
{
  int result; // eax

  result = a1;
  if ( a1 )
    *(_DWORD *)(a1 + 60) = a2;
  return result;
}
