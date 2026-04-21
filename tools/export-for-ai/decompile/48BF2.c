/*
 * func-name: sub_48BF2
 * func-address: 0x48bf2
 * callers: 0x48bf2
 * callees: none
 */

__int16 __usercall sub_48BF2@<ax>(__int16 result@<ax>, _DWORD *a2@<edi>, _BYTE *a3@<esi>)
{
  do
  {
    if ( (unsigned int)a3 >= dword_538A8 )
      break;
    HIBYTE(result) = *a3++;
    *a2 += result;
    a2[1] += result;
    a2 += 2;
  }
  while ( (unsigned int)a2 < dword_538B0 );
  return result;
}
