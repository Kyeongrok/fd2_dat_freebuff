/*
 * func-name: sub_48DA6
 * func-address: 0x48da6
 * callers: 0x48da6
 * callees: none
 */

int __usercall sub_48DA6@<eax>(int result@<eax>, unsigned int a2@<ecx>, _DWORD *a3@<edi>, _BYTE *a4@<esi>)
{
  do
  {
    if ( (unsigned int)a4 >= dword_538A8 )
      break;
    BYTE1(result) = *a4;
    result ^= 0x8000u;
    a4 = (_BYTE *)((qword_538B4 + __PAIR64__((unsigned int)a4, a2)) >> 32);
    a2 += qword_538B4;
    *a3 += (__int16)result;
    a3[1] += (__int16)result;
    a3 += 2;
  }
  while ( (unsigned int)a3 < dword_538B0 );
  return result;
}
