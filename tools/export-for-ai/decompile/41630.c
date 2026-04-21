/*
 * func-name: sub_41630
 * func-address: 0x41630
 * callers: 0x399c2
 * callees: 0x40240
 */

int *__cdecl sub_41630(int a1, int a2)
{
  int *result; // eax

  result = (int *)a1;
  if ( a1 )
  {
    if ( a2 != *(_DWORD *)(a1 + 64) )
    {
      *(_DWORD *)(a1 + 64) = a2;
      return sub_40240(a1);
    }
  }
  return result;
}
