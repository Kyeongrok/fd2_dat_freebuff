/*
 * func-name: sub_44D10
 * func-address: 0x44d10
 * callers: 0x3bcd7
 * callees: none
 */

void __cdecl sub_44D10(_DWORD *a1, _DWORD *a2, int *a3)
{
  int v3; // edi
  int v4; // ecx
  int v5; // ebx
  int v6; // esi
  int v7; // eax
  int v8; // ebp

  if ( a1 )
  {
    v3 = dword_54340;
    ++*(_DWORD *)(*a1 + 20);
    v4 = 0;
    v5 = a1[22];
    v6 = a1[23];
    v7 = a1[26];
    if ( v3 > 0 )
    {
      do
      {
        v8 = a1[27];
        v7 += a1[25];
        if ( v7 >= v8 )
        {
          ++v5;
          v7 -= v8;
          if ( v5 >= a1[24] )
          {
            ++v6;
            v5 = 0;
          }
        }
        ++v4;
      }
      while ( v4 < dword_54340 );
    }
    if ( v6 < 0 )
      v6 = 0;
    if ( a3 )
      *a3 = v6;
    if ( a2 )
      *a2 = v5;
    --*(_DWORD *)(*a1 + 20);
  }
}
