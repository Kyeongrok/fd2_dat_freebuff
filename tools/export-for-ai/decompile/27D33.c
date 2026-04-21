/*
 * func-name: sub_27D33
 * func-address: 0x27d33
 * callers: 0x2872b, 0x28cbd, 0x28efe, 0x28f65, 0x29620
 * callees: 0x1974c, 0x25a96, 0x26eda, 0x27816, 0x278e7, 0x2810b, 0x3702f, 0x3706e, 0x3771c, 0x4ebff
 */

int __fastcall sub_27D33(__int32 a1, int a2, int a3, int a4)
{
  int v4; // esi
  __int64 v5; // rax
  int n5; // ebx

  sub_3702F(a1, a2, a3, a4, 24);
  v4 = 0;
  dword_53C5B = malloc(64000);
  dword_53C5F = malloc(64000);
  n30 = malloc(64000);
  memmove(dword_53C5F, 655360, 64000);
  v5 = memmove(n30, dword_53C5F, 64000);
  n3_6 = 0;
  n3_3 = 0;
  sub_4EBFF(n30 + 35845, *(_DWORD *)(dword_53F66 + 70) + dword_53F66, 320);
  LODWORD(v5) = sub_2810B(n3_3, n30);
  for ( n5 = 5; n5 >= 0; --n5 )
    sub_1974C(13 * n5 + 112, SHIDWORD(v5), n5, a4, 13 * n5 + 112, dword_53C5B, n30);
  do
  {
    LODWORD(v5) = sub_26EDA(v5, SHIDWORD(v5), n5, a4, 3);
    switch ( (_DWORD)v5 )
    {
      case 0x4D:
        LODWORD(v5) = n16_1 - 1;
        if ( n16_1 - 1 == n3_3 )
          break;
        sub_25A96(v5, SHIDWORD(v5), n5, a4, FDOTHER_DAT__1, 0, 1);
        ++n3_3;
        goto LABEL_7;
      case 0x4B:
        if ( n3_3 )
        {
          sub_25A96(75, SHIDWORD(v5), n5, a4, FDOTHER_DAT__1, 0, 1);
          --n3_3;
          goto LABEL_13;
        }
        break;
      case 0x48:
        if ( n3_3 >= 2 )
        {
          sub_25A96(72, SHIDWORD(v5), n5, a4, FDOTHER_DAT__1, 0, 1);
          n3_3 -= 2;
LABEL_13:
          if ( n3_3 < n3_6 )
          {
            n3_6 -= 2;
            sub_278E7(n3_3, SHIDWORD(v5), n5, a4);
          }
          goto LABEL_9;
        }
        break;
      case 0x50:
        LODWORD(v5) = n16_1 - 2;
        if ( n16_1 - 2 > n3_3 )
        {
          sub_25A96(v5, SHIDWORD(v5), n5, a4, FDOTHER_DAT__1, 0, 1);
          n3_3 += 2;
LABEL_7:
          LODWORD(v5) = n3_3 - n3_6;
          if ( n3_3 - n3_6 >= 6 )
          {
            n3_6 += 2;
            sub_27816(v5, SHIDWORD(v5), n5, a4);
          }
LABEL_9:
          LODWORD(v5) = sub_2810B(n3_3, 655360);
        }
        break;
      case 0x1C:
      case 0x39:
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
