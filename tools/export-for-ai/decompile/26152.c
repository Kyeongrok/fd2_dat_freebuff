/*
 * func-name: sub_26152
 * func-address: 0x26152
 * callers: 0x25bf4, 0x25ebb
 * callees: 0x10620, 0x11019, 0x111ba, 0x11d40, 0x15f84, 0x16559, 0x1956b, 0x197e5, 0x19953, 0x1f525, 0x1f882, 0x25977, 0x25a96, 0x265ec, 0x2670e, 0x26996, 0x2968d, 0x2af28, 0x3702f, 0x3706e, 0x370f0, 0x37324, 0x3759c, 0x3776e, 0x37910, 0x4e381, 0x4e809, 0x4e98d
 */

bool __fastcall sub_26152(__int32 a1, int a2, int a3, int a4)
{
  int v4; // esi
  int i; // ebx
  __int32 v6; // eax
  __int32 v7; // eax
  int v8; // eax
  __int32 v9; // eax
  int v10; // eax
  __int32 v11; // eax
  int v12; // ebx
  __int32 v13; // eax
  __int32 v14; // eax
  __int64 v16; // rax
  __int16 *v17; // esi
  __int64 v18; // rax
  int v19; // eax
  int v20; // ebx
  unsigned int n4; // eax
  __int32 v22; // eax
  int v23; // edx
  __int32 n3; // eax
  int v25; // [esp+4h] [ebp-18h] BYREF
  unsigned __int8 v26; // [esp+8h] [ebp-14h]
  unsigned __int8 n16; // [esp+Ch] [ebp-10h]
  int v28; // [esp+18h] [ebp-4h]

  sub_3702F(a1, a2, a3, a4, 68);
  v28 = a3;
  v26 = 0;
  LOWORD(v25) = unk_52405;
  BYTE2(v25) = unk_52407;
  n16 = 0;
  if ( dword_53A45 )
    free(dword_53A45);
  dword_53A45 = 0;
  if ( dword_53A55 )
    free(dword_53A55);
  dword_53A55 = 0;
  if ( n7 )
    free(n7);
  n7 = 0;
  if ( dword_53A51 )
    free(dword_53A51);
  dword_53A51 = 0;
  if ( dword_53A61 )
    free(dword_53A61);
  v4 = fopen((int)aFdiconB24_2, (int)aRb_4);    // "rb"
  dword_53BDF = 0;
  for ( i = 0; i < dword_53BFB; ++i )
  {
    a4 = dword_53BF7;
    sub_11019(
      *(unsigned __int8 *)(dword_53BF7 + 80 * i + 7),
      a2,
      i,
      dword_53BF7,
      *(unsigned __int8 *)(dword_53BF7 + 80 * i + 7),
      v4);
  }
  fclose(v4);
  if ( byte_523E7[n17] )
  {
    v6 = memset(655360, 0, 64000);
    sub_11D40(v6, a2, i, a4, 0, 255, 0);
    v8 = sub_1956B(v7, a2, i, a4, 75);
    sub_15F84((unsigned __int8 *)&v25 + 3, v8, a2, a4, i, arg0, 410, 693540, 320, 205, 76, 74, 19, 1);
    v10 = sub_16559(v9, a2, i, a4, 0);
    dword_53A51 = 1;
    sub_19953(v10, a2, i, a4);
    v12 = v11;
    dword_53A51 = 0;
    sub_197E5(v11, a2, v11, a4);
    v13 = sub_26996(0, v25);
    if ( v12 != -1 && !n3_3 )
    {
      dword_53F66 = (int)sub_111BA(v13, a2, v12, a4, (int)aFdotherDat, dword_53F66, 13);// "FDOTHER.DAT"
      sub_2968D(0);
      free(dword_53F66);
    }
    do
    {
      dword_53A45 = dword_53BF7;
      v14 = sub_2AF28();
      dword_53A45 = 0;
    }
    while ( !v14 );
    sub_11D40(v14, a2, v12, a4, 0, 255, 255);
    return 0;
  }
  n7 = malloc(153216);
  v16 = sub_4E809(n17);
  dword_53F56 = v16;
  LOBYTE(i) = *(_BYTE *)v16;
  LODWORD(v16) = sub_1F882(v16, SHIDWORD(v16), i, a4);
  sub_25977(v16, SHIDWORD(v16), i, a4, 10, 0);
  n5 = 0;
  v17 = (__int16 *)sub_111BA(
                     *((unsigned __int8 *)&v25 + (unsigned __int8)i),
                     SHIDWORD(v16),
                     i,
                     a4,
                     (int)aFdotherDat,
                     0,
                     *((unsigned __int8 *)&v25 + (unsigned __int8)i));// "FDOTHER.DAT"
  sub_4E98D(v17, 0, 0, n7 + 32904, 456, -1);
  LODWORD(v16) = free(v17);
  dword_53F5A = 0;
  dword_53F5A = (int)sub_111BA(v16, SHIDWORD(v16), i, a4, (int)aFdotherDat, 0, 10);// "FDOTHER.DAT"
  v18 = ((__int64 (*)(void))sub_265EC)();
  sub_1F525(v18, SHIDWORD(v18), i, a4);
  LOWORD(v19) = sub_4E381();
  do
  {
    sub_265EC(v19);
    v20 = MEMORY[0x46C];
    while ( !sub_10620() )
    {
      n4 = MEMORY[0x46C] - (__int16)v20;
      if ( n4 >= 4 )
      {
        if ( ++dword_53F52 == 4 )
          dword_53F52 = 0;
        sub_265EC(n4);
        LOWORD(v20) = MEMORY[0x46C];
      }
    }
    HIBYTE(::n3) = 16;
    v22 = int386(22, &::n3, &::n3);
    v23 = HIBYTE(::n3);
    switch ( HIBYTE(::n3) )
    {
      case 0xE0u:
      case 0x52u:
        HIBYTE(::n3) = 28;
        break;
      case 0x22u:
        if ( ++n16 == 10 )
          n16 = 0;
        sub_25977(n16, 34, v20, a4, n16, 0);
        break;
      case 0x4Du:
        sub_25A96(v22, 77, v20, a4, FDOTHER_DAT__1, 0, 1);
        if ( --n5 < 0 )
          n5 = 5;
        break;
      case 0x4Bu:
        sub_25A96(v22, 75, v20, a4, FDOTHER_DAT__1, 0, 1);
        if ( ++n5 > 5 )
          n5 = 0;
        break;
      default:
        v20 = *(unsigned __int8 *)(dword_53F56 + 2);
        if ( __PAIR64__(HIBYTE(::n3), n5) == __PAIR64__(v20, *(unsigned __int8 *)(dword_53F56 + 1)) )
          n5 = 5;
        break;
    }
    n3 = HIBYTE(::n3);
    if ( HIBYTE(::n3) == 28 || (n3 = (unsigned __int8)::n3, (unsigned __int8)::n3 == 32) )
    {
      if ( n5 != 2 )
        sub_25A96(n3, v23, v20, a4, FDOTHER_DAT__1, 1, 3);
      v26 = sub_2670E();
    }
    v19 = v26;
  }
  while ( !v26 );
  free(dword_53F5A);
  return n5 != 2;
}
