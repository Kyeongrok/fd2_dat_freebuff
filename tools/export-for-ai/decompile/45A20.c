/*
 * func-name: sub_45A20
 * func-address: 0x45a20
 * callers: 0x45e21
 * callees: 0x39521, 0x39694, 0x39716, 0x39798, 0x398df, 0x39b24, 0x45698, 0x4584d, 0x45880, 0x458f0
 */

int __cdecl sub_45A20(int a1, int a2, char a3, unsigned int n6, int a5)
{
  int v5; // edi
  unsigned int n176; // esi
  int v7; // ebp
  int n4_8; // esi
  int v9; // eax
  int n4_2; // eax
  int n4_7; // esi
  int v12; // eax
  int n4_1; // eax
  int i; // esi
  int v15; // ebp
  int n9_1; // eax
  int n4_3; // eax
  int n4_6; // esi
  int v19; // eax
  int n4; // eax
  int n4_5; // esi
  int n2; // eax
  unsigned int v23; // edx
  int n4_9; // eax
  int v25; // ebp
  int v26; // eax
  int v27; // eax
  int j; // esi
  int *v30; // ebp
  int n6_1; // eax
  int n4_4; // eax
  int v33; // [esp+0h] [ebp-14h]
  int n9; // [esp+4h] [ebp-10h]

  v5 = *(_DWORD *)(a1 + 432);
  n176 = a3 & 0xF0;
  n9 = a3 & 0xF;
  if ( n176 == 176 || n176 == 192 || n176 == 224 )
    sub_45698(v5 + 20, a3, n6, a5);
  if ( n176 == 144 && !a5 )
    n176 = 128;
  v7 = v5 + 4 * n9;
  if ( n176 >= 0xB0 )
  {
    if ( n176 > 0xB0 )
    {
      if ( n176 >= 0xC0 )
      {
        if ( n176 <= 0xC0 )
        {
          *(_DWORD *)(v7 + 1108) = sub_4584D(*(_DWORD **)(v5 + 8), *(_DWORD *)(v7 + 404), n6);
        }
        else if ( n176 == 224 )
        {
          for ( n4_6 = 0; n4_6 < *(_DWORD *)(v5 + 1236); ++n4_6 )
          {
            v19 = v5 + 4 * n4_6;
            if ( *(_DWORD *)(v19 + 1240) == n9 )
            {
              sub_39B24(v19, *(_DWORD *)(v19 + 1172));
              if ( n4 == 4 )
                sub_458F0(v5, n4_6);
            }
          }
        }
      }
      return 0;
    }
    if ( n6 < 7 )
    {
      if ( n6 == 6 )
      {
        for ( n4_7 = 0; n4_7 < *(_DWORD *)(v5 + 1236); ++n4_7 )
        {
          v12 = v5 + 4 * n4_7;
          if ( *(_DWORD *)(v12 + 1240) == n9 )
          {
            sub_39B24(v12, *(_DWORD *)(v12 + 1172));
            if ( n4_1 == 4 )
              sub_458F0(v5, n4_7);
          }
        }
      }
      return 0;
    }
    if ( n6 <= 7 )
    {
LABEL_26:
      for ( n4_8 = 0; n4_8 < *(_DWORD *)(v5 + 1236); ++n4_8 )
      {
        v9 = v5 + 4 * n4_8;
        if ( *(_DWORD *)(v9 + 1240) == n9 )
        {
          sub_39B24(v9, *(_DWORD *)(v9 + 1172));
          if ( n4_2 == 4 )
            sub_45880(v5, n4_8);
        }
      }
      return 0;
    }
    if ( n6 >= 0xA )
    {
      if ( n6 > 0xB )
      {
        if ( n6 == 123 )
        {
          for ( i = 0; i < *(_DWORD *)(v5 + 1236); ++i )
          {
            v15 = v5 + 4 * i;
            n9_1 = *(_DWORD *)(v15 + 1240);
            if ( n9_1 == n9 )
            {
              sub_39B24(n9_1, *(_DWORD *)(v15 + 1172));
              if ( n4_3 == 4 )
                sub_398DF(4, *(_DWORD *)(v15 + 1172));
            }
          }
        }
        return 0;
      }
      goto LABEL_26;
    }
    return 0;
  }
  if ( n176 < 0x80 )
    return 0;
  if ( n176 <= 0x80 )
  {
    if ( n9 != 9 )
    {
      for ( j = 0; j < *(_DWORD *)(v5 + 1236); ++j )
      {
        v30 = (int *)(v5 + 4 * j);
        if ( v30[310] == n9 )
        {
          n6_1 = v30[326];
          if ( n6_1 == n6 )
          {
            sub_39B24(n6_1, v30[293]);
            if ( n4_4 == 4 )
            {
              sub_398DF(4, v30[293]);
              return 1;
            }
          }
        }
      }
    }
    return 0;
  }
  if ( n176 != 144 )
    return 0;
  if ( n9 == 9 )
    *(_DWORD *)(v7 + 1108) = sub_4584D(*(_DWORD **)(v5 + 8), 127, n6);
  if ( !*(_DWORD *)(v5 + 4 * n9 + 1108) )
    return 0;
  for ( n4_5 = 0; n4_5 < *(_DWORD *)(v5 + 1236); ++n4_5 )
  {
    sub_39B24(n4_5, *(_DWORD *)(v5 + 4 * n4_5 + 1172));
    if ( n2 == 2 )
      break;
  }
  if ( n4_5 == *(_DWORD *)(v5 + 1236) )
  {
    v23 = -1;
    for ( n4_9 = 0; n4_9 < *(_DWORD *)(v5 + 1236); ++n4_9 )
    {
      v25 = v5 + 4 * n4_9;
      if ( v23 >= *(_DWORD *)(v25 + 1560) )
      {
        v23 = *(_DWORD *)(v25 + 1560);
        n4_5 = n4_9;
      }
    }
    sub_398DF(n4_5, *(_DWORD *)(v5 + 4 * n4_5 + 1172));
  }
  *(_DWORD *)(v5 + 4 * n4_5 + 1240) = n9;
  *(_DWORD *)(v5 + 4 * n4_5 + 1304) = n6;
  v33 = v5 + 4 * n9;
  *(_DWORD *)(v5 + 4 * n4_5 + 1368) = *(_DWORD *)(*(_DWORD *)(v33 + 1108) + 8);
  *(_DWORD *)(v5 + 4 * n4_5 + 1432) = *(_DWORD *)(*(_DWORD *)(v33 + 1108) + 28);
  *(_DWORD *)(v5 + 4 * n4_5 + 1496) = a5;
  v26 = *(_DWORD *)(v5 + 1624);
  *(_DWORD *)(v5 + 1624) = v26 + 1;
  *(_DWORD *)(v5 + 4 * n4_5 + 1560) = v26;
  sub_39521(v26, *(_DWORD *)(v5 + 4 * n4_5 + 1172));
  sub_39716(
    *(_DWORD *)(v33 + 1108),
    *(_DWORD *)(v5 + 4 * n4_5 + 1172),
    *(_DWORD *)(*(_DWORD *)(v33 + 1108) + 20),
    *(_DWORD *)(*(_DWORD *)(v33 + 1108) + 24));
  sub_39694(
    *(_DWORD *)(v33 + 1108),
    *(_DWORD *)(v5 + 4 * n4_5 + 1172),
    *(_DWORD *)(*(_DWORD *)(v33 + 1108) + 12) + *(_DWORD *)(v5 + 8),
    *(_DWORD *)(*(_DWORD *)(v33 + 1108) + 16));
  sub_458F0(v5, n4_5);
  sub_45880(v5, n4_5);
  sub_39798(v27, *(_DWORD *)(v5 + 4 * n4_5 + 1172));
  return 1;
}
