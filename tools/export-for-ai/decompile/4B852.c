/*
 * func-name: sub_4B852
 * func-address: 0x4b852
 * callers: 0x4c2a4, 0x4c35a, 0x4c68c, 0x4c980, 0x4cbc4
 * callees: 0x4b882
 */

__int64 __fastcall sub_4B852(int a1, int a2, int a3, int a4, int a5, int a6, __int16 a7)
{
  __int16 v7; // si
  __int64 result; // rax

  v7 = *(_WORD *)(a1 + 8);
  result = sub_4B882(*(_DWORD *)a1, *(_DWORD *)(a1 + 4), a5, a6);
  *(_QWORD *)a5 = result;
  *(_WORD *)(a5 + 8) = v7;
  return result;
}
