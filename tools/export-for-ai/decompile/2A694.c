/*
 * func-name: sub_2A694
 * func-address: 0x2a694
 * callers: 0x2a857
 * callees: 0x15f84, 0x3702f, 0x4e29c, 0x4e7dd
 */

void __fastcall sub_2A694(__int32 a1, int a2, int a3, int a4, int n3_1, int a6, int a7, int a8, int a9)
{
  int n3_2; // esi
  unsigned __int8 *v10; // eax
  unsigned __int8 *v11; // edi
  int n205; // ebp
  int v13; // [esp+0h] [ebp-20h]
  int n3; // [esp+4h] [ebp-1Ch]
  int n4; // [esp+8h] [ebp-18h]

  sub_3702F(a1, a2, a3, a4, 72);
  n4 = ::n4;
  if ( ::n4 == 3 )
    n4 = 1;
  n3 = n3_1;
  if ( n3_1 > 3 )
    n3 = 3;
  for ( n3_2 = 0; n3_2 < n3; ++n3_2 )
  {
    v11 = (unsigned __int8 *)(80 * *(unsigned __int8 *)(a8 + n3_2 + n3_6) + n8_0);
    sub_4E29C(
      dword_53A61 + *(_DWORD *)(48 * *(unsigned __int8 *)(a8 + n3_2 + n3_6) + dword_53A61 + 4 * n4),
      a6 + 320 * (26 * n3_2 + 117) + 14,
      320);
    n205 = 205;
    if ( n3_2 + n3_6 == a7 )
      n205 = 201;
    v13 = 320 * (26 * n3_2 + 121) + a6;
    sub_15F84(v11, v11[8] + 1, v13, a4, a3, arg0, v11[8] + 1, v13 + 40, 320, n205, 76, 0, 0, 0);
    sub_15F84(v11, v11[32] + 150, v13, a4, a3, arg0, v11[32] + 150, v13 + 130, 320, n205, 76, 0, 0, 0);
    sub_15F84(v11, v13 + 175, v13, a4, a3, arg0, 593, v13 + 175, 320, n205, 76, 0, 0, 0);
    v10 = (unsigned __int8 *)sub_4E7DD(*(unsigned __int8 *)(a9 + n3_2 + n3_6));
    sub_15F84(v11, *v10 + 150, v13 + 239, a4, a3, arg0, *v10 + 150, v13 + 239, 320, n205, 76, 0, 0, 0);
  }
}
