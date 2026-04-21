/*
 * func-name: sub_2A0C2
 * func-address: 0x2a0c2
 * callers: 0x2a29d
 * callees: 0x15f84, 0x1685c, 0x187d6, 0x3702f, 0x4e29c
 */

void __fastcall sub_2A0C2(__int32 a1, int a2, int a3, int a4, int n3_1, int a6, unsigned __int8 *a7, int a8)
{
  unsigned __int8 *n3_2; // edi
  int v9; // ebp
  int v10; // ebx
  unsigned __int8 *v11; // esi
  int n205; // ebx
  int n3; // [esp+0h] [ebp-24h]
  int n4; // [esp+4h] [ebp-20h]
  int v15; // [esp+8h] [ebp-1Ch]
  int v16; // [esp+Ch] [ebp-18h]

  sub_3702F(a1, a2, a3, a4, 76);
  n4 = ::n4;
  if ( ::n4 == 3 )
    n4 = 1;
  n3 = n3_1;
  if ( n3_1 > 3 )
    n3 = 3;
  for ( n3_2 = 0; (int)n3_2 < n3; ++n3_2 )
  {
    v11 = (unsigned __int8 *)(80 * n3_2[n3_6 + a8] + n8_0);
    v16 = v11[32] - 1;
    v15 = v11[33];
    sub_4E29C(
      dword_53A61 + *(_DWORD *)(dword_53A61 + 48 * n3_2[n3_6 + a8] + 4 * n4),
      a6 + 320 * (26 * (_DWORD)n3_2 + 117) + 14,
      320);
    n205 = 205;
    if ( &n3_2[n3_6] == a7 )
      n205 = 201;
    v9 = 320 * (26 * (_DWORD)n3_2 + 121) + a6;
    sub_15F84(n3_2, v11[8] + 1, a2, a4, n205, arg0, v11[8] + 1, v9 + 40, 320, n205, 76, 0, 0, 0);
    sub_15F84(n3_2, v11[31] + 140, a2, a4, n205, arg0, v11[31] + 140, v9 + 130, 320, n205, 76, 0, 0, 0);
    sub_15F84(n3_2, v11[32] + 150, a2, a4, n205, arg0, v11[32] + 150, v9 + 175, 320, n205, 76, 0, 0, 0);
    v10 = 320 * (26 * (_DWORD)n3_2 + 125) + a6;
    sub_1685C(v10 + 220, a2, v10, a4, v10 + 220, 320, dword_53F66, 15);
    sub_187D6(v15 * word_52399[v16], a2, v10 + 228, a4, v10 + 228, 320, v15 * word_52399[v16], 119, 5);
  }
  JUMPOUT(0x26E30);
}
