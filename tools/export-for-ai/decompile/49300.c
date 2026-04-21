/*
 * func-name: sub_49300
 * func-address: 0x49300
 * callers: 0x49300
 * callees: none
 */

char __usercall sub_49300@<al>(int a1@<eax>, int a2@<edx>, _DWORD *a3@<edi>, unsigned int a4@<esi>)
{
  do
  {
    if ( a4 >= dword_538A8 )
      break;
    LOBYTE(a1) = *(_BYTE *)(a4 + 1);
    a4 += 2;
    *a3++ += *(_DWORD *)(a2 + 4 * a1);
  }
  while ( (unsigned int)a3 < dword_538B0 );
  return a1;
}
