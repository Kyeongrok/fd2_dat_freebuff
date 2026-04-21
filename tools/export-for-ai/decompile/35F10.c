/*
 * func-name: sub_35F10
 * func-address: 0x35f10
 * callers: 0x2548c, 0x35677, 0x35c40, 0x35ec1
 * callees: 0x1db65, 0x3702f
 */

__int32 __fastcall sub_35F10(__int32 a1, int a2, int n8, int n4, int n18)
{
  int v5; // eax

  v5 = sub_3702F(a1, a2, n8, n4, 8);
  while ( n18 < n6_0 )
  {
    v5 = 80 * n18;
    n8 = n8_0;
    *(_WORD *)(n8_0 + 80 * n18++ + 64) = 0;
  }
  return sub_1DB65(v5, n18, n8, n4);
}
