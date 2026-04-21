/*
 * func-name: sub_4928E
 * func-address: 0x4928e
 * callers: 0x4928e
 * callees: none
 */

char __usercall sub_4928E@<al>(int a1@<eax>, int a2@<edx>, _DWORD *a3@<edi>, _BYTE *a4@<esi>)
{
  do
  {
    if ( (unsigned int)a4 >= dword_538A8 )
      break;
    LOBYTE(a1) = *a4++;
    *a3 += *(_DWORD *)(a2 + 4 * a1);
    a3[1] += *(_DWORD *)(a2 + 4 * a1 + 1024);
    a3 += 2;
  }
  while ( (unsigned int)a3 < dword_538B0 );
  return a1;
}
