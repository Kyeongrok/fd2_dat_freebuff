/*
 * func-name: sub_492D5
 * func-address: 0x492d5
 * callers: 0x492d5
 * callees: none
 */

char __usercall sub_492D5@<al>(int a1@<eax>, int a2@<edx>, int a3@<ebx>, _DWORD *a4@<edi>, _BYTE *a5@<esi>)
{
  do
  {
    if ( (unsigned int)a5 >= dword_538A8 )
      break;
    LOBYTE(a1) = *a5;
    LOBYTE(a3) = a5[1];
    a5 += 2;
    *a4 += *(_DWORD *)(a2 + 4 * a1);
    a4[1] += *(_DWORD *)(a2 + 4 * a3 + 1024);
    a4 += 2;
  }
  while ( (unsigned int)a4 < dword_538B0 );
  return a1;
}
