/*
 * func-name: sub_4AA98
 * func-address: 0x4aa98
 * callers: 0x4a104
 * callees: 0x4b81a, 0x4be46
 */

int __usercall sub_4AA98@<eax>(int a1@<ebp>, int a2@<edi>, __int16 *a3@<esi>)
{
  int v3; // eax

  sub_4BE46(*a3, a1 + 108);
  v3 = sub_4B81A(a2 + a1 + 28, a1 + 108, a2 + a1 + 28);
  return (*(int (__fastcall **)(int))(a1 + 118))(v3);
}
