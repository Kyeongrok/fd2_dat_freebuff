/*
 * func-name: sub_48BD6
 * func-address: 0x48bd6
 * callers: 0x48bd6
 * callees: none
 */

__int16 __usercall sub_48BD6@<ax>(__int16 result@<ax>, _DWORD *a2@<edi>, _BYTE *a3@<esi>)
{
  do
  {
    if ( (unsigned int)a3 >= dword_538A8 )
      break;
    HIBYTE(result) = *a3++;
    *a2++ += result;
  }
  while ( (unsigned int)a2 < dword_538B0 );
  return result;
}
