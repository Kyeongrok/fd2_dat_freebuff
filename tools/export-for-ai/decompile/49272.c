/*
 * func-name: sub_49272
 * func-address: 0x49272
 * callers: 0x49272
 * callees: none
 */

char __usercall sub_49272@<al>(int a1@<eax>, int a2@<edx>, _DWORD *a3@<edi>, _BYTE *a4@<esi>)
{
  do
  {
    if ( (unsigned int)a4 >= dword_538A8 )
      break;
    LOBYTE(a1) = *a4++;
    *a3++ += *(_DWORD *)(a2 + 4 * a1);
  }
  while ( (unsigned int)a3 < dword_538B0 );
  return a1;
}
