/*
 * func-name: sub_32975
 * func-address: 0x32975
 * callers: 0x13a9f, 0x3231b, 0x336a0, 0x33c9d, 0x34b9a
 * callees: 0x3702f
 */

int __fastcall sub_32975(__int32 a1, int a2, int a3, int a4, int a5)
{
  int result; // eax

  sub_3702F(a1, a2, a3, a4, 4);
  result = 80 * a5;
  *(_BYTE *)(n8_0 + 80 * a5 + 5) = 1;
  return result;
}
