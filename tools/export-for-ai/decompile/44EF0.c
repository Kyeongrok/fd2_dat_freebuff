/*
 * func-name: sub_44EF0
 * func-address: 0x44ef0
 * callers: none
 * callees: none
 */

int __cdecl sub_44EF0(int a1, int a2)
{
  int result; // eax

  result = a1;
  if ( a1 )
    *(_DWORD *)(a1 + 24) = a2;
  return result;
}
