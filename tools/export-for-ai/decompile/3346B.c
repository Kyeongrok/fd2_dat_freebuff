/*
 * func-name: sub_3346B
 * func-address: 0x3346b
 * callers: 0x15311, 0x1cff0, 0x25bf4, 0x25ebb
 * callees: 0x205da, 0x3702f
 */

void __fastcall sub_3346B(__int32 a1, int a2, int a3, int a4)
{
  int v4; // eax

  v4 = sub_3702F(a1, a2, a3, a4, 40);
  sub_205DA(v4, a2, a3, a4);
  JUMPOUT(0x3344D);
}
