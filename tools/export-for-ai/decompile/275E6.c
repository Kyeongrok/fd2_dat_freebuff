/*
 * func-name: sub_275E6
 * func-address: 0x275e6
 * callers: 0x2872b, 0x28cbd, 0x28f65
 * callees: 0x25a96, 0x26eda, 0x272d0, 0x27816, 0x278e7, 0x3702f
 */

int __fastcall sub_275E6(__int32 a1, int a2, int a3, int a4, int n6, int a6, unsigned __int8 a7)
{
  int v7; // eax
  int v8; // edi

  v7 = sub_3702F(a1, a2, a3, a4, 36);
  v8 = 0;
  do
  {
    v7 = sub_26EDA(v7, a2, n6, a4, 1);
    switch ( v7 )
    {
      case 77:
        v7 = n6 - 1;
        if ( n6 - 1 == n3_3 )
          break;
        sub_25A96(v7, a2, n6, a4, FDOTHER_DAT__1, 0, 1);
        ++n3_3;
        goto LABEL_5;
      case 75:
        if ( n3_3 )
        {
          sub_25A96(75, a2, n6, a4, FDOTHER_DAT__1, 0, 1);
          --n3_3;
          goto LABEL_11;
        }
        break;
      case 72:
        if ( n3_3 >= 2 )
        {
          sub_25A96(72, a2, n6, a4, FDOTHER_DAT__1, 0, 1);
          n3_3 -= 2;
LABEL_11:
          if ( n3_3 < n3_6 )
          {
            n3_6 -= 2;
            sub_278E7();
          }
          goto LABEL_7;
        }
        break;
      case 80:
        v7 = n6 - 2;
        if ( n6 - 2 > n3_3 )
        {
          sub_25A96(v7, a2, n6, a4, FDOTHER_DAT__1, 0, 1);
          n3_3 += 2;
LABEL_5:
          if ( n3_3 - n3_6 >= 6 )
          {
            n3_6 += 2;
            sub_27816();
          }
LABEL_7:
          LOBYTE(v7) = sub_272D0(a7, a2, n6, a4, n6, a6, n3_3, 655360, a7);
        }
        break;
      case 28:
      case 57:
        v8 = 1;
        break;
      case 1:
        v8 = -1;
        break;
    }
  }
  while ( !v8 );
  return v8;
}
