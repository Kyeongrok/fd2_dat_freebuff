/*
 * func-name: sub_41790
 * func-address: 0x41790
 * callers: none
 * callees: none
 */

int __cdecl sub_41790(int a1)
{
  int result; // eax

  result = a1;
  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 4) == 8 )
      *(_DWORD *)(a1 + 4) = 4;
  }
  return result;
}
