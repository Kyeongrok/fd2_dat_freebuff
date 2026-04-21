/*
 * func-name: sub_4E5CC
 * func-address: 0x4e5cc
 * callers: 0x4e4f6, 0x4e5cc
 * callees: 0x4e5cc, 0x4e680
 */

void __usercall sub_4E5CC(__int16 a1@<dx>, __int16 a2@<cx>, int a3@<ebx>, int a4@<ebp>, int a5@<edi>, int a6@<esi>)
{
  int v7; // edi
  unsigned __int8 *v8; // ebx
  int v9; // eax
  char v10; // cf
  int v11; // ebx
  __int16 v12; // dx
  __int16 v13; // cx
  unsigned __int8 *v14; // ebx
  int v15; // eax
  int v16; // ebx
  __int16 v17; // cx
  __int16 v18; // dx
  unsigned __int8 *v19; // ebx
  int v20; // eax
  int v21; // ebx
  __int16 v22; // dx
  __int16 v23; // cx
  unsigned __int8 *v24; // ebx
  int v25; // eax

  HIBYTE(a2) = 3;
  *(_WORD *)a5 = a1;
  *(_WORD *)(a5 + 2) = a2;
  *(_DWORD *)(a5 + 4) = a3;
  v7 = a5 + 8;
  ++byte_60077;
  LOBYTE(a1) = a1 + 1;
  if ( (unsigned __int8)a1 < (unsigned __int8)byte_60068 )
  {
    v8 = (unsigned __int8 *)(a3 + 4);
    LOBYTE(v9) = sub_4E680(a1, a2, v8, a6);
    if ( !v10 )
      sub_4E5CC(v9, a1, a2, (int)v8, a4, v7);
  }
  v11 = *(_DWORD *)(v7 - 4);
  v13 = *(_WORD *)(v7 - 6);
  v12 = *(_WORD *)(v7 - 8);
  HIBYTE(v13) = 1;
  *(_BYTE *)(v7 - 5) = 1;
  if ( (_BYTE)v12 )
  {
    LOBYTE(v12) = v12 - 1;
    v14 = (unsigned __int8 *)(v11 - 4);
    LOBYTE(v15) = sub_4E680(v12, v13, v14, a6);
    if ( !v10 )
      sub_4E5CC(v15, v12, v13, (int)v14, a4, v7);
  }
  v16 = *(_DWORD *)(v7 - 4);
  v17 = *(_WORD *)(v7 - 6);
  v18 = *(_WORD *)(v7 - 8);
  HIBYTE(v17) = 0;
  *(_BYTE *)(v7 - 5) = 0;
  if ( ++HIBYTE(v18) < (unsigned __int8)byte_60069 )
  {
    v19 = (unsigned __int8 *)(a4 + v16);
    LOBYTE(v20) = sub_4E680(v18, v17, v19, a6);
    if ( !v10 )
      sub_4E5CC(v20, v18, v17, (int)v19, a4, v7);
  }
  v21 = *(_DWORD *)(v7 - 4);
  v23 = *(_WORD *)(v7 - 6);
  v22 = *(_WORD *)(v7 - 8);
  HIBYTE(v23) = 2;
  *(_BYTE *)(v7 - 5) = 2;
  if ( HIBYTE(v22) )
  {
    --HIBYTE(v22);
    v24 = (unsigned __int8 *)(v21 - a4);
    LOBYTE(v25) = sub_4E680(v22, v23, v24, a6);
    if ( !v10 )
      sub_4E5CC(v25, v22, v23, (int)v24, a4, v7);
  }
  --byte_60077;
}
