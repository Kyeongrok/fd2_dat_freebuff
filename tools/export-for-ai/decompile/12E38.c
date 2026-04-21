/*
 * func-name: sub_12E38
 * func-address: 0x12e38
 * callers: 0x115b6, 0x12263, 0x13a44, 0x14237, 0x15df3, 0x190ac, 0x1acf3, 0x1ecc7, 0x2000a, 0x21548, 0x2cf30, 0x2d80d, 0x2dfc8, 0x2e2b0, 0x2f7b6, 0x2ff01, 0x30e25, 0x35854
 * callees: 0x3702f
 */

char __fastcall sub_12E38(__int32 a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  __int16 v7; // bx
  __int16 v8; // ax
  _BYTE *v9; // eax
  char result; // al

  sub_3702F(a1, a2, a3, a4, 12);
  v7 = *(_WORD *)(dword_53A51 + 4 * (a5 + dword_53AC1 * a6) + 4);
  HIBYTE(v7) &= 3u;
  v8 = *(_BYTE *)(dword_53A51 + 4 * (a5 + dword_53AC1 * a6) + 6) & 0x1F;
  *(_WORD *)a7 = v7;
  *(_WORD *)(a7 + 2) = v8;
  v9 = (_BYTE *)(4 * v7 + dword_53A69);
  *(_BYTE *)(a7 + 4) = *v9;
  *(_BYTE *)(a7 + 5) = v9[1];
  *(_BYTE *)(a7 + 6) = v9[2];
  result = v9[3];
  *(_BYTE *)(a7 + 7) = result;
  return result;
}
