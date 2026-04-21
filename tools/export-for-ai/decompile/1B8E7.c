/*
 * func-name: sub_1B8E7
 * func-address: 0x1b8e7
 * callers: 0x190ac, 0x1aa1d, 0x1bbdc, 0x20c6f, 0x21082, 0x240fa, 0x28cbd, 0x28f65, 0x2aa00, 0x35a0d
 * callees: 0x3702f, 0x3771c
 */

int __fastcall sub_1B8E7(__int32 a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // ebx
  int result; // eax

  sub_3702F(a1, a2, a3, a4, 20);
  v6 = 80 * a5 + dword_53A45;
  result = memmove(v6 + 2 * a6 + 10, v6 + 2 * a6 + 12, 2 * (7 - a6));
  *(_BYTE *)(v6 + 24) = 0x80;
  return result;
}
