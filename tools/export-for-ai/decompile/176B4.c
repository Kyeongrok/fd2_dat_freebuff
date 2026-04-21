/*
 * func-name: sub_176B4
 * func-address: 0x176b4
 * callers: 0x16f55, 0x1728c, 0x18d8c, 0x19df7, 0x1bbdc
 * callees: 0x11eb0, 0x127e0, 0x12c0d, 0x17643, 0x25a96, 0x3702f, 0x4e381, 0x4ed34
 */

void __fastcall sub_176B4(__int32 a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // eax
  int v7; // edx
  int v8; // eax
  int v9; // edi
  int v10; // eax
  int n4; // esi
  int v12; // [esp+0h] [ebp-28h]
  int n888; // [esp+4h] [ebp-24h]
  int n936; // [esp+8h] [ebp-20h]
  int n10944; // [esp+Ch] [ebp-1Ch]
  int v16; // [esp+10h] [ebp-18h]
  int n4_1; // [esp+14h] [ebp-14h]
  int v18; // [esp+24h] [ebp-4h]

  sub_3702F(a1, a2, a3, a4, 68);
  v18 = a3;
  v6 = sub_25A96(dword_53EEC, 8, 1);
  v16 = sub_12C0D(v6, a2, a3, a4);
  v7 = 1216 * n2_1;
  v8 = 10944 * n2_1;
  v9 = 10944 * n2_1 + dword_53A49 + 32904 + 24 * n10;
  v12 = -9120;
  n888 = 888;
  n936 = 936;
  n10944 = 10944;
  for ( n4_1 = 0; n4_1 < 4; ++n4_1 )
  {
    v12 += 2280;
    n888 += 6;
    n936 -= 6;
    n10944 -= 2280;
    v10 = sub_17643(v8, v7, a3, a4);
    for ( n4 = 0; n4 < 4; ++n4 )
    {
      a3 = dword_53A89;
      v7 = dword_53A89 + *(_DWORD *)(dword_53A89 + 4 * (3 * *(_DWORD *)(a5 + 4 * n4) + 2 * *(_DWORD *)(a6 + 4 * n4)));
      v10 = sub_4ED34(v9 + *(&v12 + n4), v7, 456);
    }
    if ( v16 != -1 )
      sub_127E0(v10, v7, a3, a4, v16);
    v8 = sub_11EB0(dword_53A49 + 32904, v7, a3, a4, 656644, 320, dword_53A49 + 32904, 456, 312, 192);
  }
  sub_17643(v8, v7, a3, a4);
  sub_4E381();
  JUMPOUT(0x13FCC);
}
