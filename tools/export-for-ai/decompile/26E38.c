/*
 * func-name: sub_26E38
 * func-address: 0x26e38
 * callers: 0x279bc, 0x29300, 0x29daa
 * callees: 0x25a96, 0x26eda, 0x3702f
 */

int __fastcall sub_26E38(__int32 a1, int a2, int a3, int a4)
{
  int v4; // ebx
  int v5; // eax

  sub_3702F(a1, a2, a3, a4, 20);
  v4 = 0;
  do
  {
    v5 = sub_26EDA(0);
    switch ( v5 )
    {
      case 75:
        sub_25A96(75, a2, v4, a4, FDOTHER_DAT__1, 0, 1);
        if ( --n3_3 < 0 )
          n3_3 = 3;
        break;
      case 77:
        sub_25A96(77, a2, v4, a4, FDOTHER_DAT__1, 0, 1);
        if ( ++n3_3 > 3 )
          n3_3 = 0;
        break;
      case 28:
      case 57:
        v4 = 1;
        break;
      case 1:
        v4 = -1;
        break;
    }
  }
  while ( !v4 );
  return v4;
}
