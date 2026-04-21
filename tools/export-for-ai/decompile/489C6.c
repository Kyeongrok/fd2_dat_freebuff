/*
 * func-name: sub_489C6
 * func-address: 0x489c6
 * callers: 0x489c6, 0x49690
 * callees: none
 */

int __usercall sub_489C6@<eax>(int result@<eax>, _DWORD *a2@<edi>, _BYTE *a3@<esi>)
{
  do
  {
    if ( (unsigned int)a3 >= dword_538A8 )
      break;
    BYTE1(result) = *a3;
    result ^= 0x8000u;
    ++a3;
    *a2++ += (__int16)result;
  }
  while ( (unsigned int)a2 < dword_538B0 );
  return result;
}
