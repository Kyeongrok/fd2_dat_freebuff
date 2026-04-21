/*
 * func-name: sub_21548
 * func-address: 0x21548
 * callers: 0x21527
 * callees: 0x11cac, 0x11eb0, 0x127e0, 0x12e38, 0x1399c, 0x1c75e, 0x1ca89, 0x1df58, 0x1e0db, 0x1e1dc, 0x1f558, 0x25a96, 0x3702f, 0x3706e, 0x37119, 0x3776e, 0x3790a
 */

void __fastcall sub_21548(__int32 a1, int a2, int a3, int n7_1, int a5, int n10, int a7, int a8)
{
  __int32 n7_2; // eax
  int n655360_1; // ebp
  int v10; // eax
  __int64 v11; // rax
  int v12; // edi
  int n40; // ebx
  int i; // esi
  int n6; // esi
  int n6_1; // ebx
  int n43; // ebx
  int j; // ebx
  unsigned __int8 *v19; // esi
  int v20; // eax
  __int32 v21; // [esp-10h] [ebp-60h]
  __int32 v22; // [esp-10h] [ebp-60h]
  int n655360; // [esp+0h] [ebp-50h]
  int v24; // [esp+4h] [ebp-4Ch]
  int v25; // [esp+8h] [ebp-48h]
  int v26; // [esp+Ch] [ebp-44h]
  _DWORD v27[3]; // [esp+10h] [ebp-40h]
  _DWORD v28[3]; // [esp+1Ch] [ebp-34h]
  _DWORD v29[3]; // [esp+28h] [ebp-28h]
  _WORD v30[4]; // [esp+34h] [ebp-1Ch] BYREF
  __int32 n7; // [esp+3Ch] [ebp-14h]
  int v32; // [esp+4Ch] [ebp-4h]

  sub_3702F(a1, a2, a3, n7_1, 108);
  v32 = a3;
  v28[0] = unk_52096;
  v28[1] = unk_5209A;
  v28[2] = unk_5209E;
  v29[0] = unk_520A2;
  v29[1] = unk_520A6;
  v29[2] = unk_520AA;
  v27[0] = unk_520AE;
  v27[1] = unk_520B2;
  v27[2] = unk_520B6;
  n7 = ::n7;
  sub_1399C(::n7, a2, a3, n7_1);
  ::n7 = n7_2;
  dword_53EC4 = 0;
  sub_1CA89(n7_2, a2, a3, n7_1, a5, n10);
  n655360_1 = malloc(64000);
  if ( !n655360_1 || (v24 = malloc((char *)&loc_2567F + 1)) == 0 || (v25 = malloc((char *)&loc_2567F + 1)) == 0 )
  {
    v10 = printf(aOutOfMemoryAtE);              // "Out of memory at Earth Quack !!\n"
    exit(v10);
  }
  n655360 = n655360_0;
  v26 = v24;
  v11 = malloc(0x4000);
  v12 = v11;
  for ( n40 = 0; n40 < ::n40; ++n40 )
  {
    for ( i = 0; i < dword_53AC1; ++i )
    {
      sub_12E38((__int32)v30, SHIDWORD(v11), n40, n7_1, i, n40, (int)v30);
      n7_1 = ::n7;
      HIDWORD(v11) = ::n7 + 6 + 576 * v30[0];
      *(_DWORD *)(v12 + 4 * (i + (n40 << 6))) = HIDWORD(v11);
    }
  }
  for ( n6 = 0; n6 < 3; ++n6 )
  {
    n655360_0 = n655360_1;
    n7_1 = 3072 * dword_53AA9;
    HIDWORD(v11) = dword_51A87;
    v21 = v28[n6] + 3072 * dword_53AA9 + 1536 * dword_51A87;
    sub_1F558(
      v21,
      dword_51A87,
      n6,
      3072 * dword_53AA9,
      v21,
      v29[n6] + 3072 * dword_53AAD + 1536 * dword_51A8B,
      v27[n6],
      v12);
    sub_11EB0(
      *(&n655360 + n6) + 32904,
      SHIDWORD(v11),
      n6,
      n7_1,
      *(&n655360 + n6) + 32904,
      456,
      n655360_0 + 1284,
      320,
      312,
      192);
    n655360_0 = *(&n655360 + n6);
    for ( n6_1 = 0; n6_1 < n6_0; ++n6_1 )
    {
      HIDWORD(v11) = dword_53A45;
      if ( (*(_BYTE *)(dword_53A45 + 80 * n6_1 + 5) & 1) == 0 )
        sub_127E0(80 * n6_1, dword_53A45, n6_1, n7_1, n6_1);
    }
  }
  for ( n43 = 0; n43 < 60; ++n43 )
  {
    if ( n43 < 43 && !(n43 % 6) )
      sub_25A96(FDOTHER_DAT__0, 13, 1);
    n7_1 = 4;
    HIDWORD(v11) = n43 % 4;
    v22 = *(&n655360 + n43 % 4) + 32904;
    sub_11EB0(v22, n43 % 4, n43, 4, 656644, 320, v22, 456, 312, 192);
    j___delay(10);
  }
  free(n655360_1);
  free(v24);
  free(v25);
  n655360_0 = n655360;
  free(::n7);
  ::n7 = n7;
  LODWORD(v11) = sub_11CAC(n7, SHIDWORD(v11), n43, n7_1, 0);
  for ( j = 0; j < a7; ++j )
  {
    v19 = (unsigned __int8 *)(j + a8);
    v20 = sub_1C75E(*(unsigned __int8 *)(j + a8), SHIDWORD(v11), j, n7_1, *(unsigned __int8 *)(j + a8), n10);
    if ( v20 )
    {
      HIDWORD(v11) = *v19;
      sub_1E0DB(v20, SHIDWORD(v11), j, n7_1, v20, 94, SHIDWORD(v11));
    }
    else
    {
      LODWORD(v11) = sub_1E1DC(*v19, SHIDWORD(v11), j, n7_1, *v19);
    }
  }
  LODWORD(v11) = sub_11CAC(v11, SHIDWORD(v11), j, n7_1, 0);
  sub_1DF58(v11, SHIDWORD(v11), j, n7_1);
}
