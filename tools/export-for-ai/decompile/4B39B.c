/*
 * func-name: sub_4B39B
 * func-address: 0x4b39b
 * callers: 0x4a104
 * callees: none
 */

int __usercall sub_4B39B@<eax>(
        int a1@<ebp>,
        int a2@<esi>,
        int a3,
        __int16 a4,
        int a5,
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
        __int16 a17)
{
  *(_WORD *)(a1 + 8) &= *(__int16 *)((char *)&word_49DA6 + a2);
  *(_WORD *)(a1 + 8) |= *(__int16 *)((char *)&word_49DAE + a2);
  return sub_4A104(a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
}
