/*
 * func-name: sub_49430
 * func-address: 0x49430
 * callers: 0x49430
 * callees: none
 */

char __usercall sub_49430@<al>(int a1@<eax>, int a2@<edx>, unsigned int a3@<ecx>, _DWORD *a4@<edi>, _BYTE *a5@<esi>)
{
  do
  {
    if ( (unsigned int)a5 >= dword_538A8 )
      break;
    LOBYTE(a1) = *a5;
    a5 = (_BYTE *)((qword_538B4 + __PAIR64__((unsigned int)a5, a3)) >> 32);
    a3 += qword_538B4;
    *a4++ += *(_DWORD *)(a2 + 4 * a1);
  }
  while ( (unsigned int)a4 < dword_538B0 );
  return a1;
}
