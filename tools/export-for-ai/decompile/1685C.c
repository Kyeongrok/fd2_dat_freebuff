/*
 * func-name: sub_1685C
 * func-address: 0x1685c
 * callers: 0x168b6, 0x16c57, 0x17d6f, 0x17fc0, 0x184c0, 0x1ceed, 0x1e739, 0x272d0, 0x2a0c2
 * callees: 0x3702f, 0x4ed0b
 */

int __fastcall sub_1685C(__int32 a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  sub_3702F(a1, a2, a3, a4, 20);
  return sub_4ED0B(a5, *(_DWORD *)(a7 + 4 * a8 + 6) + a7, a6);
}
