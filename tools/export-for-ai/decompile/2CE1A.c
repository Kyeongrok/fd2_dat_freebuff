/*
 * func-name: sub_2CE1A
 * func-address: 0x2ce1a
 * callers: 0x2ff01, 0x31266
 * callees: 0x25a96, 0x25b45, 0x2eb9f, 0x3702f
 */

int __fastcall sub_2CE1A(__int32 a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, char a9)
{
  sub_3702F(a1, a2, a3, a4, 24);
  switch ( a9 )
  {
    case 0:
      byte_5412F = 0;
      n36 = 1;
      return 20;
    case 3:
      return 60;
    case 6:
      return 20;
    case 1:
    case 7:
      if ( !byte_5412F )
        sub_2EB9F(a6, 0, a7, a8, -1);
      byte_5412F ^= 1u;
      return 0;
    case 4:
      sub_2EB9F(a6, 0, a7, a8, -1);
      return 0;
    case 5:
      sub_2EB9F(a6, (int)(unsigned __int8)n36 >> 1, a7, a8, -1);
      if ( n36 == 6 )
      {
        sub_25A96(6, 0, a3, a4, dword_54153, 1, 1);
      }
      else if ( n36 == 36 )
      {
        sub_25B45(36, 0, a3, a4, dword_54153, 2, 1);
      }
      return (unsigned __int8)++n36 < 0x2Cu && (unsigned __int8)n36 > 0x10u;
    default:
      return 0;
  }
}
