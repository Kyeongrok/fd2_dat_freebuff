/*
 * func-name: sub_48B12
 * func-address: 0x48b12
 * callers: 0x48b12
 * callees: none
 */

__int16 __usercall sub_48B12@<ax>(_DWORD *a1@<edi>, _WORD *a2@<esi>)
{
  __int16 result; // ax

  do
  {
    if ( (unsigned int)a2 >= dword_538A8 )
      break;
    result = *a2 ^ 0x8000;
    a2 += 2;
    *a1++ += result;
  }
  while ( (unsigned int)a1 < dword_538B0 );
  return result;
}
