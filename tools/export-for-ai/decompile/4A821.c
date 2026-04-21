/*
 * func-name: sub_4A821
 * func-address: 0x4a821
 * callers: 0x4a104
 * callees: 0x4b9ee, 0x4be8c
 */

int __usercall sub_4A821@<eax>(
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
  __int16 v18; // dx
  __int16 v19; // bx
  int v21; // eax

  sub_4BE8C(*a3, a3[1], a1 + 108);
  v21 = sub_4B9EE(a2 + a1 + 28, a1 + 108);
  v18 = *(_WORD *)(a1 + 4) & 0xB8FF;
  HIBYTE(v18) |= byte_49DF6[v21 + 1];
  *(_WORD *)(a1 + 4) = v18;
  *(_WORD *)(a1 + 8) &= *(__int16 *)((char *)&word_49DA6 + a2);
  *(_WORD *)(a1 + 8) |= *(__int16 *)((char *)&word_49DAE + a2);
  v19 = *(__int16 *)((char *)&word_49D5A + *(unsigned __int16 *)((char *)&word_49D56 + a2));
  *(_WORD *)(a1 + 4) &= 0xC7FFu;
  *(_WORD *)(a1 + 4) |= v19;
  return sub_4A104(a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
}
