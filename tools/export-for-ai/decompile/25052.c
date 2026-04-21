/*
 * func-name: sub_25052
 * func-address: 0x25052
 * callers: 0x250cc
 * callees: 0x11df2, 0x3702f, 0x3790a
 */

int __fastcall sub_25052(__int32 a1, int a2, int a3, int a4, int a5, int a6)
{
  int result; // eax

  result = sub_3702F(a1, a2, a3, a4, 24);
  while ( a5 >= 0 )
  {
    sub_11DF2(result, a2, a5, a4, 0, 255, a5);
    result = j___delay(a6);
    --a5;
  }
  return result;
}
