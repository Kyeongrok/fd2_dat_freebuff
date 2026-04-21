/*
 * func-name: sub_4A60D
 * func-address: 0x4a60d
 * callers: 0x4a104
 * callees: none
 */

int __usercall sub_4A60D@<eax>(
        const void *src@<ebp>,
        void *dst@<esi>,
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
  qmemcpy(dst, src, 0x1Cu);
  return sub_4A104(a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
}
