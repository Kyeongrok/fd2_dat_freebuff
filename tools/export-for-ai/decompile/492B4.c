/*
 * func-name: sub_492B4
 * func-address: 0x492b4
 * callers: 0x492b4
 * callees: none
 */

char __usercall sub_492B4@<al>(int a1@<eax>, int a2@<edx>, _DWORD *a3@<edi>, _BYTE *a4@<esi>)
{
  do
  {
    if ( (unsigned int)a4 >= dword_538A8 )
      break;
    LOBYTE(a1) = *a4;
    a4 += 2;
    *a3++ += *(_DWORD *)(a2 + 4 * a1);
  }
  while ( (unsigned int)a3 < dword_538B0 );
  return a1;
}
