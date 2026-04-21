/*
 * func-name: sub_416F0
 * func-address: 0x416f0
 * callers: 0x39798
 * callees: 0x382e9
 */

void __cdecl sub_416F0(_DWORD *a1)
{
  _DWORD *v1; // eax
  int v2; // esi
  _BYTE v3[4]; // [esp+0h] [ebp-18h] BYREF
  __int16 v4; // [esp+4h] [ebp-14h]
  __int16 v5; // [esp+6h] [ebp-12h]

  if ( a1 )
  {
    if ( a1[1] != 1 )
    {
      v1 = &a1[a1[10]];
      if ( v1[4] )
      {
        if ( v1[2] )
        {
          v1[6] = 0;
          a1[1] = 4;
          v2 = *a1;
          if ( !*(_DWORD *)(*a1 + 84) )
          {
            v5 = *(_WORD *)(v2 + 24);
            v4 = *(_WORD *)(v2 + 20);
            sub_382E9((int)v3, *(_DWORD *)v2, 1025, (int)v3, 0);
            *(_DWORD *)(v2 + 84) = 1;
          }
        }
      }
    }
  }
}
