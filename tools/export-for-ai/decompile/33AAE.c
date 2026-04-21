/*
 * func-name: sub_33AAE
 * func-address: 0x33aae
 * callers: 0x15311, 0x1cff0, 0x25bf4, 0x25ebb
 * callees: 0x135dd, 0x1366a, 0x205da, 0x3702f
 */

void __fastcall sub_33AAE(__int32 a1, int a2, int a3, int a4)
{
  int v4; // eax
  __int32 v5; // eax
  __int32 v6; // eax

  v4 = sub_3702F(a1, a2, a3, a4, 40);
  sub_205DA(v4, a2, a3, a4);
  sub_135DD(v5, a2, a3, a4, 9, 39);
  sub_1366A(v6, a2, a3, a4, 76);
  JUMPOUT(0x3312D);
}
