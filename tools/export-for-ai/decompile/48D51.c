/*
 * func-name: sub_48D51
 * func-address: 0x48d51
 * callers: 0x48d51
 * callees: none
 */

__int16 __usercall sub_48D51@<ax>(_DWORD *a1@<edi>, __int16 *a2@<esi>)
{
  __int16 v2; // bx
  __int16 result; // ax

  do
  {
    if ( (unsigned int)a2 >= dword_538A8 )
      break;
    v2 = *a2;
    result = a2[1];
    a2 += 2;
    *a1 += result;
    a1[1] += v2;
    a1 += 2;
  }
  while ( (unsigned int)a1 < dword_538B0 );
  return result;
}
