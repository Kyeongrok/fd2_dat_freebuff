/*
 * func-name: sub_26996
 * func-address: 0x26996
 * callers: 0x25ebb, 0x26152, 0x2670e, 0x279bc, 0x2872b, 0x28cbd, 0x28efe, 0x28f65, 0x29300, 0x29620, 0x2968d, 0x2986f, 0x29daa, 0x2a43e, 0x2aa00, 0x2ac7d, 0x2af28, 0x2b439, 0x31bdf
 * callees: 0x1974c, 0x3702f, 0x3771c, 0x3776e
 */

int __fastcall sub_26996(__int32 a1, int a2, int a3, int a4)
{
  int n6; // ebx

  sub_3702F(a1, a2, a3, a4, 20);
  for ( n6 = 1; n6 < 6; ++n6 )
    sub_1974C(13 * n6 + 112, a2, n6, a4, 13 * n6 + 112, dword_53C5B, n30);
  memmove(655360, dword_53C5F, 64000);
  free(dword_53C5B);
  free(dword_53C5F);
  return free(n30);
}
