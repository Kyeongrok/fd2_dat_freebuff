/*
 * func-name: sub_44F00
 * func-address: 0x44f00
 * callers: 0x3c4db
 * callees: 0x422c0, 0x42980
 */

int __cdecl sub_44F00(_DWORD *a1)
{
  int n8_1; // ebp
  int n0x7FFFFFFF; // edi
  int n8; // esi
  _DWORD *v4; // eax
  int n2; // ebx
  int n8_2; // esi
  _DWORD *v7; // eax
  int result; // eax
  int v9; // edi
  int v10; // esi
  int v11; // ebx
  _DWORD *v12; // eax
  int v13; // esi
  int v14; // [esp+0h] [ebp-18h]
  int v15; // [esp+4h] [ebp-14h]

  n8_1 = -1;
  n0x7FFFFFFF = 0x7FFFFFFF;
  ++a1[5];
  n8 = 8;
  v4 = a1 + 8;
  do
  {
    if ( n8 != 9 )
    {
      n2 = v4[8];
      if ( n2 != 1 && n2 != 2 && n0x7FFFFFFF > v4[88] )
      {
        n0x7FFFFFFF = v4[88];
        n8_1 = n8;
      }
    }
    --n8;
    --v4;
  }
  while ( n8 >= 1 );
  if ( n8_1 == -1 )
  {
    n8_2 = 8;
    v7 = a1 + 8;
    do
    {
      if ( n8_2 != 9 && v7[8] != 1 && n0x7FFFFFFF > v7[88] )
      {
        n0x7FFFFFFF = v7[88];
        n8_1 = n8_2;
      }
      --n8_2;
      --v7;
    }
    while ( n8_2 >= 1 );
  }
  if ( n8_1 == -1 )
  {
    result = 0;
    --a1[5];
  }
  else
  {
    sub_422C0((int)a1, n8_1 | 0xB0, 64, 0);
    v9 = a1[6];
    v15 = a1[7];
    if ( v15 )
    {
      v14 = v9 + 128;
      do
      {
        if ( *(_DWORD *)(v9 + 4) != 1 )
        {
          v10 = v9;
          do
          {
            v11 = *(_DWORD *)(v10 + 1300);
            if ( v11 != -1 && n8_1 == *(_DWORD *)(v9 + 4 * v11 + 144) )
            {
              sub_42980(v9, v11 | 0x80, *(_DWORD *)(v10 + 1428), 0, 0);
              *(_DWORD *)(v10 + 1300) = -1;
            }
            v10 += 4;
          }
          while ( v10 != v14 );
        }
        v9 += 1748;
        --v15;
        v14 += 1748;
      }
      while ( v15 );
    }
    v12 = &a1[n8_1];
    v12[24] = 0;
    v13 = v12[8];
    v12[8] = 1;
    v12[72] = v13;
    v12[40] = v12[56];
    result = n8_1 + 1;
    --a1[5];
  }
  return result;
}
