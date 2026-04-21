/*
 * func-name: sub_4C6E8
 * func-address: 0x4c6e8
 * callers: 0x4c6a5
 * callees: 0x4b882, 0x4bab1, 0x4bc86, 0x4be46, 0x4ce84
 */

int __usercall sub_4C6E8@<eax>(int *a1@<eax>, _BYTE *src@<ebp>)
{
  __int64 v3; // rax
  _BOOL1 v4; // cc
  __int64 v5; // rax
  int v6; // esi
  unsigned __int64 v7; // rax
  __int64 v8; // kr00_8
  int v9; // esi
  int v10; // esi
  int v11; // esi
  int v12; // esi
  int v13; // esi
  int v14; // esi
  int v15; // esi
  int v16; // esi
  __int64 v17; // rax
  __int64 v18; // kr08_8
  __int64 v19; // rax
  unsigned int v20; // esi
  int v21; // esi
  int v22; // esi
  int v23; // esi
  int v24; // esi
  unsigned int v26; // [esp+4h] [ebp-20h]
  __int16 v27; // [esp+4h] [ebp-20h]
  __int16 v28; // [esp+4h] [ebp-20h]
  unsigned int v29; // [esp+8h] [ebp-1Ch]
  unsigned int v30; // [esp+8h] [ebp-1Ch]
  int v31; // [esp+8h] [ebp-1Ch]
  int v32; // [esp+Ch] [ebp-18h]
  int v33; // [esp+Ch] [ebp-18h]

  v32 = *((unsigned __int16 *)a1 + 4) - 16382;
  *((_WORD *)a1 + 4) = 16382;
  v3 = *(_QWORD *)a1;
  LODWORD(v3) = sub_4B882(v3, 0x80000000, 0, -1073856514);
  v4 = *((_WORD *)a1 + 4) <= 0x3FFEu;
  if ( *((_WORD *)a1 + 4) == 16382 )
    v4 = *(_QWORD *)a1 <= 0xB504F333F9DE6484LL;
  if ( v4 )
  {
    *(_QWORD *)a1 = v3;
    *((_WORD *)a1 + 4) = 16382;
    --v32;
  }
  else
  {
    LODWORD(v3) = sub_4B882(v3, 0x80000000, 0, -1073856514);
  }
  v26 = HIDWORD(v3);
  v29 = v3;
  v5 = *(_QWORD *)a1;
  v6 = (unsigned __int16)(*((_WORD *)a1 + 4) - 1) | 0x3FFE0000;
  LODWORD(v5) = sub_4B882(*(_QWORD *)a1, 0x80000000, 0, v6);
  v6 <<= 16;
  LOWORD(v6) = 16382;
  v7 = __PAIR64__(v26, sub_4BAB1(__PAIR64__(v26, v29), SHIDWORD(v5), v5, src, v6));
  v30 = v7;
  v6 <<= 16;
  LOWORD(v6) = 16382;
  *a1 = sub_4BC86(v7, HIDWORD(v7), v7, v6);
  a1[1] = HIDWORD(v7);
  *((_WORD *)a1 + 4) = 16382;
  v8 = ((__int64 (*)(void))sub_4CE84)();
  LOWORD(v6) = *((_WORD *)a1 + 4);
  v17 = sub_4CE84(*a1, a1[1], 2, &word_4C646);
  v9 = __ROL4__(v6, 16);
  LOWORD(v9) = 16382;
  v10 = __ROL4__(v9, 16);
  LODWORD(v17) = sub_4BAB1(v17, SHIDWORD(v8), v8, src, v10);
  v11 = __ROL4__(v10, 16);
  LOWORD(v11) = *((_WORD *)a1 + 4);
  v12 = __ROL4__(v11, 16);
  LODWORD(v17) = sub_4BC86(v17, a1[1], *a1, v12);
  v13 = __ROL4__(v12, 16);
  LOWORD(v13) = 16382;
  v14 = __ROL4__(v13, 16);
  LODWORD(v17) = sub_4BC86(v17, v26, v30, v14);
  v15 = __ROL4__(v14, 16);
  LOWORD(v15) = 16382;
  v16 = __ROL4__(v15, 16);
  LODWORD(v17) = sub_4B882(v17, v26, v30, v16);
  if ( v32 )
  {
    v18 = v17;
    v27 = v16;
    sub_4BE46(v32, (int)a1);
    v19 = *(_QWORD *)a1;
    v20 = *((unsigned __int16 *)a1 + 4) | 0xBFF20000;
    LODWORD(v19) = sub_4BC86(*(_QWORD *)a1, 0xDE8082E3, 0x865435Cu, v20);
    v21 = __ROL4__(v20, 16);
    LOWORD(v21) = v27;
    v22 = __ROL4__(v21, 16);
    v33 = sub_4B882(v19, SHIDWORD(v18), v18, v22);
    v31 = HIDWORD(v19);
    v28 = v22;
    v17 = *(_QWORD *)a1;
    v23 = *((unsigned __int16 *)a1 + 4) | 0x3FFE0000;
    LODWORD(v17) = sub_4BC86(*(_QWORD *)a1, 0xB1800000, 0, v23);
    v24 = __ROL4__(v23, 16);
    LOWORD(v24) = v28;
    v16 = __ROL4__(v24, 16);
    LODWORD(v17) = sub_4B882(v17, v31, v33, v16);
  }
  *(_QWORD *)a1 = v17;
  *((_WORD *)a1 + 4) = v16;
  return v17;
}
