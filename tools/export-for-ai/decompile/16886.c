/*
 * func-name: sub_16886
 * func-address: 0x16886
 * callers: 0x184c0, 0x187d6, 0x1b41d, 0x1f894, 0x1ff79, 0x272d0, 0x279bc, 0x28b41, 0x29300, 0x29daa, 0x2af28
 * callees: 0x3702f, 0x4e98d
 */

char __fastcall sub_16886(__int32 a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  sub_3702F(a1, a2, a3, a4, 32);
  return sub_4E98D((__int16 *)(*(_DWORD *)(a7 + 4 * a8 + 6) + a7), 0, 0, a5, a6, -1);
}
