/*
 * func-name: sub_49656
 * func-address: 0x49656
 * callers: 0x49656
 * callees: none
 */

char __usercall sub_49656@<al>(
        int a1@<eax>,
        int a2@<edx>,
        unsigned int a3@<ecx>,
        int a4@<ebx>,
        _DWORD *a5@<edi>,
        unsigned int a6@<esi>)
{
  int v6; // ebp

  do
  {
    if ( a6 >= dword_538A8 )
      break;
    LOBYTE(a4) = *(_BYTE *)(a6 + 1);
    LOBYTE(a1) = *(_BYTE *)(a6 + 3);
    v6 = ((unsigned int)qword_538B4 + (unsigned __int64)a3) >> 32;
    a3 += qword_538B4;
    a6 += *((_DWORD *)&qword_538B4 + v6 + 1);
    *a5 += *(_DWORD *)(a2 + 4 * a1);
    a5[1] += *(_DWORD *)(a2 + 4 * a4 + 1024);
    a5 += 2;
  }
  while ( (unsigned int)a5 < dword_538B0 );
  return a1;
}
