/*
 * func-name: sub_1F882
 * func-address: 0x1f882
 * callers: 0x10010, 0x1f73f, 0x1f81e, 0x1f894, 0x22e5c, 0x233c6, 0x235f9, 0x23e74, 0x244b6, 0x250cc, 0x25ebb, 0x26152, 0x279bc, 0x29300, 0x29daa, 0x2cf30, 0x2d80d, 0x2dfc8, 0x2e2b0, 0x2fb2c, 0x2ff01, 0x31529, 0x31c49, 0x33faf
 * callees: 0x3702f
 */

int __fastcall sub_1F882(__int32 a1, int a2, int a3, int a4)
{
  int result; // eax
  int n64; // ebx

  result = sub_3702F(a1, a2, a3, a4, 20);
  for ( n64 = 0; n64 < 64; ++n64 )
  {
    sub_11D40(result, a2, n64, a4, 0, 255, n64);
    result = j___delay(2);
  }
  return result;
}
