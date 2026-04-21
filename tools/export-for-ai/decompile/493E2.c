/*
 * func-name: sub_493E2
 * func-address: 0x493e2
 * callers: 0x493e2
 * callees: none
 */

char __usercall sub_493E2@<al>(int a1@<eax>, int a2@<edx>, _DWORD *a3@<edi>, unsigned int a4@<esi>)
{
  do
  {
    if ( a4 >= dword_538A8 )
      break;
    LOBYTE(a1) = *(_BYTE *)(a4 + 3);
    a4 += 4;
    *a3++ += *(_DWORD *)(a2 + 4 * a1);
  }
  while ( (unsigned int)a3 < dword_538B0 );
  return a1;
}
