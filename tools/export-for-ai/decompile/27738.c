/*
 * func-name: sub_27738
 * func-address: 0x27738
 * callers: 0x2872b, 0x28cbd, 0x28f65
 * callees: 0x1974c, 0x272d0, 0x3702f, 0x3706e, 0x3771c, 0x4ebff
 */

void __fastcall sub_27738(__int32 a1, int a2, int n6, int a4, int n6_1, int a6, unsigned __int8 a7)
{
  __int64 v7; // rax
  int n5; // ebx

  sub_3702F(a1, a2, n6, a4, 28);
  dword_53C5B = malloc(64000);
  dword_53C5F = malloc(64000);
  n30 = malloc(64000);
  memmove(dword_53C5F, 655360, 64000);
  v7 = memmove(n30, dword_53C5F, 64000);
  sub_4EBFF(n30 + 35845, *(_DWORD *)(dword_53F66 + 70) + dword_53F66, 320);
  sub_272D0(a7, SHIDWORD(v7), n6, a4, n6_1, a6, n3_3, n30, a7);
  for ( n5 = 5; n5 >= 0; --n5 )
    sub_1974C(13 * n5 + 112, SHIDWORD(v7), n5, a4, 13 * n5 + 112, dword_53C5B, n30);
}
