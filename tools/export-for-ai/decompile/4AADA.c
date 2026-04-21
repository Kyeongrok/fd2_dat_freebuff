/*
 * func-name: sub_4AADA
 * func-address: 0x4aada
 * callers: 0x4a104
 * callees: 0x4ba87, 0x4be46
 */

int __usercall sub_4AADA@<eax>(int a1@<ebp>, int a2@<edi>, __int16 *a3@<esi>)
{
  int v3; // eax

  sub_4BE46(*a3, a1 + 108);
  v3 = sub_4BA87(a2 + a1 + 28, a1 + 108, a2 + a1 + 28);
  return (*(int (__fastcall **)(int))(a1 + 118))(v3);
}
