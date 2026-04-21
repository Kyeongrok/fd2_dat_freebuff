/*
 * func-name: sub_196CB
 * func-address: 0x196cb
 * callers: 0x10010, 0x16f55, 0x190ac, 0x19df7, 0x1a866, 0x1aa1d, 0x1e292, 0x35854, 0x35a0d, 0x35fcf
 * callees: 0x11cac, 0x1974c, 0x3702f, 0x3771c, 0x3776e
 */

int __fastcall sub_196CB(__int32 a1, int a2, int a3, int a4)
{
  int n6; // ebx
  __int32 v5; // eax

  sub_3702F(a1, a2, a3, a4, 20);
  for ( n6 = 1; n6 < 6; ++n6 )
    sub_1974C(13 * n6 + 112, dword_53C5B, dword_53C63);
  memmove(655360, dword_53C5F, 64000);
  free(dword_53C5B);
  free(dword_53C5F);
  v5 = free(dword_53C63);
  return sub_11CAC(v5, a2, n6, a4, 0);
}
