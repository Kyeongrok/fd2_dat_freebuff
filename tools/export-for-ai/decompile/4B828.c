/*
 * func-name: sub_4B828
 * func-address: 0x4b828
 * callers: 0x4a461, 0x4a62f, 0x4a7bb, 0x4aa1a, 0x4ac6a, 0x4b31d, 0x4b436
 * callees: 0x4b882
 */

__int64 __fastcall sub_4B828(int a1, _DWORD *a2)
{
  int v2; // ebx
  __int16 v3; // si
  __int64 result; // rax

  v2 = *a2;
  v3 = *(_WORD *)(a1 + 8);
  result = sub_4B882(*(_DWORD *)a1, *(_DWORD *)(a1 + 4), *a2, a2[1]);
  *(_QWORD *)v2 = result;
  *(_WORD *)(v2 + 8) = v3;
  return result;
}
