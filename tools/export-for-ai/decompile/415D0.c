/*
 * func-name: sub_415D0
 * func-address: 0x415d0
 * callers: 0x39716
 * callees: 0x40240
 */

int *__cdecl sub_415D0(int a1, int a2, int a3)
{
  int *result; // eax

  result = (int *)a1;
  if ( a1 && (a2 != *(_DWORD *)(a1 + 52) || a3 != *(_DWORD *)(a1 + 56)) )
  {
    *(_DWORD *)(a1 + 52) = a2;
    *(_DWORD *)(a1 + 56) = a3;
    return sub_40240(a1);
  }
  return result;
}
