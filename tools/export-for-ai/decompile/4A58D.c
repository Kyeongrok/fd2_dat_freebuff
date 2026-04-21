/*
 * func-name: sub_4A58D
 * func-address: 0x4a58d
 * callers: 0x4a104
 * callees: 0x4bf0c
 */

int __usercall sub_4A58D@<eax>(
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
  *a3 = sub_4BF0C(a2 + a1 + 28);
  return sub_4A104(a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
}
