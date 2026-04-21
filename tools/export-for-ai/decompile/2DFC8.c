/*
 * func-name: sub_2DFC8
 * func-address: 0x2dfc8
 * callers: 0x15055
 * callees: 0x111ba, 0x11cac, 0x11eb0, 0x12e38, 0x17aa9, 0x1f525, 0x1f882, 0x25a96, 0x2e9a8, 0x2eb9f, 0x2facd, 0x314de, 0x3702f, 0x3706e, 0x3776e, 0x37910, 0x4e98d
 */

int __usercall sub_2DFC8@<eax>(__int32 a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4@<ebx>, int a5@<edi>, int a6)
{
  unsigned __int8 *v6; // ebx
  int v7; // esi
  int v8; // ebp
  int v9; // ebx
  _BYTE *n3; // esi
  __int64 v11; // rax
  int v12; // ebx
  int v13; // ebx
  __int64 n655360; // rax
  int v16; // [esp-6h] [ebp-34h] BYREF
  unsigned __int8 v17; // [esp+0h] [ebp-2Eh]
  int v18; // [esp+2h] [ebp-2Ch]
  __int16 *v19; // [esp+6h] [ebp-28h]
  _BYTE *v20; // [esp+Ah] [ebp-24h]
  __int16 *v21; // [esp+Eh] [ebp-20h]
  _BYTE *v22; // [esp+12h] [ebp-1Ch]
  int v23; // [esp+16h] [ebp-18h]
  int v24; // [esp+1Ah] [ebp-14h]
  int v25; // [esp+22h] [ebp-Ch]
  int v26; // [esp+2Ah] [ebp-4h]

  sub_3702F(a1, a2, a4, a3, 84);
  v26 = a4;
  v25 = a5;
  dword_5413B = 0;
  v6 = (unsigned __int8 *)(80 * a6 + n8_0);
  v7 = v6[7];
  free(n655360_0);
  free(n7);
  n7 = 0;
  v23 = malloc(64000);
  v24 = v23;
  v11 = malloc(&loc_1F400);
  v8 = v11;
  memset(v23, 0, 64000);
  sub_12E38(*v6, SHIDWORD(v11), (int)v6, a3, *v6, v6[1], (int)&v16);
  v18 = v17;
  v21 = (__int16 *)sub_111BA(v17, SHIDWORD(v11), (int)v6, a3, (int)aTaiDat, 0, 3);// "TAI.DAT"
  v19 = v21;
  v22 = sub_111BA(3 * v7, SHIDWORD(v11), 3 * v7, a3, (int)aFiganiDat, 0, 3 * v7);// "FIGANI.DAT"
  v20 = v22;
  v9 = 3 * v7 + 1;
  n3 = sub_111BA((__int32)v22, SHIDWORD(v11), v9, a3, (int)aFiganiDat, 0, v9);// "FIGANI.DAT"
  LODWORD(v11) = sub_1F882((__int32)n3, SHIDWORD(v11), v9, a3);
  dword_5413B = (int)sub_111BA(v11, SHIDWORD(v11), v9, a3, (int)aBgDat, dword_5413B, v18);// "BG.DAT"
  sub_2FACD(v23, a6);
  sub_4E98D((__int16 *)dword_5413B, 0, 50, v23, 320, -1);
  dword_5414B = sub_314DE((int)n3);
  LOBYTE(v11) = sub_2E9A8(a6, 1, (int)v22, (int)v22, v8, v23, v21);
  while ( 1 )
  {
    v12 = (unsigned __int8)*n3;
    if ( a5 >= v12 )
      break;
    v13 = (int)&n3[*(_DWORD *)&n3[4 * a5 + 8]];
    if ( *(_BYTE *)(v13 + 5) )
      LODWORD(v11) = sub_25A96(
                       *(unsigned __int8 *)(v13 + 5),
                       SHIDWORD(v11),
                       v13,
                       a3,
                       dword_5414B,
                       *(unsigned __int8 *)(v13 + 5),
                       1);
    sub_11EB0(v11, SHIDWORD(v11), v13, a3, v8, 320, v24, 320, 320, 200);
    LOBYTE(v11) = sub_2EB9F((int)n3, a5, v8, 320, -1);
    LODWORD(v11) = sub_11EB0(v11, SHIDWORD(v11), v13, a3, 655360, 320, v8, 320, 320, 200);
    LODWORD(v11) = sub_17AA9(v11, SHIDWORD(v11), *(unsigned __int8 *)(v13 + 6), a3, *(unsigned __int8 *)(v13 + 6));
    ++a5;
  }
  free(v24);
  free(v8);
  free(v20);
  free(n3);
  free(dword_5413B);
  free(v19);
  n655360 = malloc(153216);
  n655360_0 = n655360;
  n7 = (int)sub_111BA(n655360, SHIDWORD(n655360), v12, a3, (int)aFdshapDat, n7, 2 * *(unsigned __int8 *)dword_53A55);// "FDSHAP.DAT"
  LODWORD(n655360) = sub_17AA9(n7, SHIDWORD(n655360), v12, a3, 6);
  sub_1F882(n655360, SHIDWORD(n655360), v12, a3);
  LODWORD(n655360) = memset(655360, 0, 64000);
  LODWORD(n655360) = sub_11CAC(n655360, SHIDWORD(n655360), v12, a3, 1);
  LODWORD(n655360) = sub_25A96(n655360, SHIDWORD(n655360), v12, a3, dword_5414B, -1, 1);
  if ( dword_5414B )
    LODWORD(n655360) = free(dword_5414B);
  return sub_1F525(n655360, SHIDWORD(n655360), v12, a3);
}
