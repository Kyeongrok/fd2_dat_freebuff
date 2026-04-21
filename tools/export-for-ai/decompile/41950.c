/*
 * func-name: sub_41950
 * func-address: 0x41950
 * callers: 0x3a280
 * callees: 0x382e9
 */

void __cdecl sub_41950(int *a1, int a2, int a3, int a4)
{
  int v4; // esi
  _BYTE v5[4]; // [esp+0h] [ebp-10h] BYREF
  __int16 v6; // [esp+4h] [ebp-Ch]
  __int16 v7; // [esp+6h] [ebp-Ah]

  if ( a1 )
  {
    a1[a2 + 6] = 0;
    a1[a2 + 8] = a4 == 0;
    a1[a2 + 4] = a4;
    a1[a2 + 2] = a3;
    if ( a4 )
    {
      if ( a1[1] != 4 )
      {
        v4 = *a1;
        a1[1] = 4;
        if ( !*(_DWORD *)(v4 + 84) )
        {
          v7 = *(_WORD *)(v4 + 24);
          v6 = *(_WORD *)(v4 + 20);
          sub_382E9((int)v5, *(_DWORD *)v4, 1025, (int)v5, 0);
          *(_DWORD *)(v4 + 84) = 1;
        }
      }
    }
  }
}
