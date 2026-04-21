/*
 * func-name: sub_20926
 * func-address: 0x20926
 * callers: 0x117e7, 0x1a866, 0x1d80b, 0x1d8ba
 * callees: 0x205be, 0x34894, 0x3702f
 */

int __fastcall sub_20926(__int32 a1, int a2, int a3, int a4)
{
  int v4; // eax
  int result; // eax

  v4 = sub_3702F(a1, a2, a3, a4, 8);
  result = sub_205BE(v4, a2, a3, a4);
  if ( n999 > 6 )
  {
    result = sub_34894(64);
    if ( result )
      n2_0 = 1;
  }
  return result;
}
