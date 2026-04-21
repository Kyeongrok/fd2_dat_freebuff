/*
 * func-name: sub_335AA
 * func-address: 0x335aa
 * callers: 0x15311, 0x1cff0, 0x25bf4, 0x25ebb
 * callees: 0x10b4e, 0x205da, 0x33499, 0x3702f
 */

void __fastcall sub_335AA(__int32 a1, int a2, int a3, int a4)
{
  int v4; // eax
  __int32 v5; // eax

  v4 = sub_3702F(a1, a2, a3, a4, 40);
  sub_205DA(v4, a2, a3, a4);
  if ( !sub_33499(v5, a2, a3, a4, 18) )
    sub_10B4E(0, a2, a3, a4, 1);
  JUMPOUT(0x3344D);
}
