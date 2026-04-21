/*
 * func-name: sub_4AD7C
 * func-address: 0x4ad7c
 * callers: 0x4a104
 * callees: 0x4b9ee, 0x4c59e
 */

int __usercall sub_4AD7C@<eax>(
        int a1@<ebx>,
        int a2@<ebp>,
        int a3@<edi>,
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
  int result; // eax
  int v20; // eax

  switch ( a1 )
  {
    case 0:
      *(_BYTE *)(a3 + a2 + 37) ^= 0x80u;
      result = sub_4A104(a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
      break;
    case 1:
      *(_BYTE *)(a3 + a2 + 37) &= ~0x80u;
      result = sub_4A104(a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
      break;
    case 2:
    case 3:
    case 6:
    case 7:
      JUMPOUT(0x4AC38);
    case 4:
      *(_DWORD *)(a2 + 108) = 0;
      *(_DWORD *)(a2 + 112) = 0;
      *(_WORD *)(a2 + 116) = 0;
      v20 = sub_4B9EE(a3 + a2 + 28, a2 + 108);
      v18 = *(_WORD *)(a2 + 4) & 0xB8FF;
      HIBYTE(v18) |= byte_49DF6[v20 + 1];
      *(_WORD *)(a2 + 4) = v18;
      result = sub_4A104(a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
      break;
    case 5:
      sub_4C59E(a3 + a2 + 28);
      result = sub_4A104(a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
      break;
  }
  return result;
}
