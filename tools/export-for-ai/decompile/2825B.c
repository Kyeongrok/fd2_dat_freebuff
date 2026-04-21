/*
 * func-name: sub_2825B
 * func-address: 0x2825b
 * callers: 0x27f4a
 * callees: 0x15f84, 0x187d6, 0x2860a, 0x28632, 0x3702f, 0x4e29c, 0x4ebff
 */

char __fastcall sub_2825B(__int32 a1, int a2, int a3, int a4, int n3_2, int a6, int a7, int n3, int n30)
{
  char n3_4; // al
  int n3_3; // ebp
  int v11; // edi
  int v12; // esi
  unsigned __int8 *v13; // edi
  int n205; // eax
  int argC; // edi
  int v16; // edx
  int v17; // esi
  int v18; // edi
  int v19; // edx
  __int32 v20; // eax
  int argC_2; // esi
  __int32 v22; // eax
  int v23; // [esp-8h] [ebp-50h]
  int n999_1; // [esp+0h] [ebp-48h] BYREF
  int n999_3; // [esp+4h] [ebp-44h]
  int n999_5; // [esp+8h] [ebp-40h]
  int n999_7; // [esp+Ch] [ebp-3Ch]
  int v28; // [esp+10h] [ebp-38h]
  int v29; // [esp+14h] [ebp-34h]
  int argC_1; // [esp+18h] [ebp-30h]
  int n3_1; // [esp+1Ch] [ebp-2Ch]
  int n4; // [esp+20h] [ebp-28h]
  int n999_2; // [esp+24h] [ebp-24h]
  int n999; // [esp+28h] [ebp-20h]
  int n999_6; // [esp+2Ch] [ebp-1Ch]
  int n999_4; // [esp+30h] [ebp-18h]
  int v37; // [esp+34h] [ebp-14h]
  int v38; // [esp+44h] [ebp-4h]

  sub_3702F(a1, a2, a3, a4, 112);
  v38 = a3;
  n4 = ::n4;
  if ( ::n4 == 3 )
    n4 = 1;
  n3_4 = n3_2;
  n3_1 = n3_2;
  if ( n3_2 > 3 )
    n3_1 = 3;
  for ( n3_3 = 0; n3_3 < n3_1; ++n3_3 )
  {
    v11 = *(unsigned __int8 *)(a6 + n3_3 + n3_6);
    sub_28632(v11, a7, &n999_1);
    v12 = 80 * v11 + dword_53A45;
    n999 = *(unsigned __int16 *)(v12 + 72);
    n999_2 = *(unsigned __int16 *)(v12 + 74);
    n999_4 = *(unsigned __int16 *)(v12 + 76);
    n999_6 = *(unsigned __int16 *)(v12 + 78);
    v37 = 26 * n3_3 + 117;
    v13 = (unsigned __int8 *)(dword_53A61 + *(_DWORD *)(dword_53A61 + 48 * v11 + 4 * n4));
    sub_4E29C(v13, n30 + 320 * v37 + 14, 320);
    n205 = 205;
    if ( n3_3 + n3_6 == n3 )
      n205 = 201;
    v28 = 320 * (v37 + 4) + n30;
    sub_15F84(
      v13,
      *(unsigned __int8 *)(v12 + 8) + 1,
      v28,
      a4,
      a3,
      arg0,
      *(unsigned __int8 *)(v12 + 8) + 1,
      v28 + 40,
      320,
      n205,
      76,
      0,
      0,
      0);
    argC = sub_2860A(n999, n999_1);
    v16 = v37 + 3;
    v17 = 320 * (v37 + 3) + n30;
    sub_4EBFF(v17 + 122, *(_DWORD *)(dword_53F66 + 78) + dword_53F66, 320);
    sub_187D6(v17 + 137, v16, a3, a4, v17 + 137, 320, n999, argC, 3);
    sub_4EBFF(v28 + 157, *(_DWORD *)(dword_53F66 + 94) + dword_53F66, 320);
    sub_187D6(v17 + 165, v16, a3, a4, v17 + 165, 320, n999_1, argC, 3);
    argC_1 = sub_2860A(n999_2, n999_3);
    v18 = 320 * (v37 + 12) + n30;
    sub_4EBFF(v18 + 122, *(_DWORD *)(dword_53F66 + 82) + dword_53F66, 320);
    sub_187D6(v18 + 137, v16, a3, a4, v18 + 137, 320, n999_2, argC_1, 3);
    v23 = *(_DWORD *)(dword_53F66 + 94) + dword_53F66;
    v19 = 320 * (v37 + 13) + n30;
    v29 = v19;
    sub_4EBFF(v19 + 157, v23, 320);
    sub_187D6(v18 + 165, v19, a3, a4, v18 + 165, 320, n999_3, argC_1, 3);
    argC_1 = sub_2860A(n999_4, n999_5);
    sub_4EBFF(v17 + 196, *(_DWORD *)(dword_53F66 + 86) + dword_53F66, 320);
    sub_187D6(v17 + 214, v19, a3, a4, v17 + 214, 320, n999_4, argC_1, 3);
    v20 = sub_4EBFF(v28 + 234, *(_DWORD *)(dword_53F66 + 94) + dword_53F66, 320);
    sub_187D6(v20, v19, a3, a4, v17 + 242, 320, n999_5, argC_1, 3);
    argC_2 = sub_2860A(n999_6, n999_7);
    sub_4EBFF(v18 + 196, *(_DWORD *)(dword_53F66 + 90) + dword_53F66, 320);
    sub_187D6(v18 + 214, v19, a3, a4, v18 + 214, 320, n999_6, argC_2, 3);
    v22 = sub_4EBFF(v29 + 234, *(_DWORD *)(dword_53F66 + 94) + dword_53F66, 320);
    n3_4 = sub_187D6(v22, v19, a3, a4, v18 + 242, 320, n999_7, argC_2, 3);
  }
  return n3_4;
}
