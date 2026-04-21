/*
 * func-name: sub_177FC
 * func-address: 0x177fc
 * callers: 0x16f55, 0x1728c, 0x18d8c, 0x19df7, 0x1bbdc
 * callees: 0x17898, 0x3702f
 */

int __fastcall sub_177FC(__int32 a1, int a2, int a3, int a4, int a5, _DWORD *a6)
{
  int n77; // eax

  sub_3702F(a1, a2, a3, a4, 16);
  n77 = sub_17898(a5, a6);
  switch ( n77 )
  {
    case 1:
      return -1;
    case 57:
    case 28:
      return 1;
    case 72:
      if ( !*a6 )
      {
        n3_3 = 0;
        return 0;
      }
      break;
    case 80:
      if ( !a6[3] )
      {
        n3_3 = 3;
        return 0;
      }
      break;
    case 75:
      n3_3 = 1;
      return 0;
    default:
      if ( n77 == 77 && !a6[2] )
        n3_3 = 2;
      break;
  }
  return 0;
}
