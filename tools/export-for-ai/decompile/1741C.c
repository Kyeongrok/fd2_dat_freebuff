/*
 * func-name: sub_1741C
 * func-address: 0x1741c
 * callers: 0x16f55, 0x1728c, 0x18d8c, 0x19df7, 0x1bbdc
 * callees: 0x11eb0, 0x11eee, 0x127a9, 0x127e0, 0x1297d, 0x12c0d, 0x175a9, 0x17643, 0x1acf3, 0x25a96, 0x3702f, 0x4ed34
 */

void __fastcall sub_1741C(
        __int32 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15)
{
  int v15; // eax
  int v16; // ebp
  int v17; // edx
  int v18; // edi
  int v19; // eax
  __int32 v20; // eax
  int v21; // eax
  int v22; // eax
  __int32 v23; // eax
  int n4; // esi
  char *retaddr; // [esp+28h] [ebp+0h]
  int n4_1; // [esp+3Ch] [ebp+14h]

  v15 = sub_3702F(a1, a2, a3, a4, 68);
  v16 = a6;
  sub_12C0D(v15, a2, a3, a4);
  v17 = 1216 * n2_1;
  v18 = 10944 * n2_1 + dword_53A49 + 32904 + 24 * n10;
  v19 = sub_25A96(dword_53EEC, 8, 1);
  sub_1297D(v19, v17, a3, a4);
  sub_11EEE(dword_53A49 + 32904, v17, a3, a4, dword_53A49 + 32904, 456, 13, 8, dword_53AA9, dword_53AAD);
  sub_127A9(v20, v17, a3, a4);
  v21 = sub_1ACF3(dword_53A49 + 32904, 456);
  v22 = sub_175A9(v21);
  for ( n4_1 = 0; n4_1 < 4; ++n4_1 )
  {
    retaddr -= 2280;
    a5 -= 6;
    a6 += 6;
    a7 += 2280;
    v23 = sub_17643(v22);
    for ( n4 = 0; n4 < 4; ++n4 )
    {
      a3 = dword_53A89;
      v17 = dword_53A89 + *(_DWORD *)(dword_53A89 + 4 * (3 * *(_DWORD *)(a15 + 4 * n4) + 2 * *(_DWORD *)(v16 + 4 * n4)));
      v23 = sub_4ED34(&(&retaddr)[n4][v18], v17, 456);
    }
    if ( a8 != -1 )
      sub_127E0(v23, v17, a3, a4, a8);
    v22 = sub_11EB0(dword_53A49 + 32904, v17, a3, a4, 656644, 320, dword_53A49 + 32904, 456, 312, 192);
  }
  JUMPOUT(0x13FCC);
}
