/*
 * func-name: sub_4A7DE
 * func-address: 0x4a7de
 * callers: 0x4a104
 * callees: 0x4bc5c, 0x4be8c
 */

int __usercall sub_4A7DE@<eax>(int a1@<ebp>, int a2@<edi>, _DWORD *a3@<esi>)
{
  int v3; // eax

  sub_4BE8C(*a3, a3[1], a1 + 108);
  v3 = sub_4BC5C(a2 + a1 + 28, a1 + 108, a2 + a1 + 28);
  return (*(int (__fastcall **)(int))(a1 + 118))(v3);
}
