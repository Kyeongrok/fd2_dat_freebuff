/*
 * func-name: sub_48D2E
 * func-address: 0x48d2e
 * callers: 0x48d2e
 * callees: none
 */

__int16 __usercall sub_48D2E@<ax>(_DWORD *a1@<edi>, unsigned int a2@<esi>)
{
  __int16 result; // ax

  do
  {
    if ( a2 >= dword_538A8 )
      break;
    result = *(_WORD *)(a2 + 2);
    a2 += 4;
    *a1++ += result;
  }
  while ( (unsigned int)a1 < dword_538B0 );
  return result;
}
