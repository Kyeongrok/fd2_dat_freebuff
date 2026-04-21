/*
 * func-name: sub_41770
 * func-address: 0x41770
 * callers: 0x39805
 * callees: none
 */

int __cdecl sub_41770(int a1)
{
  int result; // eax

  result = a1;
  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 4) == 4 )
      *(_DWORD *)(a1 + 4) = 8;
  }
  return result;
}
