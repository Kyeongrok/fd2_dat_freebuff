/*
 * func-name: sub_41840
 * func-address: 0x41840
 * callers: 0x3a644
 * callees: none
 */

int __cdecl sub_41840(int a1, int a2)
{
  int result; // eax
  int v3; // edx

  result = a1;
  if ( a1 )
  {
    v3 = *(_DWORD *)(a1 + 2128);
    *(_DWORD *)(a1 + 2128) = a2;
    return v3;
  }
  return result;
}
