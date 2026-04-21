/*
 * func-name: sub_35997
 * func-address: 0x35997
 * callers: 0x117e7, 0x16f55, 0x190ac, 0x1a813, 0x1aa1d, 0x1d80b, 0x1d8ba
 * callees: 0x344f2, 0x3702f
 */

int __fastcall sub_35997(__int32 a1, int a2, int a3, int a4, int a5)
{
  int result; // eax

  sub_3702F(a1, a2, a3, a4, 16);
  result = 80 * a5;
  if ( *(_BYTE *)(n8_0 + 80 * a5 + 6) )
    return sub_344F2(result, n8_0, a3, a4, 39, 44, 0);
  return result;
}
