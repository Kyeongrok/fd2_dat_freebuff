/*
 * func-name: sub_1ECC7
 * func-address: 0x1ecc7
 * callers: 0x1e856
 * callees: 0x11df2, 0x12e38, 0x1b722, 0x1b83d, 0x1f183, 0x203bd, 0x3702f, 0x3790a, 0x4e84f, 0x4e8bc, 0x4ebe3
 */

void __fastcall sub_1ECC7(__int32 a1, int a2, int a3, int n100, int a5, int a6)
{
  int v6; // ebp
  unsigned __int8 *v7; // edi
  int v8; // edx
  unsigned __int8 *v9; // esi
  __int32 v10; // eax
  int v11; // eax
  int v12; // eax
  char *v13; // eax
  int n2; // ebx
  int v15; // eax
  int v16; // eax
  int v17; // et2
  int v18; // eax
  int v19; // edx
  __int32 v20; // eax
  __int32 v21; // eax
  int v22; // edx
  int v23; // eax
  int v24; // eax
  int v25; // edx
  int v26; // et2
  __int32 v27; // eax
  __int32 v28; // eax
  __int32 v29; // eax
  char *v30; // eax
  int arg4_1; // eax
  _BYTE v32[5]; // [esp-4h] [ebp-48h] BYREF
  unsigned __int8 v33; // [esp+1h] [ebp-43h]
  int v34; // [esp+4h] [ebp-40h]
  int v35; // [esp+8h] [ebp-3Ch]
  int v36; // [esp+Ch] [ebp-38h]
  int v37; // [esp+10h] [ebp-34h]
  int v38; // [esp+14h] [ebp-30h]
  int v39; // [esp+18h] [ebp-2Ch]
  int v40; // [esp+1Ch] [ebp-28h]
  int v41; // [esp+20h] [ebp-24h]
  int v42; // [esp+24h] [ebp-20h]
  int v43; // [esp+28h] [ebp-1Ch]
  unsigned __int8 v44; // [esp+2Ch] [ebp-18h]
  unsigned __int8 v45; // [esp+30h] [ebp-14h]
  int v46; // [esp+40h] [ebp-4h]

  sub_3702F(a1, a2, a3, n100, 88);
  v46 = a3;
  v6 = 0;
  byte_53C6B = 1;
  v7 = (unsigned __int8 *)(dword_53A45 + 80 * a5);
  v8 = a6;
  v9 = (unsigned __int8 *)(80 * a6 + dword_53A45);
  v41 = *((unsigned __int16 *)v7 + 36);
  v42 = *((unsigned __int16 *)v9 + 37);
  v43 = *((unsigned __int16 *)v9 + 32);
  v37 = *((unsigned __int16 *)v9 + 33);
  v36 = *((unsigned __int16 *)v7 + 38);
  v35 = *((unsigned __int16 *)v9 + 39);
  v34 = v7[32] - 1;
  v10 = v34;
  v45 = v7[33];
  v44 = v9[33];
  LOBYTE(v10) = v44;
  v11 = sub_1B83D(v10, a6, a3, n100, a5, 0);
  v12 = sub_1B722(v11, a6, a3, n100, a5, v11);
  v13 = sub_4E8BC(v12);
  n2 = (unsigned __int8)v13[9];
  v39 = (unsigned __int8)v13[10];
  if ( !sub_1F183(a5) )
  {
    sub_12E38(*v7, a6, n2, n100, *v7, v7[1], (int)v32);
    n100 = 100;
    v8 = v41 * dword_51A12[v33] % 100;
    v41 += v41 * dword_51A12[v33] / 100;
  }
  if ( !sub_1F183(a6) )
  {
    sub_12E38(*v9, v8, n2, n100, *v9, v9[1], (int)v32);
    n100 = 100;
    v42 += v42 * dword_51A2A[v33] / 100;
  }
  v15 = (unsigned __int8)byte_524A8[v34];
  v40 = v15;
  if ( n2 == 4 )
  {
    v15 = v39;
    v40 += v39;
  }
  else if ( n2 == 2 )
  {
    v16 = sub_4EBE3(v15);
    v17 = v16 % 100;
    v15 = v16 / 100;
    if ( v17 < v39 )
    {
      v18 = sub_4EBE3(v15);
      v19 = v18 % 4 + 2;
      v9[37] = v18 % 4 + 2;
      sub_203BD(1, 32, 0);
      v20 = j___delay(20);
      sub_11DF2(v20, v19, 4, n100, 0, 255, 0);
      j___delay(40);
      sub_203BD(1, 32, 0);
      v21 = j___delay(20);
      sub_11DF2(v21, v19, 4, n100, 0, 255, 0);
    }
  }
  v22 = sub_4EBE3(v15) % 100;
  if ( v22 < v36 - v35 )
  {
    byte_53C6B = 0;
    v23 = sub_4EBE3(v36 - v35);
    v26 = v23 % 100;
    v24 = v23 / 100;
    v25 = v26;
    if ( v26 < v40 )
    {
      sub_11DF2(v24, v25, 100, n100, 0, 255, 63);
      v27 = j___delay(20);
      sub_11DF2(v27, v25, 100, n100, 0, 255, 0);
      v28 = j___delay(40);
      sub_11DF2(v28, v25, 100, n100, 0, 255, 63);
      v29 = j___delay(20);
      sub_11DF2(v29, v25, 100, n100, 0, 255, 0);
      v42 /= 2;
    }
    v6 = 9 * (v41 - v42) / 10;
    if ( v6 < 0 )
      v6 = 0;
    v38 = v6 / 9;
    if ( v6 / 9 )
      v6 += sub_4EBE3(v6 / 9) % v38;
    v43 -= v6;
    if ( v43 < 0 )
      v43 = 0;
  }
  *((_WORD *)v9 + 32) = v43;
  if ( v7[6] == 2 && v9[7] >= 0x44u )
  {
    v30 = sub_4E84F(v9[7] - 68);
    if ( v7[32] > 8u && v7[32] < 0x19u || v7[8] == 28 )
      v45 += 30;
    arg4_1 = v44 * (unsigned __int8)v30[9] / v45;
    arg4_0 = arg4_1;
    if ( v43 )
      arg4_0 = v6 * arg4_1 / v37;
  }
  JUMPOUT(0x111B2);
}
