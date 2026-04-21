/*
 * func-name: sub_1366A
 * func-address: 0x1366a
 * callers: 0x22f37, 0x23296, 0x234bb, 0x235bc, 0x235f9, 0x237d5, 0x238dc, 0x23a0a, 0x23b5f, 0x23cd5, 0x23e74, 0x240fa, 0x244b6, 0x24754, 0x24df2, 0x24e80, 0x250cc, 0x25757, 0x3231b, 0x32d18, 0x32e8c, 0x32fb2, 0x33049, 0x33169, 0x33219, 0x3327d, 0x33367, 0x333f5, 0x334d9, 0x335da, 0x336a0, 0x33aae, 0x33af1, 0x33c9d, 0x33dba, 0x33e3c, 0x34531, 0x3460b, 0x34673, 0x346cd, 0x34778, 0x34984, 0x34a1e, 0x34b9a, 0x34c7a, 0x34fcc, 0x35022, 0x350c8, 0x357dd
 * callees: 0x11cac, 0x11d40, 0x11eb0, 0x11eee, 0x127e0, 0x129ec, 0x17aa9, 0x32230, 0x3702f, 0x4e381, 0x4eb48
 */

int __fastcall sub_1366A(__int32 a1, int a2, int a3, int a4, int a5)
{
  unsigned __int8 *v5; // eax
  unsigned __int8 *v6; // ebp
  int v7; // eax
  int v8; // edx
  __int32 v9; // eax
  int v10; // edi
  int n6; // esi
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // edx
  int v16; // eax
  int v17; // edx
  int v18; // eax
  _BYTE *v19; // eax
  int n3; // edx
  _BYTE v22[32]; // [esp+0h] [ebp-6Ch]
  _BYTE v23[32]; // [esp+20h] [ebp-4Ch]
  unsigned __int8 i; // [esp+40h] [ebp-2Ch]
  unsigned __int8 v25; // [esp+44h] [ebp-28h]
  unsigned __int8 v26; // [esp+48h] [ebp-24h]
  unsigned __int8 j; // [esp+4Ch] [ebp-20h]
  unsigned __int8 n7; // [esp+50h] [ebp-1Ch]
  unsigned __int8 v29; // [esp+54h] [ebp-18h]
  unsigned __int8 v30; // [esp+58h] [ebp-14h]
  int v31; // [esp+68h] [ebp-4h]

  sub_3702F(a1, a2, a3, a4, 136);
  v31 = a3;
  v5 = (unsigned __int8 *)sub_4EB48(a5);
  v26 = *v5;
  v30 = 0;
  v6 = v5 + 1;
  while ( v30 < (int)v26 )
  {
    v29 = *v6;
    v25 = v6[1];
    j = 0;
    for ( v6 += 2; ; v6 += 2 )
    {
      v7 = j;
      v8 = v25;
      if ( j >= (int)v25 )
        break;
      v23[j] = *v6;
      v22[v7] = v6[1];
      ++j;
    }
    if ( (v29 & 0x80u) == 0 )
    {
      for ( i = 0; i < (int)v29; ++i )
      {
        for ( n7 = 1; n7 < 7u; ++n7 )
        {
          sub_32230(v23[0]);
          for ( j = 0; ; ++j )
          {
            v17 = j;
            if ( j >= (int)v25 )
              break;
            v16 = 80 * (unsigned __int8)v23[j];
            a3 = dword_53A45;
            *(_BYTE *)(dword_53A45 + v16 + 3) = v22[j];
            *(_BYTE *)(a3 + v16 + 4) = n7;
          }
          if ( !n64 || n64 == 64 )
          {
            sub_11CAC(v25, j, a3, a4, 0);
          }
          else
          {
            ++n64;
            v18 = sub_11CAC(v25, j, a3, a4, 1);
            sub_11D40(v18, v17, a3, a4, 0, 255, n64);
          }
          sub_4E381();
        }
        for ( j = 0; j < (int)v25; ++j )
        {
          a3 = dword_53A45;
          v19 = (_BYTE *)(dword_53A45 + 80 * (unsigned __int8)v23[j]);
          n3 = (unsigned __int8)v22[j];
          if ( v22[j] )
          {
            if ( n3 == 1 )
            {
              --*v19;
            }
            else if ( n3 == 3 )
            {
              ++*v19;
            }
            else
            {
              --v19[1];
            }
          }
          else
          {
            ++v19[1];
          }
          v19[4] = 0;
        }
      }
    }
    else
    {
      v29 &= ~0x80u;
      if ( v29 )
      {
        for ( j = 0; j < (int)v25; ++j )
        {
          a3 = dword_53A45;
          *(_BYTE *)(dword_53A45 + 80 * (unsigned __int8)v23[j] + 3) = v22[j];
        }
        for ( j = 0; ; ++j )
        {
          v15 = j;
          if ( j >= (int)v29 )
            break;
          v14 = sub_11CAC(v29, j, a3, a4, 0);
          sub_17AA9(v14, v15, a3, a4, 1);
          sub_4E381();
        }
      }
      else
      {
        sub_17AA9(0, v25, a3, a4, 1);
        sub_11EEE(dword_53A49 + 32904, v8, a3, a4, dword_53A49 + 32904, 456, 13, 8, dword_53AA9, dword_53AAD);
        v10 = dword_53A49;
        for ( n6 = 0; n6 < n6_0; ++n6 )
        {
          v9 = 80 * n6 + dword_53A45;
          for ( j = 0; ; ++j )
          {
            v8 = j;
            a3 = v25;
            if ( j >= (int)v25 )
              break;
            if ( n6 == (unsigned __int8)v23[j] )
            {
              dword_53A49 = v10 - 5472;
              *(_BYTE *)(v9 + 3) = v22[j];
            }
          }
          if ( (*(_BYTE *)(v9 + 5) & 1) == 0 )
            sub_127E0(v9, j, v25, a4, n6);
          dword_53A49 = v10;
        }
        sub_129EC(v9, v8, a3, a4);
        v12 = sub_11EB0(dword_53A49 + 32904, v8, a3, a4, 656644, 320, dword_53A49 + 32904, 456, 312, 192);
        v13 = sub_17AA9(v12, v8, a3, a4, 2);
        sub_11CAC(v13, v8, a3, a4, 0);
        sub_4E381();
      }
    }
    ++v30;
  }
  return sub_11CAC(v30, v26, a3, a4, 1);
}
