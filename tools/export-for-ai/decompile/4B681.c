/*
 * func-name: sub_4B681
 * func-address: 0x4b681
 * callers: 0x4a104
 * callees: 0x4bdd7, 0x4c117, 0x4c2a4, 0x4c4bd
 */

int __usercall sub_4B681@<eax>(
        int a1@<ebx>,
        int a2@<ebp>,
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
  switch ( a1 )
  {
    case 0:
      LOWORD(a12) = *(_WORD *)(a2 + 4);
      return sub_4A104(a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
  }
}
