/*
 * func-name: sub_420C6
 * func-address: 0x420c6
 * callers: 0x3a731
 * callees: none
 */

int __cdecl sub_420C6(int a1, int a2)
{
  int result; // eax
  int v3; // edx

  result = a1;
  if ( a1 )
  {
    v3 = *(_DWORD *)(a1 + 2164);
    *(_DWORD *)(a1 + 2164) = a2;
    return v3;
  }
  return result;
}
