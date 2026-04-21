/*
 * func-name: sub_33499
 * func-address: 0x33499
 * callers: 0x1b41d, 0x20872, 0x239bd, 0x23b5f, 0x2af28, 0x334d9, 0x335aa
 * callees: 0x3702f
 */

int __fastcall sub_33499(__int32 a1, int a2, int a3, int a4, int a5)
{
  int n16; // edx

  sub_3702F(a1, a2, a3, a4, 8);
  for ( n16 = 0; n16 < n16_1; ++n16 )
  {
    if ( *(unsigned __int8 *)(80 * n16 + n5_0 + 8) == a5 )
      return 1;
  }
  return 0;
}
