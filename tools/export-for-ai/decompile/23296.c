/*
 * func-name: sub_23296
 * func-address: 0x23296
 * callers: 0x15311, 0x1cff0, 0x25bf4
 * callees: 0x10b4e, 0x112a5, 0x135dd, 0x1366a, 0x3702f
 */

void __fastcall sub_23296(__int32 a1, int a2, int a3, int a4)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  __int32 v7; // eax

  v4 = sub_3702F(a1, a2, a3, a4, 40);
  v5 = sub_112A5(v4, a2, a3, a4, 0xDu);
  v6 = sub_10B4E(v5, a2, a3, a4, 3);
  sub_135DD(v6, a2, a3, a4, 5, 14);
  sub_1366A(v7, a2, a3, a4, 27);
  JUMPOUT(0x231DF);
}
