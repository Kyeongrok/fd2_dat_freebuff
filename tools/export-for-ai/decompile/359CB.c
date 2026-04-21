/*
 * func-name: sub_359CB
 * func-address: 0x359cb
 * callers: 0x117e7, 0x16f55, 0x190ac, 0x1a813, 0x1aa1d, 0x1d80b, 0x1d8ba
 * callees: 0x344f2, 0x3702f
 */

int __fastcall sub_359CB(__int32 a1, int a2, int a3, int a4, int a5)
{
  int result; // eax
  int n8; // edx
  int v7; // eax

  sub_3702F(a1, a2, a3, a4, 16);
  result = 80 * a5;
  n8 = n8_0;
  if ( *(_BYTE *)(n8_0 + 80 * a5 + 6) )
  {
    v7 = sub_344F2(result, n8_0, a3, a4, 23, 24, 0);
    return sub_344F2(v7, n8, a3, a4, 53, 56, 0);
  }
  return result;
}
