/*
 * func-name: sub_15E71
 * func-address: 0x15e71
 * callers: 0x10010, 0x165ac, 0x16b43, 0x1a30b, 0x1e98c, 0x1eb05, 0x1f42d
 * callees: 0x3702f, 0x3776e, 0x4ec7c
 */

int __fastcall sub_15E71(__int32 a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  sub_3702F(a1, a2, a3, a4, 20);
  sub_4EC7C(a5, a6, a7);
  return free(a5);
}
