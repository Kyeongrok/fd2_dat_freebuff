/*
 * func-name: sub_4CBC4
 * func-address: 0x4cbc4
 * callers: 0x4b018
 * callees: 0x4b852, 0x4b882, 0x4bab1, 0x4bc86
 */

int __fastcall sub_4CBC4(int a1, int a2, int a3, int a4)
{
  int v5; // esi
  _BOOL1 v6; // zf
  unsigned __int16 n0x3FFF; // bx
  int v8; // ecx
  signed __int64 v9; // rax
  _BOOL1 v10; // cf
  __int16 v11; // bx
  unsigned __int64 p_sub_4CB9C_2; // rax
  int src__1; // esi
  int v14; // esi
  int v15; // esi
  int v16; // esi
  int v17; // esi
  int v18; // esi
  int v19; // esi
  int v20; // esi
  int v21; // esi
  int v22; // esi
  int v23; // esi
  int v24; // esi
  unsigned __int64 v25; // rax
  unsigned int v26; // ecx
  int (*p_sub_4CB9C)(); // esi
  int v28; // eax
  int v29; // et0
  __int32 v31; // [esp-2Ch] [ebp-38h] BYREF
  __int32 v32; // [esp-28h] [ebp-34h] BYREF
  unsigned int p_sub_4CB9C_3; // [esp-24h] [ebp-30h] BYREF
  __int32 src_; // [esp-20h] [ebp-2Ch] BYREF
  __int32 v35; // [esp-1Ch] [ebp-28h] BYREF
  int (*p_sub_4CB9C_1)(); // [esp-18h] [ebp-24h] BYREF
  int v37; // [esp-14h] [ebp-20h]
  int v38; // [esp-10h] [ebp-1Ch]
  int v39; // [esp-8h] [ebp-14h]

  v39 = a4;
  v5 = 0;
  LOWORD(a4) = *(_WORD *)(a1 + 8);
  *(_BYTE *)(a1 + 9) &= ~0x80u;
  v6 = *(_WORD *)(a1 + 8) == 0;
  if ( !*(_WORD *)(a1 + 8) )
    v6 = *(_QWORD *)a1 == 0;
  if ( v6 )
  {
    v8 = 0;
  }
  else
  {
    if ( (a4 & 0x8000u) != 0 )
    {
      v5 = -1;
      sub_4B852(a1, a2, a1, a4, 0, 0x80000000, 49151);
      *(_BYTE *)(a1 + 9) ^= 0x80u;
    }
    n0x3FFF = *(_WORD *)(a1 + 8) + 4;
    v8 = 0;
    v9 = *(_QWORD *)a1;
    while ( n0x3FFF >= 0x3FFFu )
    {
      v10 = __CFADD__(v9, v9);
      v9 *= 2LL;
      v8 += v10 + v8;
      --n0x3FFF;
    }
    if ( v9 )
    {
      while ( v9 >= 0 )
      {
        v9 *= 2LL;
        --n0x3FFF;
      }
      v11 = n0x3FFF - 4;
    }
    else
    {
      v11 = 0;
    }
    *(_QWORD *)a1 = v9;
    *(_WORD *)(a1 + 8) = v11;
  }
  v38 = v5;
  v37 = v8;
  p_sub_4CB9C_2 = *(_QWORD *)a1;
  LOWORD(v5) = *(_WORD *)(a1 + 8);
  src__1 = v5 << 16;
  LOWORD(src__1) = *(_WORD *)(a1 + 8);
  LODWORD(p_sub_4CB9C_2) = sub_4BC86(*(_QWORD *)a1, *(_DWORD *)(a1 + 4), *(_DWORD *)a1, src__1);
  v35 = HIDWORD(p_sub_4CB9C_2);
  p_sub_4CB9C_1 = (int (*)())p_sub_4CB9C_2;
  src_ = src__1;
  v14 = (unsigned __int16)src__1 | 0x40030000;
  LODWORD(p_sub_4CB9C_2) = _InterlockedExchange(
                             (volatile __int32 *)&p_sub_4CB9C_1,
                             sub_4B882(p_sub_4CB9C_2, -1501390215, 468852620, v14));
  HIDWORD(p_sub_4CB9C_2) = _InterlockedExchange(&v35, SHIDWORD(p_sub_4CB9C_2));
  v15 = (unsigned __int16)_InterlockedExchange(&src_, v14) | 0x3FFA0000;
  LODWORD(p_sub_4CB9C_2) = sub_4BC86(p_sub_4CB9C_2, 0xEC96F0D6, 0x9D7BFDBu, v15);
  v16 = (unsigned __int16)v15 | 0x40010000;
  LODWORD(p_sub_4CB9C_2) = sub_4B882(p_sub_4CB9C_2, -422247142, -449388153, v16);
  v17 = __ROL4__(v16, 16);
  LOWORD(v17) = *(_WORD *)(a1 + 8);
  v18 = __ROL4__(v17, 16);
  LODWORD(p_sub_4CB9C_2) = sub_4BC86(p_sub_4CB9C_2, *(_DWORD *)(a1 + 4), *(_DWORD *)a1, v18);
  v32 = HIDWORD(p_sub_4CB9C_2);
  p_sub_4CB9C_3 = p_sub_4CB9C_2;
  v31 = v18;
  v19 = __ROL4__(v18 ^ 0x8000, 16);
  LOWORD(v19) = src_;
  v20 = __ROL4__(v19, 16);
  LODWORD(p_sub_4CB9C_2) = _InterlockedExchange(
                             (volatile __int32 *)&p_sub_4CB9C_3,
                             sub_4B882(p_sub_4CB9C_2, v35, (int)p_sub_4CB9C_1, v20));
  HIDWORD(v25) = _InterlockedExchange(&v32, SHIDWORD(p_sub_4CB9C_2));
  v21 = __ROL4__(_InterlockedExchange(&v31, v20), 16);
  LOWORD(v21) = src_;
  v22 = __ROL4__(v21, 16);
  LODWORD(v25) = sub_4B882(v25, v35, (int)p_sub_4CB9C_1, v22);
  v23 = __ROL4__(v22, 16);
  LOWORD(v23) = v31;
  v24 = __ROL4__(v23, 16);
  LODWORD(v25) = sub_4BAB1(v25, v32, p_sub_4CB9C_3, &src_, v24);
  *(_QWORD *)a1 = v25;
  *(_WORD *)(a1 + 8) = v24;
  v26 = v37;
  p_sub_4CB9C = sub_4CB9C;
  while ( v26 )
  {
    v10 = v26 & 1;
    v26 >>= 1;
    if ( v10 )
    {
      v37 = v26;
      p_sub_4CB9C_1 = p_sub_4CB9C;
      LOWORD(v25) = *(_WORD *)(a1 + 8);
      v28 = (_DWORD)v25 << 16;
      LOWORD(v28) = *((_WORD *)p_sub_4CB9C + 4);
      v29 = v28;
      v25 = *(_QWORD *)p_sub_4CB9C;
      LODWORD(v25) = sub_4BC86(*(_QWORD *)p_sub_4CB9C, *(_DWORD *)(a1 + 4), *(_DWORD *)a1, v29);
      *(_QWORD *)a1 = v25;
      *(_WORD *)(a1 + 8) = v29;
      p_sub_4CB9C = p_sub_4CB9C_1;
      v26 = v37;
    }
    p_sub_4CB9C = (int (*)())((char *)p_sub_4CB9C + 10);
  }
  *(_WORD *)(a1 + 8) += v38;
  return sub_4B852(a1, SHIDWORD(v25), a1, 0, 0, 0x80000000, 49151);
}
