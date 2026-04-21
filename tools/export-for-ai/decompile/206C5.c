/*
 * func-name: sub_206C5
 * func-address: 0x206c5
 * callers: 0x117e7, 0x1a866, 0x1d80b, 0x1d8ba
 * callees: 0x205be, 0x3702f
 */

int __fastcall sub_206C5(__int32 a1, int a2, int a3, int a4)
{
  int v4; // eax
  int result; // eax
  int n5; // edx

  v4 = sub_3702F(a1, a2, a3, a4, 8);
  result = sub_205BE(v4, a2, a3, a4);
  for ( n5 = 5; n5 < 11; ++n5 )
  {
    result = dword_53A45;
    if ( (*(_BYTE *)(80 * n5 + dword_53A45 + 5) & 1) == 0 )
      return result;
  }
  n2_0 = 1;
  return result;
}
