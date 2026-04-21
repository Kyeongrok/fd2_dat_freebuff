/*
 * func-name: sub_4CED6
 * func-address: 0x4ced6
 * callers: 0x4c35a, 0x4c980
 * callees: 0x4bc86, 0x4ce84
 */

int __usercall sub_4CED6@<eax>(int a1@<eax>, int a2@<edx>, int a3@<esi>)
{
  int v6; // esi
  int v7; // esi
  int v8; // esi
  unsigned __int64 v9; // rax

  v9 = *(_QWORD *)a1;
  LOWORD(a3) = *(_WORD *)(a1 + 8);
  v6 = a3 << 16;
  LOWORD(v6) = *(_WORD *)(a1 + 8);
  sub_4BC86(v9, *(_DWORD *)(a1 + 4), v9, v6);
  sub_4CE84(a2, v6);
  v7 = __ROL4__(v6, 16);
  LOWORD(v7) = *(_WORD *)(a1 + 8);
  v8 = __ROL4__(v7, 16);
  LODWORD(v9) = sub_4BC86(v9, *(_DWORD *)(a1 + 4), *(_DWORD *)a1, v8);
  *(_QWORD *)a1 = v9;
  *(_WORD *)(a1 + 8) = v8;
  return v9;
}
