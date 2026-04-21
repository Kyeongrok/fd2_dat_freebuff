/*
 * func-name: sub_450B0
 * func-address: 0x450b0
 * callers: 0x3c5c0
 * callees: 0x422c0, 0x42980, 0x42f50
 */

_DWORD *__cdecl sub_450B0(_DWORD *a1, int a2)
{
  _DWORD *result; // eax
  int v3; // edi
  int v4; // esi
  int v5; // ecx
  int v6; // esi
  int v7; // [esp+0h] [ebp-18h]
  int v8; // [esp+4h] [ebp-14h]
  int n16; // [esp+8h] [ebp-10h]

  n16 = a2 - 1;
  result = &a1[a2 - 1];
  if ( result[8] == 1 )
  {
    ++a1[5];
    result[8] = result[72];
    result[56] = result[40];
    sub_422C0((int)a1, n16 | 0xB0, 64, 0);
    v3 = a1[6];
    v8 = a1[7];
    if ( v8 )
    {
      v7 = v3 + 128;
      do
      {
        if ( *(_DWORD *)(v3 + 4) != 1 )
        {
          v4 = v3;
          do
          {
            v5 = *(_DWORD *)(v4 + 1300);
            if ( v5 != -1 && n16 == *(_DWORD *)(v3 + 4 * v5 + 144) )
            {
              sub_42980(v3, v5 | 0x80, *(_DWORD *)(v4 + 1428), 0, 0);
              *(_DWORD *)(v4 + 1300) = -1;
            }
            v4 += 4;
          }
          while ( v4 != v7 );
        }
        v3 += 1748;
        --v8;
        v7 += 1748;
      }
      while ( v8 );
    }
    v6 = a1[n16 + 40];
    if ( v6 )
    {
      if ( *(_DWORD *)(v6 + 4) != 1 )
        sub_42F50(v6, n16);
    }
    result = a1;
    --a1[5];
  }
  return result;
}
