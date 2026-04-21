/*
 * func-name: sub_4B40A
 * func-address: 0x4b40a
 * callers: 0x4a104
 * callees: none
 */

void __usercall sub_4B40A(int a1@<ebp>, int a2@<edi>, int a3@<esi>)
{
  *(_DWORD *)(a3 + a1 + 28) = *(_DWORD *)(a2 + a1 + 28);
  *(_DWORD *)(a3 + a1 + 32) = *(_DWORD *)(a2 + a1 + 32);
  *(_WORD *)(a3 + a1 + 36) = *(_WORD *)(a2 + a1 + 36);
  *(_WORD *)(a1 + 8) &= *(__int16 *)((char *)&word_49DA6 + a3);
  JUMPOUT(0x4A2BD);
}
