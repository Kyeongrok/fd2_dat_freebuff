/*
 * func-name: sub_31C49
 * func-address: 0x31c49
 * callers: 0x31529
 * callees: 0x10620, 0x1088d, 0x111ba, 0x11d40, 0x11eb0, 0x15f84, 0x168b6, 0x17aa9, 0x1f882, 0x25977, 0x2e9a8, 0x2eb9f, 0x311e5, 0x3702f, 0x3706e, 0x3771c, 0x3776e, 0x37910, 0x4e381, 0x4e98d, 0x4ebe3, 0x4ebff
 */

void __usercall sub_31C49(
        __int32 _FDOTHER.DAT_@<eax>,
        int a2@<edx>,
        int a3@<ecx>,
        int a4@<ebx>,
        unsigned __int8 *a5@<edi>)
{
  int v5; // ebx
  int v6; // esi
  __int64 v7; // rax
  int n658255; // ebx
  int arg8; // esi
  __int16 *v10; // edi
  __int64 v11; // rax
  unsigned __int8 v12; // bl
  _BYTE *v13; // ebp
  int v14; // ebx
  unsigned __int8 *arg0; // ebx
  int n20; // edi
  int arg4; // edi
  unsigned __int8 *n220_1; // edi
  unsigned __int8 n12; // bl
  int v20; // eax
  int n220; // [esp+0h] [ebp-34h]
  __int16 *v22; // [esp+4h] [ebp-30h]
  int v23; // [esp+8h] [ebp-2Ch]
  unsigned __int8 *arg0_2; // [esp+Ch] [ebp-28h]
  int v25; // [esp+10h] [ebp-24h]
  int n200; // [esp+14h] [ebp-20h]
  int i; // [esp+14h] [ebp-20h]
  _BYTE *arg0_1; // [esp+18h] [ebp-1Ch]
  unsigned __int8 n2; // [esp+1Ch] [ebp-18h]
  unsigned __int8 v30; // [esp+20h] [ebp-14h]

  sub_3702F(_FDOTHER.DAT_, a2, a4, a3, 92);
  arg0_1 = 0;
  arg0_2 = 0;
  n2 = 0;
  sub_1088D(30);
  n1832 = 3208;
  v7 = malloc(&loc_36B00);
  v5 = v7;
  v6 = v7;
  LODWORD(v7) = memset(v7, 0, &loc_36B00);
  n658255 = v5 + 76848;
  sub_15F84(a5, v7, SHIDWORD(v7), a3, n658255, arg0_0, 44, n658255, 320, 205, 76, 0, 25, 0);
  LOBYTE(n658255) = 40;
  for ( n200 = 0; n200 < 500; ++n200 )
  {
    sub_11D40((unsigned __int8)n658255, SHIDWORD(v7), n658255, a3, 0, 255, (unsigned __int8)n658255);
    LODWORD(v7) = sub_11EB0(v6 + 320 * n200, SHIDWORD(v7), n658255, a3, 655360, 320, v6 + 320 * n200, 320, 320, 200);
    if ( n200 < 200 )
    {
      if ( (_BYTE)n658255 )
      {
        LODWORD(v7) = n200 / 5;
        HIDWORD(v7) = n200 % 5;
        if ( !(n200 % 5) )
          LOBYTE(n658255) = n658255 - 1;
      }
    }
    if ( n200 > 300 )
    {
      LODWORD(v7) = n200 / 5;
      HIDWORD(v7) = n200 % 5;
      if ( !(n200 % 5) )
        LOBYTE(n658255) = n658255 + 1;
    }
    sub_17AA9(v7, SHIDWORD(v7), n658255, a3, 1);
  }
  free(v6);
  arg8 = malloc(&loc_1F400);
  v25 = malloc(64000);
  v11 = malloc(64000);
  v23 = v11;
  v22 = (__int16 *)sub_111BA(v11, SHIDWORD(v11), v25, a3, (int)aTaiDat, 0, 3);// "TAI.DAT"
  v10 = (__int16 *)sub_111BA((__int32)v22, SHIDWORD(v11), v25, a3, (int)aFdotherDat, 0, 56);// "FDOTHER.DAT"
  sub_4E98D(v10, 0, 0, v25, 320, -1);
  LODWORD(v11) = free(v10);
  sub_25977(v11, SHIDWORD(v11), v25, a3, 4, 0);
  for ( i = n16_1 - 1; i >= 0; --i )
  {
    if ( i )
    {
      if ( i == 1 )
        v12 = 0;
      else
        v12 = i;
    }
    else
    {
      v12 = 1;
    }
    v13 = (_BYTE *)(80 * v12 + n8_0);
    v30 = v13[7];
    v14 = 3 * v30;
    arg0_1 = sub_111BA(v14 + 1, SHIDWORD(v11), v14, a3, (int)aFiganiDat, (int)arg0_1, v14 + 1);// "FIGANI.DAT"
    arg0 = sub_111BA((__int32)arg0_1, SHIDWORD(v11), v14, a3, (int)aFiganiDat, (int)arg0_2, v14);// "FIGANI.DAT"
    arg0_2 = arg0;
    LOBYTE(v11) = sub_2E9A8((__int32)arg0, SHIDWORD(v11), (int)arg0, a3, i, 1, (int)arg0, 0, arg8, v25, v22);
    LODWORD(v11) = sub_311E5(v11, SHIDWORD(v11), (int)arg0, a3, arg0, 0, arg8, 320);
    for ( n20 = 0; n20 < 20; ++n20 )
    {
      LODWORD(v11) = sub_11EB0(v11, SHIDWORD(v11), (int)arg0, a3, arg8, 320, v25, 320, 320, 200);
      LODWORD(v11) = sub_311E5(v11, SHIDWORD(v11), (int)arg0, a3, arg0, -1, arg8, 320);
      LODWORD(v11) = sub_11EB0(v11, SHIDWORD(v11), (int)arg0, a3, 655360, 320, arg8, 320, 320, 200);
      LODWORD(v11) = sub_17AA9(v11, SHIDWORD(v11), (int)arg0, a3, 1);
    }
    for ( arg4 = 0; arg4 < (unsigned __int8)arg0_1[2]; ++arg4 )
    {
      LODWORD(v11) = &arg0_1[4 * arg4];
      arg0 = &arg0_1[*(_DWORD *)(v11 + 8)];
      LODWORD(v11) = sub_11EB0(v11, SHIDWORD(v11), (int)arg0, a3, arg8, 320, v25, 320, 320, 200);
      LOBYTE(v11) = sub_2EB9F(v11, SHIDWORD(v11), (int)arg0, a3, (int)arg0_1, arg4, arg8, 320, -1);
      sub_11EB0(v11, SHIDWORD(v11), (int)arg0, a3, 655360, 320, arg8, 320, 320, 200);
      sub_17AA9(arg0[6], SHIDWORD(v11), (int)arg0, a3, arg0[6]);
    }
    v11 = memmove(v23, v25, 64000);
    DATO_DAT = (int)sub_111BA(v30, SHIDWORD(v11), (int)arg0, a3, (int)aDatoDat, DATO_DAT, v30);// "DATO.DAT"
    sub_168B6(DATO_DAT, SHIDWORD(v11), (int)arg0, a3, v23, 320, 5, 7, 5, 5);
    if ( i )
      n220 = 220;
    else
      n220 = 440;
    for ( n220_1 = 0; (int)n220_1 < n220; ++n220_1 )
    {
      v20 = sub_11EB0(v11, SHIDWORD(v11), (int)arg0, a3, arg8, 320, v23, 320, 320, 200);
      if ( n2 )
        --n2;
      else
        n2 = (sub_4EBE3(v20) & 0x1F) + 40;
      if ( n2 >= 2u )
        n12 = 0;
      else
        n12 = 12;
      arg0 = (unsigned __int8 *)(*(_DWORD *)(DATO_DAT + n12) + DATO_DAT);
      LODWORD(v11) = sub_4EBFF(arg8 + n1832, arg0, 320);
      sub_311E5(v11, SHIDWORD(v11), (int)arg0, a3, arg0_2, -1, arg8, 320);
      sub_15F84(n220_1, arg8 + 5865, SHIDWORD(v11), a3, (int)arg0, arg0_0, 10, arg8 + 5865, 320, 205, 76, 0, 0, 0);
      sub_15F84(
        n220_1,
        (unsigned __int8)v13[8] + 1,
        SHIDWORD(v11),
        a3,
        (int)arg0,
        ::arg0,
        (unsigned __int8)v13[8] + 1,
        arg8 + 5915,
        320,
        205,
        76,
        0,
        0,
        0);
      sub_15F84(n220_1, arg8 + 12265, SHIDWORD(v11), a3, (int)arg0, arg0_0, 11, arg8 + 12265, 320, 205, 76, 0, 0, 0);
      sub_15F84(
        n220_1,
        (unsigned __int8)v13[32] + 150,
        SHIDWORD(v11),
        a3,
        (int)arg0,
        ::arg0,
        (unsigned __int8)v13[32] + 150,
        arg8 + 12315,
        320,
        205,
        76,
        0,
        0,
        0);
      if ( (int)n220_1 >= 220 )
        LOBYTE(arg0) = 45;
      else
        LOBYTE(arg0) = v13[8] + 12;
      sub_15F84(
        n220_1,
        (unsigned __int8)arg0,
        SHIDWORD(v11),
        a3,
        (int)arg0,
        arg0_0,
        (unsigned __int8)arg0,
        arg8 + 32008,
        320,
        205,
        76,
        0,
        20,
        0);
      LODWORD(v11) = sub_11EB0(v11, SHIDWORD(v11), (int)arg0, a3, 655360, 320, arg8, 320, 320, 200);
      sub_17AA9(v11, SHIDWORD(v11), (int)arg0, a3, 1);
      LODWORD(v11) = sub_10620();
      if ( (_DWORD)v11 )
      {
        i = 1;
        LOWORD(v11) = sub_4E381();
      }
    }
    sub_1F882(v11, SHIDWORD(v11), (int)arg0, a3);
  }
  free(v25);
  free(v23);
  free(arg0_1);
  free(v22);
  free(arg8);
  JUMPOUT(0x2E2A8);
}
