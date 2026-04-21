/*
 * func-name: sub_41820
 * func-address: 0x41820
 * callers: 0x3a557
 * callees: none
 */

int __cdecl sub_41820(int a1, int a2)
{
  int result; // eax
  int v3; // edx

  result = a1;
  if ( a1 )
  {
    v3 = *(_DWORD *)(a1 + 2124);
    *(_DWORD *)(a1 + 2124) = a2;
    return v3;
  }
  return result;
}
