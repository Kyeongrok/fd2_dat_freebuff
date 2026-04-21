/*
 * func-name: sub_4B9EE
 * func-address: 0x4b9ee
 * callers: 0x4a49f, 0x4a4bb, 0x4a66d, 0x4a689, 0x4a801, 0x4a821, 0x4aa5c, 0x4aa7a, 0x4ac94, 0x4aca6, 0x4ad7c, 0x4b23a, 0x4b3e6, 0x4b3f8, 0x4b4cc
 * callees: none
 */

int __fastcall sub_4B9EE(unsigned int a1, int a2)
{
  int v2; // esi
  _BOOL1 v3; // cf
  _BOOL1 v4; // zf
  int v5; // edi
  int result; // eax
  int v7; // edi
  int v8; // eax

  if ( (*(_WORD *)(a1 + 8) | 0x8000) == 0xFFFF && *(_DWORD *)a1 | (2 * *(_DWORD *)(a1 + 4))
    || (*(_WORD *)(a2 + 8) | 0x8000) == 0xFFFF && *(_DWORD *)a2 | (2 * *(_DWORD *)(a2 + 4)) )
  {
    return 2;
  }
  v2 = *(_DWORD *)(a1 + 6);
  if ( (v2 ^ *(_DWORD *)(a2 + 6)) >= 0 )
  {
    LOWORD(v2) = *(_WORD *)(a1 + 8);
    v3 = (unsigned __int16)v2 < *(_WORD *)(a2 + 8);
    v4 = (_WORD)v2 == *(_WORD *)(a2 + 8);
    if ( (_WORD)v2 == *(_WORD *)(a2 + 8) )
    {
      v3 = *(_QWORD *)a1 < *(_QWORD *)a2;
      v4 = *(_QWORD *)a1 == *(_QWORD *)a2;
    }
    v5 = 0;
    if ( v4 )
      return v5;
    v2 ^= (a1 >> 1) | (v3 << 31);
    return -2 * __CFADD__(v2, v2) + 1;
  }
  v7 = *(_DWORD *)(a2 + 4) | *(_DWORD *)(a1 + 4) | *(_DWORD *)a2 | *(_DWORD *)a1;
  LOWORD(a1) = *(_WORD *)(a1 + 8);
  v8 = a1 << 16;
  LOWORD(v8) = *(_WORD *)(a2 + 8);
  result = v7 | v8 & 0x7FFF7FFF;
  if ( result )
    return -2 * __CFADD__(v2, v2) + 1;
  return result;
}
