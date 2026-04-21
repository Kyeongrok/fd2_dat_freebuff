/*
 * func-name: sub_48A95
 * func-address: 0x48a95
 * callers: 0x48a95
 * callees: none
 */

int __usercall sub_48A95@<eax>(int result@<eax>, __int16 a2@<bx>, _DWORD *a3@<edi>, _BYTE *a4@<esi>)
{
  do
  {
    if ( (unsigned int)a4 >= dword_538A8 )
      break;
    HIBYTE(a2) = *a4;
    BYTE1(result) = a4[1];
    result ^= 0x8000u;
    a2 ^= 0x8000u;
    a4 += 2;
    *a3 += (__int16)result;
    a3[1] += a2;
    a3 += 2;
  }
  while ( (unsigned int)a3 < dword_538B0 );
  return result;
}
