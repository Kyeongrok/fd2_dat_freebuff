/*
 * func-name: sub_41860
 * func-address: 0x41860
 * callers: 0x3a81e
 * callees: none
 */

int __cdecl sub_41860(int a1, int a2, int a3)
{
  int result; // eax

  if ( a1 )
  {
    result = a1 + 4 * a2;
    *(_DWORD *)(result + 2132) = a3;
  }
  return result;
}
