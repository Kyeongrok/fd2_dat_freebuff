/*
 * func-name: sub_4E42C
 * func-address: 0x4e42c
 * callers: 0x4e390, 0x4e42c
 * callees: 0x4e42c, 0x4e4be
 */

int __usercall sub_4E42C@<eax>(
        int result@<eax>,
        __int16 a2@<dx>,
        char a3@<cl>,
        int a4@<ebx>,
        int a5@<ebp>,
        int a6@<edi>)
{
  int v6; // edi
  int v7; // ebx
  char v8; // cf
  char v9; // cl
  __int16 v10; // dx
  int v11; // ebx
  char v12; // cl
  __int16 v13; // dx
  int v14; // ebx
  char v15; // cl
  __int16 v16; // dx
  int v17; // ebx

  *(_WORD *)a6 = a2;
  *(_BYTE *)(a6 + 2) = a3;
  *(_DWORD *)(a6 + 3) = a4;
  v6 = a6 + 7;
  LOBYTE(a2) = a2 + 1;
  if ( (unsigned __int8)a2 < (unsigned __int8)byte_60068 )
  {
    v7 = a4 + 4;
    result = sub_4E4BE(result, a2, v7, a3);
    if ( !v8 )
      result = sub_4E42C(result, a2, a3, v7, a5, v6);
  }
  v9 = *(_BYTE *)(v6 - 5);
  v10 = *(_WORD *)(v6 - 7);
  if ( (_BYTE)v10 )
  {
    LOBYTE(v10) = v10 - 1;
    v11 = *(_DWORD *)(v6 - 4) - 4;
    result = sub_4E4BE(result, v10, v11, v9);
    if ( !v8 )
      result = sub_4E42C(result, v10, v9, v11, a5, v6);
  }
  v12 = *(_BYTE *)(v6 - 5);
  v13 = *(_WORD *)(v6 - 7);
  if ( ++HIBYTE(v13) < (unsigned __int8)byte_60069 )
  {
    v14 = a5 + *(_DWORD *)(v6 - 4);
    result = sub_4E4BE(result, v13, v14, v12);
    if ( !v8 )
      result = sub_4E42C(result, v13, v12, v14, a5, v6);
  }
  v15 = *(_BYTE *)(v6 - 5);
  v16 = *(_WORD *)(v6 - 7);
  if ( HIBYTE(v16) )
  {
    --HIBYTE(v16);
    v17 = *(_DWORD *)(v6 - 4) - a5;
    result = sub_4E4BE(result, v16, v17, v15);
    if ( !v8 )
      return sub_4E42C(result, v16, v15, v17, a5, v6);
  }
  return result;
}
