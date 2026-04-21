/*
 * func-name: sub_494F0
 * func-address: 0x494f0
 * callers: 0x494f0
 * callees: none
 */

char __usercall sub_494F0@<al>(
        int a1@<eax>,
        int a2@<edx>,
        unsigned int a3@<ecx>,
        _DWORD *a4@<edi>,
        unsigned int a5@<esi>)
{
  int v5; // ebp

  do
  {
    if ( a5 >= dword_538A8 )
      break;
    LOBYTE(a1) = *(_BYTE *)(a5 + 1);
    v5 = ((unsigned int)qword_538B4 + (unsigned __int64)a3) >> 32;
    a3 += qword_538B4;
    a5 += *((_DWORD *)&qword_538B4 + v5 + 1);
    *a4++ += *(_DWORD *)(a2 + 4 * a1);
  }
  while ( (unsigned int)a4 < dword_538B0 );
  return a1;
}
