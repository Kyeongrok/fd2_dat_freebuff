/*
 * func-name: sub_48B40
 * func-address: 0x48b40
 * callers: 0x48b40
 * callees: none
 */

__int16 __usercall sub_48B40@<ax>(_DWORD *a1@<edi>, _WORD *a2@<esi>)
{
  __int16 result; // ax
  __int16 v3; // bx

  do
  {
    if ( (unsigned int)a2 >= dword_538A8 )
      break;
    result = *a2 ^ 0x8000;
    v3 = a2[1] ^ 0x8000;
    a2 += 2;
    *a1 += result;
    a1[1] += v3;
    a1 += 2;
  }
  while ( (unsigned int)a1 < dword_538B0 );
  return result;
}
