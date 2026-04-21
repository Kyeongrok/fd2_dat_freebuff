/*
 * func-name: sub_4B636
 * func-address: 0x4b636
 * callers: 0x4a104
 * callees: 0x4ba87
 */

int __usercall sub_4B636@<eax>(int a1@<ebp>, int a2@<edi>, int a3@<esi>)
{
  int v3; // eax
  __int16 v4; // bx

  v3 = sub_4BA87(a3 + a1 + 28, a2 + a1 + 28, a3 + a1 + 28);
  *(_WORD *)(a1 + 8) &= *(__int16 *)((char *)&word_49DA6 + a2);
  *(_WORD *)(a1 + 8) |= *(__int16 *)((char *)&word_49DAE + a2);
  v4 = *(__int16 *)((char *)&word_49D5A + *(unsigned __int16 *)((char *)&word_49D56 + a2));
  *(_WORD *)(a1 + 4) &= 0xC7FFu;
  *(_WORD *)(a1 + 4) |= v4;
  return (*(int (__fastcall **)(int))(a1 + 118))(v3);
}
