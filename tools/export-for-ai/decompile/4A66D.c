/*
 * func-name: sub_4A66D
 * func-address: 0x4a66d
 * callers: 0x4a104
 * callees: 0x4b9ee, 0x4be46
 */

int __usercall sub_4A66D@<eax>(
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
  int v20; // eax

  sub_4BE46(*a3, a1 + 108);
  v20 = sub_4B9EE(a2 + a1 + 28, a1 + 108);
  v18 = *(_WORD *)(a1 + 4) & 0xB8FF;
  HIBYTE(v18) |= byte_49DF6[v20 + 1];
  *(_WORD *)(a1 + 4) = v18;
  return sub_4A104(a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
}
