/*
 * func-name: sub_48CE2
 * func-address: 0x48ce2
 * callers: 0x48ce2
 * callees: none
 */

__int16 __usercall sub_48CE2@<ax>(_DWORD *a1@<edi>, __int16 *a2@<esi>)
{
  __int16 result; // ax

  do
  {
    if ( (unsigned int)a2 >= dword_538A8 )
      break;
    result = *a2;
    a2 += 2;
    *a1++ += result;
  }
  while ( (unsigned int)a1 < dword_538B0 );
  return result;
}
