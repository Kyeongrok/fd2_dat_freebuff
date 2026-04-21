/*
 * func-name: sub_447D0
 * func-address: 0x447d0
 * callers: 0x3af5b
 * callees: 0x3c5c0, 0x422c0, 0x42dd0
 */

void __cdecl sub_447D0(_DWORD *a1)
{
  _DWORD *v1; // esi
  int v2; // eax
  int v3; // ebp
  int v4; // edi

  if ( a1 && a1[1] == 4 )
  {
    v1 = a1;
    a1[1] = 8;
    sub_42DD0(a1);
    v3 = *a1;
    do
    {
      v4 = v1[36];
      if ( (int)v1[260] >= 64 )
        v2 = sub_422C0(v3, v4 | 0xB0, 64, 0);
      if ( (int)v1[116] >= 64 )
        *(_DWORD *)(v3 + 4 * v4 + 32) = 0;
      if ( (int)v1[132] >= 64 )
        v2 = sub_422C0(v3, v4 | 0xB0, 112, 0);
      if ( (int)v1[100] >= 64 )
        sub_3C5C0(v2, v3, v4 + 1);
      ++v1;
    }
    while ( v1 != a1 + 16 );
  }
}
