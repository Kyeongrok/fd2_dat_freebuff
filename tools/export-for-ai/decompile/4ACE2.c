/*
 * func-name: sub_4ACE2
 * func-address: 0x4ace2
 * callers: 0x4a104
 * callees: 0x4ba87
 */

int __usercall sub_4ACE2@<eax>(int a1@<ebp>, int a2@<edi>, int a3@<esi>)
{
  int v3; // eax

  v3 = sub_4BA87(a2 + a1 + 28, a3 + a1 + 28, a2 + a1 + 28);
  return (*(int (__fastcall **)(int))(a1 + 118))(v3);
}
