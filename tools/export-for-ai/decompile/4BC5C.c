/*
 * func-name: sub_4BC5C
 * func-address: 0x4bc5c
 * callers: 0x4a480, 0x4a64e, 0x4a7de, 0x4aa3b, 0x4ac7f, 0x4b332, 0x4b481, 0x4c6a5
 * callees: 0x4bc86
 */

__int64 __fastcall sub_4BC5C(int a1, _DWORD *a2)
{
  int v2; // ebx
  __int16 v3; // si
  __int64 result; // rax

  v2 = *a2;
  v3 = *(_WORD *)(a1 + 8);
  result = sub_4BC86(*(_DWORD *)a1, *(_DWORD *)(a1 + 4), *a2, a2[1]);
  *(_QWORD *)v2 = result;
  *(_WORD *)(v2 + 8) = v3;
  return result;
}
