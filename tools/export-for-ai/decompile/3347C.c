/*
 * func-name: sub_3347C
 * func-address: 0x3347c
 * callers: 0x15311, 0x1cff0, 0x25bf4, 0x25ebb
 * callees: 0x135dd, 0x205da, 0x3702f
 */

void __fastcall sub_3347C(__int32 a1, int a2, int a3, int a4)
{
  int v4; // eax
  __int32 v5; // eax

  v4 = sub_3702F(a1, a2, a3, a4, 40);
  sub_205DA(v4, a2, a3, a4);
  sub_135DD(v5, a2, a3, a4, 20, 20);
  JUMPOUT(0x3344D);
}
