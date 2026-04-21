/*
 * func-name: sub_44E50
 * func-address: 0x44e50
 * callers: 0x3c02f
 * callees: none
 */

int __cdecl sub_44E50(int a1, int a2)
{
  int result; // eax
  int v3; // edx

  result = a1;
  if ( a1 )
  {
    v3 = *(_DWORD *)(a1 + 36);
    *(_DWORD *)(a1 + 36) = a2;
    return v3;
  }
  return result;
}
