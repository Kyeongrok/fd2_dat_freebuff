/*
 * func-name: sub_3623C
 * func-address: 0x3623c
 * callers: 0x117e7, 0x16f55, 0x190ac, 0x1a813, 0x1aa1d, 0x1d80b, 0x1d8ba
 * callees: 0x13512, 0x3702f, 0x4ebe3
 */

int __fastcall sub_3623C(__int32 a1, int a2, int a3, int a4)
{
  int v4; // eax
  int v5; // ebx

  v4 = sub_3702F(a1, a2, a3, a4, 16);
  *(_BYTE *)(dword_53A55 + 9) = n999 + 1;
  v5 = sub_4EBE3(v4);
  sub_13512(v5 / 3, *(unsigned __int8 *)(n8_1 + 21) + v5 % 3, v5, 3, *(unsigned __int8 *)(n8_1 + 21) + v5 % 3);
  return sub_13512(
           (v5 + 1) / 3,
           *(unsigned __int8 *)(n8_1 + 21) + (v5 + 1) % 3,
           3,
           *(unsigned __int8 *)(n8_1 + 21),
           *(unsigned __int8 *)(n8_1 + 21) + (v5 + 1) % 3);
}
