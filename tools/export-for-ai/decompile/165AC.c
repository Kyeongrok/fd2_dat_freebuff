/*
 * func-name: sub_165AC
 * func-address: 0x165ac
 * callers: 0x15f84
 * callees: 0x12cea, 0x15e71, 0x15e9e, 0x168b6, 0x3702f, 0x3706e, 0x3790a, 0x4e381, 0x4ecbf
 */

int *__fastcall sub_165AC(__int32 a1, int a2, int a3, int a4, int a5, int a6, int n2)
{
  int v7; // eax
  int v8; // edi
  int i; // esi
  int v10; // ebx
  int v11; // ecx
  int v12; // edx
  int v13; // eax
  __int32 v14; // eax
  int n5; // esi
  int v16; // esi
  int v18; // [esp+4h] [ebp+4h]
  int v19; // [esp+8h] [ebp+8h]

  v7 = sub_3702F(a1, a2, a3, a4, 40);
  if ( n2 )
  {
    n6_5 = 0;
    sub_12CEA(v7, a2, a3, a4, a5, a6);
    n6_5 = 1;
    v18 = 24 * n10 + 4;
    v19 = 24 * n2_1 + 4;
    v8 = n2_1 + n10;
    if ( n2_1 + n10 )
    {
      for ( i = 0; i <= v8; ++i )
      {
        v10 = v18 - i * (v18 - 5) / v8;
        v11 = v19 - i * (v19 - n2) / v8;
        v12 = dword_53A81;
        sub_15E9E(
          dword_53A81 + *(__int16 *)(dword_53A81 + 6),
          dword_53A81,
          v10,
          v11,
          (__int16 *)(dword_53A81 + *(__int16 *)(dword_53A81 + 6)),
          655360,
          320,
          v10,
          v11);
        dword_53A18[0] = v13;
        j___delay(10);
        LOWORD(v14) = sub_4E381();
        sub_15E71(v14, v12, v10, v11, dword_53A18[0], 655360, 320);
      }
    }
  }
  else if ( n1832 == 1832 )
  {
    n2 = 2;
  }
  else if ( n1832 == 36887 )
  {
    n2 = 112;
  }
  for ( n5 = 0; n5 < 5; ++n5 )
    dword_53A18[n5] = malloc(26668);
  v16 = 320 * n2 + 5;
  sub_4ECBF(dword_53A18[0], 310, 86, 655360, v16);
  sub_168B6(655360, 320, 5, n2, 4, 2);
  j___delay(10);
  sub_4ECBF(dword_53A1C, 310, 86, 655360, v16);
  sub_168B6(655360, 320, 5, n2, 8, 3);
  j___delay(10);
  sub_4ECBF(dword_53A20, 310, 86, 655360, v16);
  sub_168B6(655360, 320, 5, n2, 12, 4);
  j___delay(10);
  sub_4ECBF(dword_53A24, 310, 86, 655360, v16);
  sub_168B6(655360, 320, 5, n2, 16, 5);
  j___delay(10);
  sub_4ECBF(dword_53A28, 310, 86, 655360, v16);
  sub_168B6(655360, 320, 5, n2, 19, 5);
  sub_4E381();
  return dword_53A18;
}
