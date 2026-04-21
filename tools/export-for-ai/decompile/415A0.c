/*
 * func-name: sub_415A0
 * func-address: 0x415a0
 * callers: 0x39694
 * callees: none
 */

_DWORD *__cdecl sub_415A0(_DWORD *a1, int a2, int a3)
{
  _DWORD *result; // eax

  result = a1;
  if ( a1 )
  {
    a1[3] = 0;
    a1[5] = 0;
    a1[2] = a2;
    a1[4] = a3;
  }
  return result;
}
