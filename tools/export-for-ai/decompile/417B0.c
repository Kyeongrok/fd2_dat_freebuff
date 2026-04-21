/*
 * func-name: sub_417B0
 * func-address: 0x417b0
 * callers: 0x398df
 * callees: none
 */

int __cdecl sub_417B0(int a1)
{
  int n2; // edx
  int v2; // ecx
  int result; // eax

  if ( a1 )
  {
    n2 = *(_DWORD *)(a1 + 4);
    if ( n2 != 1 && n2 != 2 )
    {
      v2 = *(_DWORD *)(a1 + 2124);
      *(_DWORD *)(a1 + 4) = 2;
      if ( v2 )
        result = (*(int (__cdecl **)(int))(a1 + 2124))(a1);
      if ( *(_DWORD *)(a1 + 2128) )
        return (*(int (__cdecl **)(int))(a1 + 2128))(a1);
    }
  }
  return result;
}
