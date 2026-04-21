/*
 * func-name: sub_49053
 * func-address: 0x49053
 * callers: 0x49053
 * callees: none
 */

__int16 __usercall sub_49053@<ax>(__int16 result@<ax>, unsigned int a2@<ecx>, _DWORD *a3@<edi>, _BYTE *a4@<esi>)
{
  do
  {
    if ( (unsigned int)a4 >= dword_538A8 )
      break;
    HIBYTE(result) = *a4;
    a4 = (_BYTE *)((qword_538B4 + __PAIR64__((unsigned int)a4, a2)) >> 32);
    a2 += qword_538B4;
    *a3 += result;
    a3[1] += result;
    a3 += 2;
  }
  while ( (unsigned int)a3 < dword_538B0 );
  return result;
}
