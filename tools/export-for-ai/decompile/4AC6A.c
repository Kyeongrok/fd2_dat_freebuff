/*
 * func-name: sub_4AC6A
 * func-address: 0x4ac6a
 * callers: 0x4a104, 0x4a424
 * callees: 0x4b828
 */

int __usercall sub_4AC6A@<eax>(int a1@<ebp>, int a2@<edi>, int a3@<esi>)
{
  int v3; // eax

  v3 = sub_4B828(a2 + a1 + 28, a3 + a1 + 28, a2 + a1 + 28);
  return (*(int (__fastcall **)(int))(a1 + 118))(v3);
}
