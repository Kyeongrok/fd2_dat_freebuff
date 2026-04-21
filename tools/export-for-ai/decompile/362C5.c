/*
 * func-name: sub_362C5
 * func-address: 0x362c5
 * callers: 0x117e7, 0x16f55, 0x190ac, 0x1a813, 0x1aa1d, 0x1d80b, 0x1d8ba
 * callees: 0x3702f
 */

int __fastcall sub_362C5(__int32 a1, int a2, int a3, int a4)
{
  int result; // eax

  sub_3702F(a1, a2, a3, a4, 4);
  ++*(_BYTE *)(n8_1 + 16);
  result = dword_53A55;
  *(_BYTE *)(dword_53A55 + 3) = n999 + 1;
  return result;
}
