/*
 * func-name: sub_414D0
 * func-address: 0x414d0
 * callers: 0x394b4
 * callees: none
 */

int __cdecl sub_414D0(int a1)
{
  int result; // eax

  result = a1;
  if ( a1 )
    *(_DWORD *)(a1 + 4) = 1;
  return result;
}
