/*
 * func-name: sub_4C980
 * func-address: 0x4c980
 * callers: 0x4cb77, 0x4cb81, 0x4cb8e
 * callees: 0x4b852, 0x4bab1, 0x4bc86, 0x4c523, 0x4ce84, 0x4ced6
 */

int __usercall sub_4C980@<eax>(int a1@<eax>, int a2@<esi>)
{
  int v2; // ecx
  __int64 v3; // rax
  int v4; // edi
  int n0x3FFF_1; // esi
  int n8; // ecx
  __int16 v7; // ax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  int v10; // esi
  unsigned __int64 v11; // kr00_8
  __int16 v13; // [esp-4h] [ebp-1Ch]
  __int16 v16; // [esp+4h] [ebp-14h]
  __int64 v17; // [esp+Ch] [ebp-Ch]
  __int16 n0x3FFF; // [esp+14h] [ebp-4h]
  _DWORD src_[5]; // [esp+18h] [ebp+0h] BYREF

  LOWORD(n0x3FFF_1) = *(_WORD *)(a1 + 8);
  v3 = *(_QWORD *)a1;
  v2 = a1;
  *(_DWORD *)a1 = sub_4C523(v3, 0xC90FDAA2, 0x2168C235u, 16382, n0x3FFF_1);
  *(_DWORD *)(a1 + 4) = HIDWORD(v3);
  *(_WORD *)(a1 + 8) = n0x3FFF_1;
  LOBYTE(v3) = -2;
  v4 = a1;
  HIWORD(n0x3FFF_1) = HIWORD(a2);
  if ( *(char *)(a1 + 9) < 0 )
  {
    v3 = sub_4B852(a1, SHIDWORD(v3), a1, a1, 560513589, -921707870, 16382);
    LOBYTE(v3) = -3;
  }
  BYTE1(v3) = a2;
  LOBYTE(v3) = ((a2 & 2) + v3) & 7;
  v16 = v3;
  if ( (v3 & 1) != 0 )
  {
    sub_4B852(v4, SHIDWORD(v3), v4, v2, 560513589, -921707870, 49150);
    *(_BYTE *)(v4 + 9) ^= 0x80u;
  }
  n8 = (unsigned __int16)(*(_WORD *)(v4 + 8) - 16382);
  if ( (__int16)n8 >= -32 )
  {
    if ( (n8 & 0x8000u) == 0 )
      LOWORD(n8) = 0;
    LOWORD(n8) = -(__int16)n8;
    if ( (__int16)n8 > 8 )
      LOWORD(n8) = 8;
    LOWORD(n8) = word_4C96E[n8];
    HIBYTE(v7) = HIBYTE(v16);
    LOBYTE(v7) = (v16 + 1) & 2;
    if ( (_BYTE)v7 || HIBYTE(v16) == 1 )
    {
      v13 = v7;
      v8 = *(_QWORD *)v4;
      LOWORD(n0x3FFF_1) = *(_WORD *)(v4 + 8);
      n0x3FFF_1 <<= 16;
      LOWORD(n0x3FFF_1) = *(_WORD *)(v4 + 8);
      LODWORD(v8) = sub_4BC86(*(_QWORD *)v4, *(_DWORD *)(v4 + 4), *(_DWORD *)v4, n0x3FFF_1);
      v17 = sub_4CE84(v8, HIDWORD(v8), 8 - n8, (char *)dword_4C914 + 10 * n8);
      n0x3FFF = n0x3FFF_1;
      v7 = v13;
    }
    if ( !(_BYTE)v7 || HIBYTE(v7) == 1 )
      sub_4CED6(v4, &word_4C8BA[5 * n8], 8 - n8, 10 * n8);
  }
  else
  {
    v17 = 0x8000000000000000LL;
    n0x3FFF = 0x3FFF;
  }
  if ( (((_BYTE)v16 + 1) & 2) != 0 )
  {
    v9 = v17;
    LOWORD(n0x3FFF_1) = n0x3FFF;
  }
  else
  {
    v9 = *(_QWORD *)v4;
    LOWORD(n0x3FFF_1) = *(_WORD *)(v4 + 8);
  }
  if ( (v16 & 4) != 0 )
    LOWORD(n0x3FFF_1) = n0x3FFF_1 ^ 0x8000;
  if ( HIBYTE(v16) == 1 )
  {
    v10 = __ROL4__(n0x3FFF_1, 16);
    if ( (((_BYTE)v16 + 3) & 2) != 0 )
    {
      v11 = v17;
      LOWORD(v10) = n0x3FFF;
    }
    else
    {
      LOWORD(v10) = *(_WORD *)(v4 + 8);
      v11 = *(_QWORD *)v4;
    }
    if ( (((_BYTE)v16 + 2) & 4) != 0 )
      v10 ^= 0x8000u;
    n0x3FFF_1 = __ROL4__(v10, 16);
    if ( v11 || (n0x3FFF_1 & 0x7FFF0000) != 0 )
    {
      LODWORD(v9) = sub_4BAB1(v9, SHIDWORD(v11), v11, src_, n0x3FFF_1);
    }
    else
    {
      v9 = 0x8000000000000000LL;
      LOWORD(n0x3FFF_1) = n0x3FFF_1 | 0x7FFF;
    }
  }
  *(_QWORD *)v4 = v9;
  *(_WORD *)(v4 + 8) = n0x3FFF_1;
  return v9;
}
