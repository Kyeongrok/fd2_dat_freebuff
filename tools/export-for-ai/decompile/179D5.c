/*
 * func-name: sub_179D5
 * func-address: 0x179d5
 * callers: 0x17898
 * callees: 0x127e0, 0x12c0d, 0x3702f, 0x4ed34
 */

void __fastcall sub_179D5(__int32 a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // eax
  __int32 v7; // eax
  int v8; // edi
  int v9; // ebp
  int n3; // esi
  int v11; // eax
  _DWORD v12[4]; // [esp+0h] [ebp-28h]
  int v13; // [esp+10h] [ebp-18h]
  int v14; // [esp+14h] [ebp-14h]
  int v15; // [esp+24h] [ebp-4h]

  v6 = sub_3702F(a1, a2, a3, a4, 56);
  v15 = a3;
  v13 = sub_12C0D(v6, a2, a3, a4);
  v7 = dword_53A49 + 32904;
  v14 = dword_53A49 + 32904;
  v8 = 24 * n10;
  v9 = 24 * n2_1;
  v12[0] = -9120;
  v12[1] = 888;
  v12[2] = 936;
  v12[3] = 10944;
  for ( n3 = 0; n3 < 4; ++n3 )
  {
    v11 = 3 * *(_DWORD *)(a5 + 4 * n3) + 2 * *(_DWORD *)(a6 + 4 * n3);
    if ( n3 == n3_3 )
      v11 += dword_53C13;
    a3 = dword_53A89 + *(_DWORD *)(dword_53A89 + 4 * v11);
    a2 = v8 + 456 * v9;
    v7 = sub_4ED34(v14 + a2 + v12[n3], a3, 456);
  }
  if ( v13 != -1 )
    sub_127E0(v7, a2, a3, a4, v13);
  JUMPOUT(0x13FCC);
}
