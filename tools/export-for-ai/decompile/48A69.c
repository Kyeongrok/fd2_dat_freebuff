/*
 * func-name: sub_48A69
 * func-address: 0x48a69
 * callers: 0x48a69
 * callees: none
 */

int __usercall sub_48A69@<eax>(int result@<eax>, _DWORD *a2@<edi>, unsigned int a3@<esi>)
{
  do
  {
    if ( a3 >= dword_538A8 )
      break;
    BYTE1(result) = *(_BYTE *)(a3 + 1);
    result ^= 0x8000u;
    a3 += 2;
    *a2++ += (__int16)result;
  }
  while ( (unsigned int)a2 < dword_538B0 );
  return result;
}
