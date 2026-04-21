/*
 * func-name: sub_44E10
 * func-address: 0x44e10
 * callers: 0x3be55
 * callees: none
 */

int __cdecl sub_44E10(int a1, int a2)
{
  int result; // eax
  int v3; // edx

  result = a1;
  if ( a1 )
  {
    v3 = *(_DWORD *)(a1 + 28);
    *(_DWORD *)(a1 + 28) = a2;
    return v3;
  }
  return result;
}
