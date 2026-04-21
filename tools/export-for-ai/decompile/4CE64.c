/*
 * func-name: sub_4CE64
 * func-address: 0x4ce64
 * callers: none
 * callees: 0x4ce84
 */

__int64 __fastcall sub_4CE64(int a1, int a2, int a3)
{
  __int16 v3; // si
  __int64 result; // rax

  v3 = *(_WORD *)(a1 + 8);
  result = sub_4CE84(*(_DWORD *)a1, *(_DWORD *)(a1 + 4), a3, a2);
  *(_QWORD *)a1 = result;
  *(_WORD *)(a1 + 8) = v3;
  return result;
}
