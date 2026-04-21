/*
 * func-name: sub_44970
 * func-address: 0x44970
 * callers: 0x3b0a2
 * callees: none
 */

int __cdecl sub_44970(_DWORD *a1, int a2, int a3)
{
  int v3; // esi
  signed int v4; // esi
  int result; // eax

  if ( a1 )
  {
    ++*(_DWORD *)(*a1 + 20);
    a1[18] = a2;
    v3 = a1[18];
    if ( a1[17] != v3 )
    {
      if ( a3 )
      {
        v4 = abs32(a1[17] - v3);
        a1[19] = 0;
        a1[20] = 1000 * a3 / v4;
      }
      else
      {
        a1[17] = v3;
      }
    }
    result = *a1;
    --*(_DWORD *)(*a1 + 20);
  }
  return result;
}
