/*
 * func-name: sub_48C59
 * func-address: 0x48c59
 * callers: 0x48c59
 * callees: none
 */

__int16 __usercall sub_48C59@<ax>(__int16 result@<ax>, _DWORD *a2@<edi>, unsigned int a3@<esi>)
{
  do
  {
    if ( a3 >= dword_538A8 )
      break;
    HIBYTE(result) = *(_BYTE *)(a3 + 1);
    a3 += 2;
    *a2++ += result;
  }
  while ( (unsigned int)a2 < dword_538B0 );
  return result;
}
