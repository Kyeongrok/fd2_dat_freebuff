/*
 * func-name: sub_4A4F6
 * func-address: 0x4a4f6
 * callers: 0x4a104
 * callees: 0x4b81a, 0x4c052
 */

int __usercall sub_4A4F6@<eax>(int a1@<ebp>, int a2@<edi>, _DWORD *a3@<esi>)
{
  int v3; // eax

  sub_4C052(*a3, a1 + 108);
  v3 = sub_4B81A(a1 + 108, a2 + a1 + 28, a2 + a1 + 28);
  return (*(int (__fastcall **)(int))(a1 + 118))(v3);
}
