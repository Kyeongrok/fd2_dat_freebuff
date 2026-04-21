/*
 * func-name: sub_44D80
 * func-address: 0x44d80
 * callers: 0x3bddf
 * callees: none
 */

void __cdecl sub_44D80(_DWORD *a1, int a2)
{
  int v2; // edx
  int v3; // ebp
  int v4; // ecx
  int v5; // eax
  unsigned __int16 *v6; // edx
  int v7; // edx
  int v8; // eax
  int v9; // ebx
  _DWORD *v10; // eax

  if ( a1 )
  {
    v2 = a1[3];
    if ( v2 )
    {
      v3 = v2 + 10;
      v4 = *(__int16 *)(v2 + 8);
      v5 = 0;
      if ( v4 > 0 )
      {
        v6 = (unsigned __int16 *)(v2 + 10);
        do
        {
          if ( *v6 == a2 )
            break;
          ++v5;
          v6 += 3;
        }
        while ( v5 < v4 );
      }
      if ( v5 != v4 )
      {
        v7 = *(_DWORD *)(6 * v5 + v3 + 2);
        v8 = a1[4] + 8;
        a1[11] = 0;
        v9 = dword_54344;
        a1[5] = v7 + v8;
        if ( !v9 )
        {
          v10 = a1;
          do
          {
            ++v10;
            v10[31] = -1;
          }
          while ( v10 != a1 + 4 );
        }
      }
    }
  }
}
