/*
 * func-name: sub_4A967
 * func-address: 0x4a967
 * callers: 0x4a104
 * callees: none
 */

void __usercall sub_4A967(int a1@<ebp>, int a2@<edi>, int a3@<esi>)
{
  *(_DWORD *)a3 = *(_DWORD *)(a2 + a1 + 28);
  *(_DWORD *)(a3 + 4) = *(_DWORD *)(a2 + a1 + 32);
  *(_WORD *)(a3 + 8) = *(_WORD *)(a2 + a1 + 36);
  JUMPOUT(0x4A2BD);
}
