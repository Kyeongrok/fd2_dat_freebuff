/*
 * func-name: sub_32999
 * func-address: 0x32999
 * callers: 0x3231b, 0x3460b, 0x34673
 * callees: 0x10b4e, 0x111ba, 0x11eb0, 0x11eee, 0x127a9, 0x127e0, 0x129ec, 0x17aa9, 0x25a96, 0x3702f, 0x3706e, 0x3771c, 0x3776e, 0x4e381, 0x4ebab
 */

int __fastcall sub_32999(__int32 a1, int a2, int n34, int n4, int n2)
{
  int v5; // eax
  int n6; // edi
  __int64 n655360; // rax
  int n6_1; // esi
  int n6_2; // esi
  __int16 *v10; // ebp
  int n6_3; // esi
  _BYTE *v13; // [esp+0h] [ebp-20h]
  _BYTE *v14; // [esp+4h] [ebp-1Ch]
  int v15; // [esp+8h] [ebp-18h]
  int n12; // [esp+Ch] [ebp-14h]

  v5 = sub_3702F(a1, a2, n34, n4, 60);
  v13 = sub_111BA(v5, a2, n34, n4, (int)aFdotherDat, 0, 95);// "FDOTHER.DAT"
  v14 = sub_111BA((__int32)v13, a2, n34, n4, (int)aFdotherDat, 0, 9);// "FDOTHER.DAT"
  v15 = malloc(153216);
  n655360 = memmove(v15, n655360_0, 153216);
  n6 = n6_0;
  LODWORD(n655360) = sub_10B4E(n655360, SHIDWORD(n655360), n34, n4, n2);
  for ( n12 = 0; n12 < 12; ++n12 )
  {
    if ( n12 == 1 )
      sub_25A96(n655360, SHIDWORD(n655360), n34, n4, (int)v13, 0, 1);
    n655360 = memmove(n655360_0, v15, 153216);
    v10 = (__int16 *)&v14[*(_DWORD *)&v14[4 * n12 + 6]];
    for ( n6_1 = n6; n6_1 < n6_0; ++n6_1 )
    {
      LODWORD(n655360) = n8_0 + 80 * n6_1;
      HIDWORD(n655360) = *(unsigned __int8 *)n655360;
      n34 = *(unsigned __int8 *)(n655360 + 1);
      if ( SHIDWORD(n655360) >= n9 - 1
        && SHIDWORD(n655360) <= dword_51A87 + n9
        && n34 >= ::n34
        && n34 <= dword_51A8B + ::n34 + 1 )
      {
        n4 = n655360_0 + 32904 + 24 * (HIDWORD(n655360) - n9 - 1);
        HIDWORD(n655360) = 1216 * (n34 - ::n34);
        sub_4EBAB((_BYTE *)(n4 + 10944 * (n34 - ::n34) - 2736), v10, 456);
      }
    }
    sub_11EB0(n655360_0 + 32904, SHIDWORD(n655360), n34, n4, 656644, 320, n655360_0 + 32904, 456, 312, 192);
    switch ( n12 )
    {
      case 6:
        n655360 = memmove(n655360_0, v15, 153216);
        for ( n6_2 = 0; n6_2 < n6; ++n6_2 )
        {
          HIDWORD(n655360) = 80 * n6_2;
          if ( (*(_BYTE *)(80 * n6_2 + n8_0 + 5) & 1) == 0 )
            sub_127E0(n8_0, SHIDWORD(n655360), n34, n4, n6_2);
        }
        n655360_0 -= 3648;
        while ( n6_2 < n6_0 )
        {
          HIDWORD(n655360) = n8_0;
          if ( (*(_BYTE *)(n8_0 + 80 * n6_2 + 5) & 1) == 0 )
            sub_127E0(80 * n6_2, n8_0, n34, n4, n6_2);
          ++n6_2;
        }
        LODWORD(n655360) = n655360_0 + 3648;
        goto LABEL_21;
      case 7:
        sub_11EEE(n655360_0 + 32904, SHIDWORD(n655360), n34, n4, n655360_0 + 32904, 456, 13, 8, n9, ::n34);
        for ( n6_3 = 0; n6_3 < n6; ++n6_3 )
        {
          HIDWORD(n655360) = n8_0;
          if ( (*(_BYTE *)(n8_0 + 80 * n6_3 + 5) & 1) == 0 )
            sub_127E0(80 * n6_3, n8_0, n34, n4, n6_3);
        }
        n655360_0 -= 2280;
        while ( n6_3 < n6_0 )
        {
          HIDWORD(n655360) = 80 * n6_3;
          if ( (*(_BYTE *)(80 * n6_3 + n8_0 + 5) & 1) == 0 )
            sub_127E0(n8_0, SHIDWORD(n655360), n34, n4, n6_3);
          ++n6_3;
        }
        LODWORD(n655360) = n655360_0 + 2280;
LABEL_21:
        n655360_0 = n655360;
        sub_129EC(n655360, SHIDWORD(n655360), n34, n4);
LABEL_22:
        n655360 = memmove(v15, n655360_0, 153216);
        break;
      case 8:
        sub_11EEE(n655360_0 + 32904, SHIDWORD(n655360), n34, n4, n655360_0 + 32904, 456, 13, 8, n9, ::n34);
        sub_127A9(n655360, SHIDWORD(n655360), n34, n4);
        goto LABEL_22;
    }
    LOWORD(n655360) = sub_4E381();
    LODWORD(n655360) = sub_17AA9(n655360, SHIDWORD(n655360), n34, n4, 1);
  }
  free(v14);
  free(v15);
  return free(v13);
}
