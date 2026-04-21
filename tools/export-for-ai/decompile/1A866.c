/*
 * func-name: sub_1A866
 * func-address: 0x1a866
 * callers: 0x1a30b
 * callees: 0x12d7b, 0x15f84, 0x1956b, 0x196cb, 0x1b750, 0x1db65, 0x1e5c0, 0x205b4, 0x206c5, 0x20707, 0x2073d, 0x20765, 0x20822, 0x2084a, 0x20872, 0x208cf, 0x20926, 0x20957, 0x20a51, 0x20a87, 0x20aaf, 0x20b14, 0x20b3c, 0x20b72, 0x20bf5, 0x34531, 0x3702f, 0x4e381
 */

void __fastcall sub_1A866(__int32 a1, int a2, int n10, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v9; // eax
  int n6; // ebp
  int v11; // esi
  int v12; // edi
  int v13; // eax
  int v14; // edx
  unsigned __int8 *v15; // edi
  int v16; // eax
  __int32 v17; // eax
  int n6_2; // ebp
  int v19; // esi
  unsigned __int8 *n6_1; // edi
  unsigned __int8 *v21; // eax
  int v22; // edx
  __int32 v23; // eax

  v9 = sub_3702F(a1, a2, n10, a4, 56);
  for ( n6 = 0; n6 < n6_0; ++n6 )
  {
    v11 = 80 * n6 + dword_53A45;
    v9 = *(unsigned __int8 *)(v11 + 37);
    if ( *(_BYTE *)(v11 + 37) )
    {
      v9 = *(unsigned __int8 *)(v11 + 6);
      if ( v9 == a5 && (*(_BYTE *)(v11 + 5) & 1) == 0 )
      {
        v12 = *(unsigned __int16 *)(v11 + 64);
        n10 = 10;
        v13 = *(unsigned __int16 *)(v11 + 66) / 10;
        v14 = *(unsigned __int16 *)(v11 + 66) % 10;
        dword_53AE1 = v13;
        v15 = (unsigned __int8 *)(v12 - v13);
        if ( (int)v15 < 0 )
          v15 = 0;
        *(_WORD *)(v11 + 64) = (_WORD)v15;
        n6_5 = 0;
        sub_12D7B(v13, v14, 10, a4, n6);
        n6_5 = 1;
        v16 = sub_1956B(*(unsigned __int8 *)(v11 + 7), v14, 10, a4, *(unsigned __int8 *)(v11 + 7));
        sub_15F84(v15, v16, v14, a4, 10, arg0, 487, 696099, 320, 205, 76, 74, 19, 1);
        sub_4E381();
        v17 = sub_1E5C0(10);
        v9 = sub_196CB(v17, v14, 10, a4);
      }
    }
  }
  sub_1DB65(v9);
  ((void (__cdecl *)(_DWORD))funcs_1197B[n17])(0);
  for ( n6_2 = 0; n6_2 < n6_0; ++n6_2 )
  {
    v19 = 80 * n6_2 + dword_53A45;
    for ( n6_1 = 0; (int)n6_1 < 6; ++n6_1 )
    {
      if ( *(unsigned __int8 *)(v19 + 6) == a9 && (*(_BYTE *)(v19 + 5) & 1) == 0 )
      {
        v21 = &n6_1[v19];
        v22 = n6_1[v19 + 34];
        if ( n6_1[v19 + 34] )
        {
          if ( !--v21[34] )
          {
            n6_5 = 0;
            sub_12D7B(0, v22, n10, a4, n6_2);
            n6_5 = 1;
            sub_1956B(*(unsigned __int8 *)(v19 + 7), v22, n10, a4, *(unsigned __int8 *)(v19 + 7));
            sub_15F84(
              n6_1,
              (__int32)(n6_1 + 481),
              v22,
              a4,
              n10,
              arg0,
              (int)(n6_1 + 481),
              696099,
              320,
              205,
              76,
              74,
              19,
              1);
            sub_4E381();
            v23 = sub_1E5C0(10);
            sub_196CB(v23, v22, n10, a4);
            sub_1B750(n6_2);
          }
        }
      }
    }
  }
  JUMPOUT(0x190A7);
}
