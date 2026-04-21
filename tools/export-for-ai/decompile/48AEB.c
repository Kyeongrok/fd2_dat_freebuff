/*
 * func-name: sub_48AEB
 * func-address: 0x48aeb
 * callers: 0x48aeb
 * callees: none
 */

__int16 __usercall sub_48AEB@<ax>(_DWORD *a1@<edi>, _WORD *a2@<esi>)
{
  __int16 result; // ax

  do
  {
    if ( (unsigned int)a2 >= dword_538A8 )
      break;
    result = *a2++ ^ 0x8000;
    *a1 += result;
    a1[1] += result;
    a1 += 2;
  }
  while ( (unsigned int)a1 < dword_538B0 );
  return result;
}
