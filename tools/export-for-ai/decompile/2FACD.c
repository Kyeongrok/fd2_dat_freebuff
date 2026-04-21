/*
 * func-name: sub_2FACD
 * func-address: 0x2facd
 * callers: 0x2cf30, 0x2d80d, 0x2dfc8, 0x2e2b0, 0x2ebe1, 0x2f4d4, 0x2f631, 0x2ff01, 0x30e9d
 * callees: 0x18c6d, 0x3702f
 */

void __fastcall sub_2FACD(__int32 a1, int a2, int a3, int a4, int a5, int n17)
{
  int n1451; // eax

  sub_3702F(a1, a2, a3, a4, 16);
  if ( *(_BYTE *)(n8_0 + 80 * n17 + 6) )
    n1451 = 1451;
  else
    n1451 = 49280;
  if ( ::n17 == 24 && n17 == 17 )
    n1451 = 49280;
  sub_18C6D(a5 + n1451, n8_0, a3, a4, a5 + n1451, 320, n17);
}
