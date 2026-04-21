/*
 * func-name: sub_48C32
 * func-address: 0x48c32
 * callers: 0x48c32
 * callees: none
 */

__int16 __usercall sub_48C32@<ax>(__int16 result@<ax>, __int16 a2@<bx>, _DWORD *a3@<edi>, _BYTE *a4@<esi>)
{
  do
  {
    if ( (unsigned int)a4 >= dword_538A8 )
      break;
    HIBYTE(result) = *a4;
    HIBYTE(a2) = a4[1];
    a4 += 2;
    *a3 += result;
    a3[1] += a2;
    a3 += 2;
  }
  while ( (unsigned int)a3 < dword_538B0 );
  return result;
}
