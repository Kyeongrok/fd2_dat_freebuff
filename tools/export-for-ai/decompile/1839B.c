/*
 * func-name: sub_1839B
 * func-address: 0x1839b
 * callers: 0x17aed, 0x18409
 * callees: 0x3702f, 0x3771c
 */

int __fastcall sub_1839B(__int32 a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int n102; // esi
  int result; // eax
  int n102_1; // ebx

  sub_3702F(a1, a2, a3, a4, 28);
  n102 = 102;
  result = a5 + 102;
  if ( a5 + 102 >= 200 )
    n102 = 200 - a5;
  for ( n102_1 = 0; n102_1 < n102; ++n102_1 )
    result = memmove(320 * n102_1 + a6 + 5 + 320 * a5, 320 * n102_1 + a7 + 30085, 310);
  return result;
}
