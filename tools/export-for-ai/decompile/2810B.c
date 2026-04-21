/*
 * func-name: sub_2810B
 * func-address: 0x2810b
 * callers: 0x27079, 0x27d33
 * callees: 0x15f84, 0x3702f, 0x4e29c
 */

void __fastcall sub_2810B(__int32 a1, int a2, int a3, int a4, int n3, int n655360)
{
  int n16_1; // esi
  unsigned __int8 *v7; // edi
  int v8; // ebp
  int v9; // ebx
  int n205; // eax
  int n4; // [esp+0h] [ebp-1Ch]
  int n16; // [esp+4h] [ebp-18h]

  sub_3702F(a1, a2, a3, a4, 68);
  n4 = ::n4;
  if ( ::n4 == 3 )
    n4 = 1;
  n16 = ::n16_1;
  if ( ::n16_1 > 6 )
  {
    n16 = 6;
    if ( n3_6 + 6 > ::n16_1 )
      n16 = 5;
  }
  for ( n16_1 = 0; n16_1 < n16; ++n16_1 )
  {
    v7 = (unsigned __int8 *)(80 * (n16_1 + n3_6) + dword_53A45);
    v8 = 132 * (n16_1 % 2);
    v9 = dword_53A61 + *(_DWORD *)(dword_53A61 + 48 * (n16_1 + n3_6) + 4 * n4);
    sub_4E29C(v9, v8 + n655360 + 320 * (26 * (n16_1 / 2) + 117) + 14, 320);
    n205 = 205;
    if ( n16_1 + n3_6 == n3 )
      n205 = 201;
    sub_15F84(
      v7,
      v7[8] + 1,
      26 * (n16_1 / 2) + 121,
      a4,
      v9,
      arg0,
      v7[8] + 1,
      v8 + n655360 + 320 * (26 * (n16_1 / 2) + 121) + 40,
      320,
      n205,
      76,
      0,
      0,
      0);
  }
}
