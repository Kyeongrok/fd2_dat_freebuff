/*
 * func-name: sub_449E0
 * func-address: 0x449e0
 * callers: 0x3b124
 * callees: 0x43230
 */

int __cdecl sub_449E0(_DWORD *a1, int n127, int n4000)
{
  int v3; // ecx
  int result; // eax
  signed int v5; // ecx

  if ( a1 )
  {
    ++*(_DWORD *)(*a1 + 20);
    a1[14] = n127;
    v3 = a1[14];
    if ( a1[13] == v3 )
    {
      result = *a1;
      --*(_DWORD *)(*a1 + 20);
    }
    else
    {
      if ( n4000 )
      {
        v5 = abs32(a1[13] - v3);
        a1[15] = 0;
        a1[16] = 1000 * n4000 / v5;
      }
      else
      {
        a1[13] = v3;
      }
      sub_43230((int)a1);
      result = *a1;
      --*(_DWORD *)(*a1 + 20);
    }
  }
  return result;
}
