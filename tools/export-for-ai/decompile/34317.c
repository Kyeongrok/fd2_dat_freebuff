/*
 * func-name: sub_34317
 * func-address: 0x34317
 * callers: 0x33faf
 * callees: 0x3702f
 */

int __fastcall sub_34317(__int32 a1, int a2, int a3, int a4, int a5, int a6)
{
  char n2; // cl
  unsigned __int8 n6; // dl
  int n6_1; // eax

  sub_3702F(a1, a2, a3, a4, 12);
  n2 = 0;
  if ( a5 % 8 > 3 )
    n2 = 2;
  for ( n6 = 0; ; ++n6 )
  {
    n6_1 = n6;
    if ( n6 >= 6u )
      break;
    *(_BYTE *)(a6 + n6) = n6 + n2 + (a5 & 0xF8);
  }
  return n6_1;
}
