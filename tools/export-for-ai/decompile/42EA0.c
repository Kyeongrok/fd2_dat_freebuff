/*
 * func-name: sub_42EA0
 * func-address: 0x42ea0
 * callers: 0x42980
 * callees: 0x382e9, 0x42980
 */

void __cdecl sub_42EA0(int a1, int a2)
{
  int v2; // esi
  int v3; // esi
  _BYTE v4[4]; // [esp+0h] [ebp-18h] BYREF
  __int16 v5; // [esp+4h] [ebp-14h]

  v2 = a1;
  do
  {
    if ( a2 == *(_DWORD *)(v2 + 1300) )
    {
      sub_42980(a1, *(_DWORD *)(v2 + 1300) | 0x80, *(_DWORD *)(v2 + 1428), 0, 0);
      *(_DWORD *)(v2 + 1300) = -1;
    }
    v2 += 4;
  }
  while ( v2 != a1 + 128 );
  v3 = *(_DWORD *)a1;
  if ( *(int *)(*(_DWORD *)a1 + 424) > 0 )
  {
    v5 = *(_WORD *)(v3 + 424);
    sub_382E9((int)v4, *(_DWORD *)v3, 1282, (int)v4, 0);
    *(_DWORD *)(v3 + 424) = 0;
    *(_DWORD *)(v3 + 428) = 0;
  }
}
