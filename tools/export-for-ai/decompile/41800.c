/*
 * func-name: sub_41800
 * func-address: 0x41800
 * callers: 0x3a46a
 * callees: none
 */

int __cdecl sub_41800(int a1, int a2)
{
  int result; // eax
  int v3; // edx

  result = a1;
  if ( a1 )
  {
    v3 = *(_DWORD *)(a1 + 2120);
    *(_DWORD *)(a1 + 2120) = a2;
    return v3;
  }
  return result;
}
