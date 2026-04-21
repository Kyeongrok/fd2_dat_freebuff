/*
 * func-name: sub_34D64
 * func-address: 0x34d64
 * callers: 0x117e7, 0x16f55, 0x190ac, 0x1a813, 0x1aa1d, 0x1d80b, 0x1d8ba, 0x34d92
 * callees: 0x3702f
 */

int __fastcall sub_34D64(__int32 a1, int a2, int a3, int a4)
{
  int n8; // eax
  int n18; // edx

  n8 = sub_3702F(a1, a2, a3, a4, 8);
  for ( n18 = 0; n18 < 18; ++n18 )
  {
    n8 = n8_0;
    *(_BYTE *)(80 * (n18 + 10) + n8_0 + 52) &= 0x80u;
  }
  return n8;
}
