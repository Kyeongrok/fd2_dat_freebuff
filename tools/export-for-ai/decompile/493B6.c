/*
 * func-name: sub_493B6
 * func-address: 0x493b6
 * callers: 0x493b6
 * callees: none
 */

char __usercall sub_493B6@<al>(int a1@<eax>, int a2@<edx>, int a3@<ebx>, _DWORD *a4@<edi>, unsigned int a5@<esi>)
{
  do
  {
    if ( a5 >= dword_538A8 )
      break;
    LOBYTE(a1) = *(_BYTE *)(a5 + 1);
    LOBYTE(a3) = *(_BYTE *)(a5 + 3);
    a5 += 4;
    *a4 += *(_DWORD *)(a2 + 4 * a1);
    a4[1] += *(_DWORD *)(a2 + 4 * a3 + 1024);
    a4 += 2;
  }
  while ( (unsigned int)a4 < dword_538B0 );
  return a1;
}
