/*
 * func-name: sub_4A985
 * func-address: 0x4a985
 * callers: 0x4a104
 * callees: 0x4bf8b
 */

void __usercall sub_4A985(int a1@<ebp>, int a2@<edi>, _QWORD *a3@<esi>)
{
  *a3 = sub_4BF8B(a2 + a1 + 28);
  JUMPOUT(0x4A2BD);
}
