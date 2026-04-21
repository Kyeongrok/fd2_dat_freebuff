/*
 * func-name: sub_2F7B6
 * func-address: 0x2f7b6
 * callers: 0x2ebe1
 * callees: 0x12e38, 0x1b722, 0x1b83d, 0x1f183, 0x3702f, 0x4e84f, 0x4e8bc, 0x4ebe3
 */

int __fastcall sub_2F7B6(__int32 a1, int a2, int a3, int n100, int n6, int a6, int *a7)
{
  unsigned __int8 *v7; // ebp
  int v8; // edx
  unsigned __int8 *v9; // edi
  __int32 v10; // eax
  int v11; // eax
  int v12; // eax
  char *v13; // eax
  int v14; // ebx
  __int32 v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // et2
  int v19; // eax
  int v20; // et2
  int v21; // edx
  int v22; // eax
  int v23; // eax
  char *v24; // eax
  int arg4_1; // eax
  int result; // eax
  _BYTE v27[5]; // [esp-4h] [ebp-4Ch] BYREF
  unsigned __int8 v28; // [esp+1h] [ebp-47h]
  int v29; // [esp+4h] [ebp-44h]
  int v30; // [esp+8h] [ebp-40h]
  int v31; // [esp+Ch] [ebp-3Ch]
  int v32; // [esp+10h] [ebp-38h]
  int v33; // [esp+14h] [ebp-34h]
  __int32 v34; // [esp+18h] [ebp-30h]
  int v35; // [esp+1Ch] [ebp-2Ch]
  int v36; // [esp+20h] [ebp-28h]
  int v37; // [esp+24h] [ebp-24h]
  int v38; // [esp+28h] [ebp-20h]
  int v39; // [esp+2Ch] [ebp-1Ch]
  unsigned __int8 v40; // [esp+30h] [ebp-18h]
  unsigned __int8 v41; // [esp+34h] [ebp-14h]
  int v42; // [esp+44h] [ebp-4h]

  sub_3702F(a1, a2, a3, n100, 92);
  v42 = a3;
  v39 = 0;
  *a7 = 1;
  a7[1] = 0;
  a7[2] = 0;
  a7[3] = 0;
  a7[4] = 0;
  a7[5] = 0;
  v7 = (unsigned __int8 *)(n8_0 + 80 * n6);
  v8 = a6;
  v9 = (unsigned __int8 *)(80 * a6 + n8_0);
  v36 = *((unsigned __int16 *)v7 + 36);
  v38 = *((unsigned __int16 *)v9 + 37);
  v37 = *((unsigned __int16 *)v9 + 32);
  v29 = *((unsigned __int16 *)v9 + 33);
  v32 = *((unsigned __int16 *)v7 + 38);
  v30 = *((unsigned __int16 *)v9 + 39);
  v31 = v7[32] - 1;
  v10 = v31;
  v41 = v7[33];
  v40 = v9[33];
  LOBYTE(v10) = v40;
  v11 = sub_1B83D(v10, a6, a3, n100, n6, 0);
  v12 = sub_1B722(v11, a6, a3, n100, n6, v11);
  v13 = sub_4E8BC(v12);
  v14 = (unsigned __int8)v13[9];
  v34 = (unsigned __int8)v13[10];
  v15 = sub_1F183(v34, a6, v14, n100, n6);
  if ( !v15 )
  {
    sub_12E38(*v7, a6, v14, n100, *v7, v7[1], (int)v27);
    n100 = 100;
    v15 = v36 * dword_51A12[v28] / 100;
    v8 = v36 * dword_51A12[v28] % 100;
    v36 += v15;
  }
  if ( !sub_1F183(v15, v8, v14, n100, a6) )
  {
    sub_12E38(*v9, v8, v14, n100, *v9, v9[1], (int)v27);
    v38 += v38 * dword_51A2A[v28] / 100;
  }
  v16 = (unsigned __int8)byte_524A8[v31];
  v35 = v16;
  switch ( v14 )
  {
    case 4:
      v16 = v34;
      v35 += v34;
      break;
    case 2:
      v17 = sub_4EBE3(v16);
      v18 = v17 % 100;
      v16 = v17 / 100;
      if ( v18 < v34 )
      {
        v19 = sub_4EBE3(v16);
        v20 = v19 % 4;
        v16 = v19 / 4;
        v9[37] = v20 + 2;
        a7[2] = 1;
      }
      break;
    case 3:
      a7[4] = 1;
      break;
  }
  v21 = sub_4EBE3(v16) % 100;
  v22 = v32 - v30;
  if ( v21 < v32 - v30 )
  {
    *a7 = 0;
    v23 = sub_4EBE3(v22);
    if ( v23 % 100 < v35 )
    {
      v38 /= 2;
      a7[1] = 1;
    }
    v39 = 9 * (v36 - v38) / 10;
    if ( v39 < 0 )
      v39 = 0;
    v33 = v39 / 9;
    if ( v39 / 9 )
      v39 += sub_4EBE3(v39 / 9) % v33;
    v37 -= v39;
    if ( v37 < 0 )
      v37 = 0;
  }
  if ( v7[6] == 2 && v9[7] >= 0x44u )
  {
    v24 = sub_4E84F(v9[7] - 68);
    if ( v7[32] > 8u && v7[32] < 0x19u || v7[8] == 28 )
      v41 += 30;
    arg4_1 = (unsigned __int8)v24[9] * v40 / v41;
    arg4_0 = arg4_1;
    if ( v37 )
      arg4_0 = v39 * arg4_1 / v29;
  }
  result = v39;
  a7[5] = v39;
  return result;
}
