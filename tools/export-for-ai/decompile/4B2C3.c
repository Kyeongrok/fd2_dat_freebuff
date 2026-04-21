/*
 * func-name: sub_4B2C3
 * func-address: 0x4b2c3
 * callers: 0x4a104
 * callees: none
 */

int __usercall sub_4B2C3@<eax>(
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
  int result; // eax

  switch ( a1 )
  {
    case 0:
    case 1:
    case 4:
    case 5:
    case 6:
    case 7:
      JUMPOUT(0x4AC38);
    case 2:
      *(_WORD *)(a2 + 4) &= 0x7F00u;
      result = sub_4A104(a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
      break;
    case 3:
      *(_WORD *)a2 = 831;
      *(_WORD *)(a2 + 4) = 0;
      *(_WORD *)(a2 + 8) = -1;
      *(_DWORD *)(a2 + 118) = sub_4A104;
      result = sub_4A104(a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
      break;
  }
  return result;
}
