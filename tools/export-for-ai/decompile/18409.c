/*
 * func-name: sub_18409
 * func-address: 0x18409
 * callers: 0x17aed, 0x17e0b, 0x1b932, 0x1bffe, 0x1cff0, 0x2af28
 * callees: 0x182ad, 0x18312, 0x1839b, 0x3702f, 0x3771c
 */

int __fastcall sub_18409(__int32 a1, int a2, int a3, int a4, int n6, int a6, int a7, int a8)
{
  __int32 v8; // eax
  __int32 v9; // eax
  int v10; // eax
  __int32 v11; // eax

  sub_3702F(a1, a2, a3, a4, 24);
  v8 = memmove(a6, a8, 64000);
  if ( n6 < 6 )
  {
    v10 = sub_182AD(v8, a2, n6, a4, 5, a6, a7);
  }
  else
  {
    v9 = 16 * n6 - 96;
    a2 = 5 - v9;
    v10 = sub_182AD(v9, 5 - v9, n6, a4, 5 - v9, a6, a7);
  }
  if ( n6 >= 9 || n6 <= 2 )
  {
    if ( n6 <= 2 )
      sub_18312(v10, a2, n6, a4, 7, a6, a7);
  }
  else
  {
    v11 = 16 * n6 - 48;
    a2 = 7 - v11;
    sub_18312(v11, 7 - v11, n6, a4, 7 - v11, a6, a7);
  }
  if ( n6 < 6 )
    sub_1839B(16 * n6 + 94, a2, n6, a4, 16 * n6 + 94, a6, a7);
  return memmove(655360, a6, 64000);
}
