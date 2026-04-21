/*
 * func-name: sub_4A553
 * func-address: 0x4a553
 * callers: 0x4a104
 * callees: 0x4c052
 */

int __usercall sub_4A553@<eax>(
        int a1@<ebp>,
        int a2@<edi>,
        _DWORD *a3@<esi>,
        int a4,
        __int16 a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        __int16 a18)
{
  int v18; // edi
  __int16 v19; // bx

  v18 = *(unsigned __int16 *)((char *)&word_49D58 + a2);
  v19 = *(__int16 *)((char *)&word_49D5A + v18);
  *(_WORD *)(a1 + 4) &= 0xC7FFu;
  *(_WORD *)(a1 + 4) |= v19;
  *(_WORD *)(a1 + 8) &= *(__int16 *)((char *)&word_49DA6 + v18);
  sub_4C052(*a3, v18 + a1 + 28);
  return sub_4A104(a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
}
