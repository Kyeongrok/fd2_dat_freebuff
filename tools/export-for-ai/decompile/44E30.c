/*
 * func-name: sub_44E30
 * func-address: 0x44e30
 * callers: 0x3bf42
 * callees: none
 */

int __cdecl sub_44E30(int a1, int a2)
{
  int result; // eax
  int v3; // edx

  result = a1;
  if ( a1 )
  {
    v3 = *(_DWORD *)(a1 + 32);
    *(_DWORD *)(a1 + 32) = a2;
    return v3;
  }
  return result;
}
