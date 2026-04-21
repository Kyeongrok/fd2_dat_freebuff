/*
 * func-name: sub_4BA87
 * func-address: 0x4ba87
 * callers: 0x4a515, 0x4a534, 0x4a6e3, 0x4a702, 0x4a887, 0x4a8aa, 0x4aada, 0x4aafb, 0x4ace2, 0x4acf7, 0x4b371, 0x4b386, 0x4b5eb, 0x4b636, 0x4c2a4
 * callees: 0x4bab1
 */

__int64 __fastcall sub_4BA87(int a1, _DWORD *a2)
{
  int v2; // ebx
  __int16 v3; // si
  __int64 result; // rax

  v2 = *a2;
  v3 = *(_WORD *)(a1 + 8);
  result = sub_4BAB1(*(_DWORD *)a1, *(_DWORD *)(a1 + 4), *a2, a2[1]);
  *(_QWORD *)v2 = result;
  *(_WORD *)(v2 + 8) = v3;
  return result;
}
