/*
 * func-name: sub_41660
 * func-address: 0x41660
 * callers: 0x39a38
 * callees: 0x40240
 */

int *__cdecl sub_41660(int a1, int a2)
{
  int *result; // eax

  result = (int *)a1;
  if ( a1 )
  {
    if ( a2 != *(_DWORD *)(a1 + 68) )
    {
      *(_DWORD *)(a1 + 68) = a2;
      return sub_40240(a1);
    }
  }
  return result;
}
