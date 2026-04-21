/*
 * func-name: sub_361B0
 * func-address: 0x361b0
 * callers: 0x2548c, 0x33e3c, 0x360b6
 * callees: 0x11df2, 0x3702f, 0x3790a
 */

__int32 __fastcall sub_361B0(__int32 a1, int a2, int a3, int a4)
{
  int v4; // eax
  int n64; // ebx
  __int32 result; // eax
  int n62; // ebx

  v4 = sub_3702F(a1, a2, a3, a4, 20);
  for ( n64 = 0; n64 < 64; ++n64 )
  {
    sub_11DF2(v4, a2, n64, a4, 0, 255, n64);
    v4 = j___delay(8);
  }
  result = j___delay(400);
  for ( n62 = 62; n62 >= 0; --n62 )
  {
    sub_11DF2(result, a2, n62, a4, 0, 255, n62);
    result = j___delay(8);
  }
  return result;
}
