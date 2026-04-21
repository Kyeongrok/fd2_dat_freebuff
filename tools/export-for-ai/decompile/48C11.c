/*
 * func-name: sub_48C11
 * func-address: 0x48c11
 * callers: 0x48c11
 * callees: none
 */

__int16 __usercall sub_48C11@<ax>(__int16 result@<ax>, _DWORD *a2@<edi>, _BYTE *a3@<esi>)
{
  do
  {
    if ( (unsigned int)a3 >= dword_538A8 )
      break;
    HIBYTE(result) = *a3;
    a3 += 2;
    *a2++ += result;
  }
  while ( (unsigned int)a2 < dword_538B0 );
  return result;
}
