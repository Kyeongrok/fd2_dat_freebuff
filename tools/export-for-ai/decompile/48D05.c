/*
 * func-name: sub_48D05
 * func-address: 0x48d05
 * callers: 0x48d05
 * callees: none
 */

__int16 __usercall sub_48D05@<ax>(_DWORD *a1@<edi>, __int16 *a2@<esi>)
{
  __int16 result; // ax
  __int16 v3; // bx

  do
  {
    if ( (unsigned int)a2 >= dword_538A8 )
      break;
    result = *a2;
    v3 = a2[1];
    a2 += 2;
    *a1 += result;
    a1[1] += v3;
    a1 += 2;
  }
  while ( (unsigned int)a1 < dword_538B0 );
  return result;
}
