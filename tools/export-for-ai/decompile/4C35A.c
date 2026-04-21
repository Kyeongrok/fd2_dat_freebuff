/*
 * func-name: sub_4C35A
 * func-address: 0x4c35a
 * callers: 0x4c2a4
 * callees: 0x4b852, 0x4b882, 0x4bab1, 0x4bc86, 0x4ced6
 */

__int16 __usercall __spoils<> sub_4C35A@<ax>(__int64 a1@<edx:eax>, _BYTE *src@<ebp>, int a3@<esi>)
{
  int v3; // edi
  __int16 v4; // cx
  int v5; // esi
  unsigned __int16 n0x3FFD; // ax
  _BOOL1 v7; // cc
  int v8; // esi
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  int v11; // esi
  int v12; // esi
  int v13; // ebx
  char v14; // cf
  int v16; // [esp-1Ch] [ebp-24h]
  int v17; // [esp-18h] [ebp-20h]
  unsigned int v18; // [esp-14h] [ebp-1Ch]

  v3 = a1;
  v4 = *(unsigned __int8 *)(a1 + 9);
  *(_BYTE *)(a1 + 9) = v4 & 0x7F;
  if ( *(_WORD *)(a1 + 8) == 0x3FFF && *(_DWORD *)(a1 + 4) == 0x80000000 && !*(_DWORD *)a1 )
  {
    *(_DWORD *)a1 = 560513589;
    *(_DWORD *)(a1 + 4) = -921707870;
    LOBYTE(a1) = -2;
    BYTE1(a1) = v4 & 0x80 | 0x3F;
    *(_WORD *)(v3 + 8) = a1;
  }
  else
  {
    if ( *(__int16 *)(a1 + 8) >= 0x3FFF )
    {
      LOWORD(a3) = *(_WORD *)(a1 + 8);
      v5 = a3 << 16;
      LOWORD(v5) = 0x3FFF;
      *(_DWORD *)a1 = sub_4BAB1(0x8000000000000000LL, *(_DWORD *)(a1 + 4), *(_DWORD *)a1, src, v5);
      *(_DWORD *)(v3 + 4) = 0x80000000;
      *(_WORD *)(v3 + 8) = 0x3FFF;
      HIBYTE(v4) = 2;
    }
    n0x3FFD = *(_WORD *)(v3 + 8);
    v7 = n0x3FFD <= 0x3FFDu;
    if ( n0x3FFD == 16381 )
      v7 = *(_QWORD *)v3 <= 0x8930A2F4F66AB09BLL;
    if ( !v7 )
    {
      HIWORD(v8) = 0x3FFF;
      v9 = *(_QWORD *)v3;
      LOWORD(v8) = *(_WORD *)(v3 + 8);
      v18 = sub_4B882(*(_QWORD *)v3, -575416510, -1033546850, v8);
      v17 = HIDWORD(v9);
      v16 = v8;
      HIWORD(v8) = 0x3FFF;
      v10 = *(_QWORD *)v3;
      LOWORD(v8) = *(_WORD *)(v3 + 8);
      LODWORD(v10) = sub_4BC86(*(_QWORD *)v3, 0xDDB3D742, 0xC265539E, v8);
      v11 = __ROL4__(v8, 16);
      LOWORD(v11) = -16385;
      v12 = __ROL4__(v11, 16);
      LODWORD(v10) = sub_4B882(v10, 0x80000000, 0, v12);
      v13 = v16 << 16;
      LOWORD(v13) = v12;
      *(_DWORD *)v3 = sub_4BAB1(v10, v17, v18, src, v13);
      *(_DWORD *)(v3 + 4) = HIDWORD(v10);
      *(_WORD *)(v3 + 8) = v12;
      HIBYTE(v4) |= 1u;
    }
    HIDWORD(a1) = &word_4C24A;
    LOWORD(a1) = sub_4CED6(v3, &word_4C24A, 8, v4);
    v14 = HIBYTE(v4) & 1;
    HIBYTE(v4) >>= 1;
    if ( v14 )
      a1 = sub_4B852(v3, (int)&word_4C24A, v3, v4, 1805331491, -2046127679, 16382);
    v14 = HIBYTE(v4) & 1;
    HIBYTE(v4) >>= 1;
    if ( v14 )
    {
      LOWORD(a1) = sub_4B852(v3, SHIDWORD(a1), v3, v4, 560513589, -921707870, 49151);
      *(_BYTE *)(v3 + 9) ^= 0x80u;
    }
    if ( (v4 & 0x80u) != 0 )
      *(_BYTE *)(v3 + 9) ^= 0x80u;
  }
  return a1;
}
