/*
 * func-name: sub_48A0B
 * func-address: 0x48a0b
 * callers: 0x48a0b, 0x49690
 * callees: none
 */

int __usercall sub_48A0B@<eax>(int result@<eax>, _DWORD *a2@<edi>, _BYTE *a3@<esi>)
{
  do
  {
    if ( (unsigned int)a3 >= dword_538A8 )
      break;
    BYTE1(result) = *a3;
    result ^= 0x8000u;
    a3 += 2;
    *a2++ += (__int16)result;
  }
  while ( (unsigned int)a2 < dword_538B0 );
  return result;
}
