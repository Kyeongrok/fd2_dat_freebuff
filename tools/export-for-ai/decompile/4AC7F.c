/*
 * func-name: sub_4AC7F
 * func-address: 0x4ac7f
 * callers: 0x4a104
 * callees: 0x4bc5c
 */

int __usercall sub_4AC7F@<eax>(int a1@<ebp>, int a2@<edi>, int a3@<esi>)
{
  int v3; // eax

  v3 = sub_4BC5C(a2 + a1 + 28, a3 + a1 + 28, a2 + a1 + 28);
  return (*(int (__fastcall **)(int))(a1 + 118))(v3);
}
