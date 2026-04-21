/*
 * func-name: sub_4584D
 * func-address: 0x4584d
 * callers: 0x459f5, 0x45a20
 * callees: none
 */

_DWORD *__cdecl sub_4584D(_DWORD *a1, int a2, int a3)
{
  _DWORD *result; // eax
  int n512; // edx

  result = a1;
  for ( n512 = 0; n512 < 512 && *result != -1; ++n512 )
  {
    if ( a2 == *result && a3 == result[1] )
      return result;
    result += 8;
  }
  return 0;
}
