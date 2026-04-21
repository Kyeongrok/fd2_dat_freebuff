/*
 * func-name: sub_4936B
 * func-address: 0x4936b
 * callers: 0x4936b
 * callees: none
 */

char __usercall sub_4936B@<al>(int a1@<eax>, int a2@<edx>, _DWORD *a3@<edi>, unsigned int a4@<esi>)
{
  do
  {
    if ( a4 >= dword_538A8 )
      break;
    LOBYTE(a1) = *(_BYTE *)(a4 + 1);
    a4 += 2;
    *a3 += *(_DWORD *)(a2 + 4 * a1);
    a3[1] += *(_DWORD *)(a2 + 4 * a1 + 1024);
    a3 += 2;
  }
  while ( (unsigned int)a3 < dword_538B0 );
  return a1;
}
