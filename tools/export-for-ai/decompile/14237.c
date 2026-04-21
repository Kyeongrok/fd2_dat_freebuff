/*
 * func-name: sub_14237
 * func-address: 0x14237
 * callers: 0x13a9f, 0x14ef0
 * callees: 0x12e38, 0x145cd, 0x146d1, 0x14818, 0x14b16, 0x1b722, 0x1b83d, 0x1debe, 0x1f183, 0x3702f, 0x3706e, 0x3776e, 0x4df4c, 0x4e390, 0x4e8a5, 0x4e8bc
 */

int __fastcall sub_14237(__int32 a1, int a2, int a3, int n100, int a5, int a6)
{
  int v6; // esi
  int v7; // eax
  int v8; // eax
  char *v9; // eax
  char v10; // di
  unsigned __int8 v11; // bp
  int n19; // eax
  int v13; // ebx
  unsigned __int8 *v14; // eax
  int v15; // edx
  int v16; // esi
  int n8; // edi
  int v18; // esi
  int v19; // edx
  int v20; // ebp
  int v21; // edi
  _BYTE v23[5]; // [esp-4h] [ebp-64h] BYREF
  unsigned __int8 v24; // [esp+1h] [ebp-5Fh]
  int v25; // [esp+4h] [ebp-5Ch]
  int v26; // [esp+8h] [ebp-58h]
  int v27; // [esp+Ch] [ebp-54h]
  int v28; // [esp+10h] [ebp-50h]
  int v29; // [esp+14h] [ebp-4Ch]
  int v30; // [esp+18h] [ebp-48h]
  int v31; // [esp+1Ch] [ebp-44h]
  int v32; // [esp+20h] [ebp-40h]
  int v33; // [esp+24h] [ebp-3Ch]
  int i; // [esp+28h] [ebp-38h]
  int v35; // [esp+2Ch] [ebp-34h]
  int v36; // [esp+30h] [ebp-30h]
  int v37; // [esp+34h] [ebp-2Ch]
  int v38; // [esp+38h] [ebp-28h]
  int v39; // [esp+3Ch] [ebp-24h]
  int v40; // [esp+40h] [ebp-20h]
  int v41; // [esp+44h] [ebp-1Ch]
  int j; // [esp+48h] [ebp-18h]
  int v43; // [esp+4Ch] [ebp-14h]
  int v44; // [esp+5Ch] [ebp-4h]

  sub_3702F(a1, a2, a3, n100, 128);
  v44 = a3;
  v39 = 0;
  v30 = 0;
  v6 = 80 * a5 + dword_53A45;
  v32 = *(unsigned __int16 *)(v6 + 72);
  v33 = *(unsigned __int16 *)(v6 + 74);
  ::n8 = 0;
  v7 = sub_1B83D(a5, 0);
  if ( v7 != -1 )
  {
    v8 = sub_1B722(a5, v7);
    v9 = sub_4E8BC(v8);
    v27 = (unsigned __int8)v9[11];
    v28 = (unsigned __int8)v9[12];
    v10 = *(_BYTE *)(v6 + 59);
    v11 = *(_BYTE *)v6;
    v25 = *(unsigned __int8 *)(v6 + 1);
    if ( sub_1F183(a5) )
      n19 = 19;
    else
      n19 = *(unsigned __int8 *)(v6 + 32);
    v13 = (int)sub_4E8A5(n19);
    v26 = malloc(32);
    v31 = malloc(2048);
    if ( !a6 )
      v30 = 1;
    sub_145CD(a6);
    sub_4E390(v13, v11, v25, v10, (char *)dword_53A51, dword_53A69);
    sub_146D1(a5, a6);
    v29 = sub_14B16(v31);
    sub_4DF4C((unsigned __int8 *)dword_53A51);
    v36 = malloc(100);
    for ( i = 0; i < v29; ++i )
    {
      v14 = (unsigned __int8 *)(v31 + 2 * i);
      v15 = *v14;
      v40 = v15;
      v41 = v14[1];
      v38 = v32;
      v37 = v33;
      if ( sub_1F183(a5) )
      {
        sub_12E38((__int32)v23, v15, v13, n100, v40, v41, (int)v23);
        v13 = v24;
        n100 = 100;
        v38 = v32 * dword_51A12[v24] / 100 + v32;
        v37 = v33 * dword_51A2A[v24] / 100 + v33;
      }
      v16 = sub_14818(v40, v41, v36, v28, v27, v30);
      v35 = v16;
      sub_4DF4C((unsigned __int8 *)dword_53A51);
      if ( v16 )
      {
        for ( j = 0; j < v35; ++j )
        {
          v19 = j + v36;
          v43 = *(unsigned __int8 *)(j + v36);
          v13 = dword_53A45 + 80 * v43;
          v20 = *(unsigned __int16 *)(v13 + 72);
          v21 = *(unsigned __int16 *)(v13 + 74);
          if ( sub_1F183(v43) )
          {
            sub_12E38(
              *(unsigned __int8 *)v13,
              v19,
              v13,
              n100,
              *(unsigned __int8 *)v13,
              *(unsigned __int8 *)(v13 + 1),
              (int)v23);
            n100 = 100;
            v20 += v20 * dword_51A12[v24] / 100;
            v21 += v21 * dword_51A2A[v24] / 100;
          }
          v18 = v38 - v21;
          if ( v38 - v21 <= 2 )
            n8 = 0;
          else
            n8 = 8;
          if ( v18 > *(unsigned __int16 *)(v13 + 64) )
          {
            v18 *= 2;
            n8 = 18;
          }
          if ( sub_1DEBE(v43, v40, v41) == 1 )
            v18 += v37 - v20;
          if ( !*(_BYTE *)(v13 + 8) )
            v18 = 3 * v18 / 2;
          if ( n8 > ::n8 || n8 == ::n8 && v18 > v39 )
          {
            v39 = v18;
            dword_53C43 = v40;
            dword_53C47 = v41;
            dword_53C4B = v43;
            ::n8 = n8;
          }
        }
      }
    }
    free(v36);
    free(v26);
    free(v31);
  }
  return 0;
}
