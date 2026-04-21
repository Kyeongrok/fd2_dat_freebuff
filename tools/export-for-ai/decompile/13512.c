/*
 * func-name: sub_13512
 * func-address: 0x13512
 * callers: 0x13a9f, 0x16f55, 0x18890, 0x18d8c, 0x1a30b, 0x1bbdc, 0x360b6, 0x3623c
 * callees: 0x3702f
 */

int __fastcall sub_13512(__int32 a1, int a2, int a3, int a4, int a5)
{
  int result; // eax

  sub_3702F(a1, a2, a3, a4, 4);
  result = 80 * a5;
  *(_BYTE *)(dword_53A45 + 80 * a5 + 5) |= 0x80u;
  return result;
}
