/*
 * func-name: sub_404C0
 * func-address: 0x404c0
 * callers: 0x40cf0
 * callees: 0x382d6, 0x382db, 0x382e9, 0x49690, 0x49891, 0x49923
 */

void __cdecl sub_404C0(int a1)
{
  int v1; // edi
  int v2; // edi
  int v3; // eax
  int v4; // eax
  int *v5; // edi
  int n2; // eax
  int v7; // [esp-10h] [ebp-1Ch]
  int v8; // [esp-4h] [ebp-10h]

  if ( !dword_5368C )
  {
    dword_5368C = 1;
    dword_543B0 = a1;
    v1 = sub_382D6();
    dword_543C0 = v1;
    if ( *(_DWORD *)(dword_543B0 + 84) )
    {
      v2 = **(__int16 **)(dword_543B0 + 52);
      dword_543D0 = v2;
      if ( v2 != -1 && v2 != *(_DWORD *)(dword_543B0 + 56) )
      {
        v8 = dword_543B0;
        *(_DWORD *)(dword_543B0 + 56) = v2;
        sub_49923(v8);
        dword_543BC = 0;
        v3 = *(_DWORD *)(dword_543B0 + 92);
        dword_543B8 = *(_DWORD *)(dword_543B0 + 96);
        for ( dword_543B4 = v3; dword_543B8; dword_543B4 += 2196 )
        {
          if ( *(_DWORD *)(dword_543B4 + 4) == 4 )
          {
            ++dword_543BC;
            sub_49690(dword_543B4);
          }
          --dword_543B8;
        }
        v4 = dword_543B0;
        *(_DWORD *)(dword_543B0 + 100) = dword_543BC;
        sub_49891(v4, dword_543D0 ^ 1);
        if ( (*(_BYTE *)(dword_543B0 + 28) & 0x10) != 0 )
        {
          v7 = *(_DWORD *)dword_543B0;
          word_543C8 = 0;
          word_543CA = dword_543D0 ^ 1;
          sub_382E9(dword_543B0, v7, 1029, (int)&unk_543C4, 0);
        }
        v5 = (int *)dword_543B0;
        if ( *(_DWORD *)(dword_543B0 + 100) )
        {
          *(_DWORD *)(dword_543B0 + 88) = 0;
        }
        else
        {
          n2 = *(_DWORD *)(dword_543B0 + 88);
          *(_DWORD *)(dword_543B0 + 88) = n2 + 1;
          if ( n2 == 2 )
          {
            if ( v5[21] )
            {
              sub_382E9(2, *v5, 1026, 0, 0);
              v5[21] = 0;
            }
          }
        }
      }
      sub_382DB(dword_543C0);
      dword_5368C = 0;
    }
    else
    {
      sub_382DB(v1);
      dword_5368C = 0;
    }
  }
}
