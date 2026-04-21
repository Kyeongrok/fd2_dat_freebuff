/*
 * func-name: sub_451E0
 * func-address: 0x451e0
 * callers: 0x3c636
 * callees: none
 */

_DWORD *__cdecl sub_451E0(_DWORD *a1, int a2, int a3)
{
  _DWORD *result; // eax
  int v4; // edx

  result = a1;
  if ( a1 )
  {
    a1[a2 + 35] = a3 - 1;
    v4 = *a1 + 4 * a3;
    if ( *(_DWORD *)(v4 + 28) == 1 && a1 != *(_DWORD **)(v4 + 92) )
      *(_DWORD *)(v4 + 92) = a1;
  }
  return result;
}
