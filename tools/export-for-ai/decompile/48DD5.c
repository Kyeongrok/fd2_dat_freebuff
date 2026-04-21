/*
 * func-name: sub_48DD5
 * func-address: 0x48dd5
 * callers: 0x48dd5
 * callees: none
 */

int __usercall sub_48DD5@<eax>(int result@<eax>, unsigned int a2@<ecx>, _DWORD *a3@<edi>, _BYTE *a4@<esi>)
{
  int v4; // ebp

  do
  {
    if ( (unsigned int)a4 >= dword_538A8 )
      break;
    BYTE1(result) = *a4;
    result ^= 0x8000u;
    v4 = ((unsigned int)qword_538B4 + (unsigned __int64)a2) >> 32;
    a2 += qword_538B4;
    a4 += *((_DWORD *)&qword_538B4 + v4 + 1);
    *a3++ += (__int16)result;
  }
  while ( (unsigned int)a3 < dword_538B0 );
  return result;
}
