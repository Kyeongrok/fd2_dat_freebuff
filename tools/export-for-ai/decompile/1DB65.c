/*
 * func-name: sub_1DB65
 * func-address: 0x1db65
 * callers: 0x15311, 0x1548e, 0x18d8c, 0x1a866, 0x1cff0, 0x20c6f, 0x35730, 0x35f10
 * callees: 0x11cac, 0x11eb0, 0x11eee, 0x127a9, 0x127e0, 0x129ec, 0x17aa9, 0x25a96, 0x3702f, 0x3706e, 0x3771c, 0x3776e, 0x4ebab
 */

__int32 __fastcall sub_1DB65(__int32 a1, int a2, int a3, int n4)
{
  __int32 result; // eax
  int v5; // ebp
  int n6; // esi
  int v7; // edi
  int n6_5; // esi
  int v9; // ebx
  int n13; // edi
  int v11; // edx
  __int32 v12; // eax
  int v13; // eax
  int v14; // edx
  int v15; // eax
  int n6_1; // esi
  int n6_2; // esi
  int v18; // ebx
  __int32 n655360_1; // ebx
  int v20; // edx
  int n655360; // esi
  __int32 v22; // eax
  int v23; // eax
  int n6_3; // edi
  int i; // esi
  int v26; // eax
  int n6_4; // edi
  int j; // esi
  int v29; // eax
  __int32 v30; // eax
  __int32 v31; // eax
  _DWORD v32[30]; // [esp+0h] [ebp-8Ch]
  __int32 n655360_2; // [esp+78h] [ebp-14h]
  int v34; // [esp+88h] [ebp-4h]

  result = sub_3702F(a1, a2, a3, n4, 168);
  v34 = a3;
  v5 = 0;
  for ( n6 = 0; n6 < n6_0; ++n6 )
  {
    a3 = 80 * n6 + dword_53A45;
    n4 = *(unsigned __int8 *)a3;
    v7 = *(unsigned __int8 *)(a3 + 1);
    if ( (*(_BYTE *)(a3 + 5) & 1) == 0
      && !*(_WORD *)(a3 + 64)
      && n4 >= dword_53AA9 - 1
      && n4 <= dword_51A87 + dword_53AA9
      && v7 >= dword_53AAD - 1
      && v7 <= dword_51A8B + dword_53AAD + 1 )
    {
      a3 = 1216 * (v7 - 1 - dword_53AAD);
      n4 = 10944 * (v7 - 1 - dword_53AAD) + n655360_0 + 32904 + 24 * (n4 - 1 - dword_53AA9) - 2736;
      v32[v5++] = n4;
    }
  }
  if ( v5 )
  {
    for ( n13 = 0; n13 < 13; ++n13 )
    {
      v14 = n655360_0 + 32904;
      sub_11EEE(result, n655360_0 + 32904, a3, n4, n655360_0 + 32904, 456, 13, 8, dword_53AA9, dword_53AAD);
      for ( n6_1 = 0; n6_1 < n6_0; ++n6_1 )
      {
        v14 = dword_53A45;
        a3 = dword_53A45 + 80 * n6_1;
        if ( (*(_BYTE *)(a3 + 5) & 1) == 0 )
        {
          v14 = *(unsigned __int16 *)(a3 + 64);
          if ( !*(_WORD *)(a3 + 64) )
          {
            n4 = 4;
            v15 = n13 / 4;
            v14 = n13 % 4;
            *(_BYTE *)(a3 + 3) = n13 % 4;
          }
          sub_127E0(v15, v14, a3, n4, n6_1);
        }
      }
      sub_129EC(v15, v14, a3, n4);
      v11 = n655360_0 + 32904;
      v13 = sub_11EB0(v12, n655360_0 + 32904, a3, n4, 656644, 320, n655360_0 + 32904, 456, 312, 192);
      result = sub_17AA9(v13, v11, a3, n4, 1);
    }
    for ( n6_2 = 0; n6_2 < n6_0; ++n6_2 )
    {
      v18 = 80 * n6_2 + dword_53A45;
      if ( !*(_WORD *)(v18 + 64) )
        *(_BYTE *)(v18 + 5) = 1;
    }
    n655360_1 = malloc((char *)&loc_2567F + 1);
    n655360_2 = n655360_1;
    v20 = n655360_1 + 32904;
    sub_11EEE(n655360_1, n655360_1 + 32904, n655360_1, n4, n655360_1 + 32904, 456, 13, 8, dword_53AA9, dword_53AAD);
    n655360 = n655360_0;
    n655360_0 = n655360_1;
    sub_127A9(v22, n655360_1 + 32904, n655360_1, n4);
    n655360_0 = n655360;
    v23 = sub_25A96(dword_53EEC, 3, 1);
    for ( n6_3 = 0; n6_3 < 6; ++n6_3 )
    {
      for ( i = 0; i < v5; ++i )
      {
        n655360_1 = n6_3 + 68;
        sub_4EBAB((_BYTE *)v32[i], (__int16 *)(*(_DWORD *)(dword_53A81 + 4 * (n6_3 + 68) + 6) + dword_53A81), 456);
      }
      v20 = n655360_0 + 32904;
      v26 = sub_11EB0(v23, n655360_0 + 32904, n655360_1, n4, 656644, 320, n655360_0 + 32904, 456, 312, 192);
      v23 = sub_17AA9(v26, v20, n655360_1, n4, 1);
    }
    for ( n6_4 = 6; n6_4 < 12; ++n6_4 )
    {
      v30 = memmove(n655360_0, n655360_2, (char *)&loc_2567F + 1);
      for ( j = 0; j < v5; ++j )
      {
        n655360_1 = n6_4 + 68;
        sub_4EBAB((_BYTE *)v32[j], (__int16 *)(*(_DWORD *)(dword_53A81 + 4 * (n6_4 + 68) + 6) + dword_53A81), 456);
      }
      v20 = n655360_0 + 32904;
      v29 = sub_11EB0(v30, n655360_0 + 32904, n655360_1, n4, 656644, 320, n655360_0 + 32904, 456, 312, 192);
      sub_17AA9(v29, v20, n655360_1, n4, 1);
    }
    v31 = free(n655360_2);
    return sub_11CAC(v31, v20, n655360_1, n4, 0);
  }
  else
  {
    for ( n6_5 = 0; n6_5 < n6_0; ++n6_5 )
    {
      v9 = 80 * n6_5 + dword_53A45;
      if ( !*(_WORD *)(v9 + 64) )
        *(_BYTE *)(v9 + 5) = 1;
    }
  }
  return result;
}
