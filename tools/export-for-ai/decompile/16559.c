/*
 * func-name: sub_16559
 * func-address: 0x16559
 * callers: 0x10010, 0x15f84, 0x164e8, 0x16c57, 0x16f55, 0x190ac, 0x19df7, 0x1aa1d, 0x1e292, 0x26152, 0x2670e, 0x26eda, 0x279bc, 0x2872b, 0x28b41, 0x28cbd, 0x28f65, 0x29300, 0x2968d, 0x2986f, 0x29daa, 0x2a43e, 0x2aa00, 0x2ac7d, 0x2af28, 0x2b439, 0x31bdf, 0x35854, 0x35a0d, 0x35fcf
 * callees: 0x3702f, 0x4ebff, 0x4ec31
 */

int __fastcall sub_16559(__int32 a1, int a2, int a3, int a4, int a5)
{
  int v5; // eax

  sub_3702F(a1, a2, a3, a4, 20);
  v5 = DATO_DAT + *(_DWORD *)(DATO_DAT + 4 * a5);
  if ( n1832 == 36887 )
    return sub_4EC31(692247, v5, 320);
  else
    return sub_4EBFF(n1832 + 655360, v5, 320);
}
