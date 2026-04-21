/*
 * func-name: sub_4A59E
 * func-address: 0x4a59e
 * callers: 0x4a104
 * callees: 0x4bf0c
 */

void __usercall sub_4A59E(int a1@<ebp>, int a2@<edi>, _DWORD *a3@<esi>)
{
  *a3 = sub_4BF0C(a2 + a1 + 28);
  JUMPOUT(0x4A2BD);
}
