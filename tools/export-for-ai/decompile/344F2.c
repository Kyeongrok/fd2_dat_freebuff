/*
 * func-name: sub_344F2
 * func-address: 0x344f2
 * callers: 0x348ea, 0x34940, 0x34984, 0x34a1e, 0x34a6c, 0x34b9a, 0x34cf1, 0x35191, 0x351e6, 0x35258, 0x3551c, 0x35997, 0x359cb, 0x35e5b, 0x362e8
 * callees: 0x3702f
 */

int __fastcall sub_344F2(__int32 a1, int a2, int a3, int a4, int a5, int a6, char a7)
{
  int result; // eax

  result = sub_3702F(a1, a2, a3, a4, 12);
  while ( a5 <= a6 )
  {
    result = n8_0 + 80 * a5;
    *(_BYTE *)(result + 52) = a7 | *(_BYTE *)(result + 52) & 0xF0;
    ++a5;
  }
  return result;
}
