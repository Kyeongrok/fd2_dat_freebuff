/*
 * func-name: sub_42DD0
 * func-address: 0x42dd0
 * callers: 0x447d0
 * callees: 0x382e9, 0x383f1, 0x3845e, 0x42980
 */

void __cdecl sub_42DD0(_DWORD *a1)
{
  _DWORD *v1; // esi
  int v2; // edi
  int v3; // eax
  int v4; // esi
  _BYTE v5[4]; // [esp+0h] [ebp-1Ch] BYREF
  __int16 v6; // [esp+4h] [ebp-18h]
  _DWORD *v7; // [esp+Ch] [ebp-10h]

  v1 = a1;
  v2 = 0;
  v7 = a1 + 32;
  do
  {
    v3 = v1[325];
    if ( v3 != -1 )
    {
      ++v2;
      sub_42980((int)a1, v3 | 0x80, v1[357], 0, 0);
      v1[325] = -1;
    }
    ++v1;
  }
  while ( v1 != v7 );
  v4 = *a1;
  a1[324] = 0;
  if ( *(int *)(v4 + 424) > 0 )
  {
    v6 = *(_WORD *)(v4 + 424);
    sub_382E9((int)v5, *(_DWORD *)v4, 1282, (int)v5, 0);
    *(_DWORD *)(v4 + 424) = 0;
    *(_DWORD *)(v4 + 428) = 0;
  }
  if ( v2 )
  {
    if ( !sub_3845E(v3) )
      sub_383F1(0, 3);
  }
}
