/*
 * func-name: sub_2E2B0
 * func-address: 0x2e2b0
 * callers: 0x1548e, 0x18d8c, 0x31529, 0x35730
 * callees: 0x111ba, 0x11cac, 0x11eb0, 0x12e38, 0x17aa9, 0x1f0dc, 0x1f525, 0x1f882, 0x25a96, 0x2e95b, 0x2e9a8, 0x2eb9f, 0x2ebe1, 0x2facd, 0x314de, 0x3702f, 0x3706e, 0x3776e, 0x37910, 0x4e98d
 */

int __fastcall sub_2E2B0(__int32 a1, int a2, int a3, int a4, int n6, int n6_1)
{
  int v6; // esi
  unsigned __int8 *v7; // ebx
  int v8; // ebp
  int v9; // edi
  unsigned __int8 *v10; // eax
  int n4; // edx
  int n28; // edx
  __int32 n3; // eax
  int n4_1; // edx
  int n26_1; // edx
  int v16; // ebx
  int v17; // ebx
  int v18; // eax
  _BYTE *n26_3; // eax
  unsigned __int8 *n3_5; // eax
  int n26_2; // eax
  int v22; // eax
  __int32 v23; // eax
  int result; // eax
  __int64 n655360; // rax
  __int64 v26; // rax
  _BYTE v27[6]; // [esp-6h] [ebp-40h] BYREF
  unsigned __int8 n4_2; // [esp+0h] [ebp-3Ah]
  int n3_3; // [esp+2h] [ebp-38h]
  int n26; // [esp+6h] [ebp-34h]
  int n55; // [esp+Ah] [ebp-30h]
  __int32 v32; // [esp+Eh] [ebp-2Ch]
  int n3_4; // [esp+12h] [ebp-28h]
  unsigned __int8 *n3_1; // [esp+16h] [ebp-24h]
  unsigned __int8 *n3_2; // [esp+1Ah] [ebp-20h]
  _BYTE *v36; // [esp+1Eh] [ebp-1Ch]
  _BYTE *v37; // [esp+22h] [ebp-18h]
  __int16 *v38; // [esp+26h] [ebp-14h]
  int v39; // [esp+36h] [ebp-4h]

  sub_3702F(a1, a2, a3, a4, 100);
  v39 = a3;
  n3_1 = 0;
  n3_2 = 0;
  v37 = 0;
  v36 = 0;
  v38 = 0;
  n26_0 = 0;
  v6 = n8_0 + 80 * n6;
  v7 = (unsigned __int8 *)(80 * n6_1 + n8_0);
  n55 = v7[7];
  n26 = *(unsigned __int8 *)(v6 + 7);
  if ( !n3_9 )
  {
    free(dword_53A61);
    free(n655360_0);
    free(n7);
    n7 = 0;
  }
  v8 = malloc(64000);
  v9 = malloc(&loc_1F400);
  memset(v8, 0, 64000);
  if ( *(_BYTE *)(v6 + 6) )
  {
    v10 = v7;
    v7 = (unsigned __int8 *)v6;
  }
  else
  {
    v10 = (unsigned __int8 *)v6;
  }
  n3_4 = (unsigned __int8)byte_52470[n17];
  if ( v10[32] != 19 && (n4 = v10[31], n4 != 4) && n4 != 5 || !n3_4 || (n28 = v10[7], n28 == 28) )
  {
    n28 = v10[1];
    sub_12E38(*v10, n28, (int)v7, a4, *v10, n28, (int)v27);
    n3_4 = n4_2;
  }
  sub_12E38(*v7, n28, (int)v7, a4, *v7, v7[1], (int)v27);
  n3 = (unsigned __int8)byte_52470[n17];
  n3_3 = n3;
  if ( (v7[32] == 19 || (n4_1 = v7[31], n4_1 == 4) || n4_1 == 5) && (n4_1 = v7[7], n4_1 != 28) )
  {
    if ( !n3_3 )
    {
      n4_1 = n4_2;
      n3_3 = n4_2;
    }
  }
  else
  {
    n3 = n4_2;
    n3_3 = n4_2;
  }
  if ( n3_9 )
  {
    n3 = n3_9;
    n3_4 = n3_9;
    if ( n26 == 26 || n26 == 54 || n55 == 55 )
      n3 = 3;
  }
  v38 = (__int16 *)sub_111BA(n3, n4_1, (int)v7, a4, (int)aTaiDat, (int)v38, n3);// "TAI.DAT"
  v36 = sub_111BA(3 * n55, n55, (int)v7, a4, (int)aFiganiDat, (int)v36, 3 * n55);// "FIGANI.DAT"
  n26_1 = n26;
  v16 = 3 * n26;
  v37 = sub_111BA((__int32)v36, n26, 3 * n26, a4, (int)aFiganiDat, (int)v37, 3 * n26);// "FIGANI.DAT"
  v17 = v16 + 1;
  n3_1 = sub_111BA((__int32)v37, n26_1, v17, a4, (int)aFiganiDat, (int)n3_1, v17);// "FIGANI.DAT"
  v32 = n3_1[1];
  v18 = sub_1F882(v32, n26_1, v17, a4);
  n26_3 = sub_111BA(v18, n26_1, v17, a4, (int)aBgDat, n26_0, n3_4);// "BG.DAT"
  n26_0 = (int)n26_3;
  if ( !n3_9 )
    n26_3 = (_BYTE *)sub_2FACD(v8, n6);
  n3_5 = (unsigned __int8 *)sub_1F0DC((__int32)n26_3, n26_1, v17, a4, n6, n6_1);
  if ( n3_5 == (unsigned __int8 *)1 || n3_9 )
  {
    n26_1 = n55;
    n3_5 = sub_111BA(3 * n55 + 1, n55, v17, a4, (int)aFiganiDat, (int)n3_2, 3 * n55 + 1);// "FIGANI.DAT"
    n3_2 = n3_5;
  }
  if ( v32 )
  {
    ::n26 = 0;
    dword_5413F[0] = 0;
    BG_DAT = 0;
    BG_DAT__0 = 0;
    ::n26 = (int)sub_111BA((__int32)n3_5, n26_1, v17, a4, (int)aBgDat, 0, n3_3);// "BG.DAT"
    dword_5413F[0] = (int)sub_111BA(::n26, n26_1, v17, a4, (int)aBgDat, dword_5413F[0], 0);// "BG.DAT"
    BG_DAT = (int)sub_111BA(dword_5413F[0], n26_1, v17, a4, (int)aBgDat, BG_DAT, 1);// "BG.DAT"
    BG_DAT__0 = (int)sub_111BA(BG_DAT, n26_1, v17, a4, (int)aBgDat, BG_DAT__0, 2);// "BG.DAT"
    if ( !*(_BYTE *)(v6 + 6) )
    {
      n26_2 = n26_0;
      n26_1 = ::n26;
      n26_0 = ::n26;
      ::n26 = n26_2;
    }
    sub_4E98D((__int16 *)::n26, 0, 50, v8, 320, -1);
  }
  else
  {
    sub_4E98D((__int16 *)n26_0, 0, 50, v8, 320, -1);
    if ( !n3_9 )
      sub_2FACD(v8, n6_1);
  }
  if ( !n3_9 )
  {
    dword_5414B = sub_314DE((int)n3_1);
    dword_5414F = sub_314DE((int)n3_2);
  }
  sub_2E9A8(n6, v32, (int)v37, (int)v36, v9, v8, v38);
  v22 = sub_2EBE1(n6, n6_1, n3_1, v36, v9, v8, (int)v38, dword_5414B);
  if ( v22 )
  {
    v22 = sub_1F0DC(v22, n26_1, v17, a4, n6, n6_1);
    if ( v22 == 1 && !n3_9 )
      v22 = sub_2EBE1(n6_1, n6, n3_2, v37, v9, v8, (int)v38, dword_5414F);
  }
  if ( n3_9 )
  {
    n3_9 = 1;
    v22 = sub_2EBE1(n6_1, n6, n3_2, v37, v9, v8, (int)v38, dword_5414F);
  }
  if ( !v32 && !n3_9 )
  {
    sub_11EB0(v22, n26_1, v17, a4, v9, 640, v8, 320, 320, 200);
    sub_4E98D(v38, 164, 157, v9, 640, -1);
    sub_2EB9F((int)v36, 0, v9, 640, -1);
    LOBYTE(v23) = sub_2EB9F((int)v37, 0, v9, 640, -1);
    sub_11EB0(v23, n26_1, v17, a4, 655360, 320, v9, 640, 320, 200);
  }
  free(v8);
  free(v9);
  free(v36);
  free(v37);
  free(n3_1);
  free(n26_0);
  free(v38);
  if ( v32 )
  {
    free(::n26);
    free(dword_5413F[0]);
    free(BG_DAT);
    result = free(BG_DAT__0);
  }
  else
  {
    result = free(n3_2);
  }
  if ( !n3_9 )
  {
    n655360 = malloc(153216);
    n655360_0 = n655360;
    n7 = (int)sub_111BA(
                2 * *(unsigned __int8 *)dword_53A55,
                SHIDWORD(n655360),
                v17,
                a4,
                (int)aFdshapDat,
                n7,
                2 * *(unsigned __int8 *)dword_53A55);// "FDSHAP.DAT"
    v26 = sub_2E95B();
    LODWORD(v26) = sub_17AA9(v26, SHIDWORD(v26), v17, a4, 6);
    sub_1F882(v26, SHIDWORD(v26), v17, a4);
    LODWORD(v26) = memset(655360, 0, 64000);
    LODWORD(v26) = sub_11CAC(v26, SHIDWORD(v26), v17, a4, 1);
    LODWORD(v26) = sub_25A96(v26, SHIDWORD(v26), v17, a4, dword_5414B, -1, 1);
    if ( dword_5414B )
      LODWORD(v26) = free(dword_5414B);
    if ( dword_5414F )
      LODWORD(v26) = free(dword_5414F);
    return sub_1F525(v26, SHIDWORD(v26), v17, a4);
  }
  return result;
}
