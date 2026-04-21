/*
 * func-name: sub_44960
 * func-address: 0x44960
 * callers: 0x3b1a6
 * callees: none
 */

int __cdecl sub_44960(int a1, int arg4)
{
  int result; // eax

  result = a1;
  if ( a1 )
    *(_DWORD *)(a1 + 40) = arg4;
  return result;
}
