/*
 * func-name: sub_489E7
 * func-address: 0x489e7
 * callers: 0x489e7, 0x49690
 * callees: none
 */

int __usercall sub_489E7@<eax>(int result@<eax>, _DWORD *a2@<edi>, _BYTE *a3@<esi>)
{
  do
  {
    if ( (unsigned int)a3 >= dword_538A8 )
      break;
    BYTE1(result) = *a3;
    result ^= 0x8000u;
    ++a3;
    *a2 += (__int16)result;
    a2[1] += (__int16)result;
    a2 += 2;
  }
  while ( (unsigned int)a2 < dword_538B0 );
  return result;
}
