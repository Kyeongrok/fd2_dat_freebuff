/*
 * func-name: sub_4902C
 * func-address: 0x4902c
 * callers: 0x4902c
 * callees: none
 */

__int16 __usercall sub_4902C@<ax>(__int16 result@<ax>, unsigned int a2@<ecx>, _DWORD *a3@<edi>, _BYTE *a4@<esi>)
{
  do
  {
    if ( (unsigned int)a4 >= dword_538A8 )
      break;
    HIBYTE(result) = *a4;
    a4 = (_BYTE *)((qword_538B4 + __PAIR64__((unsigned int)a4, a2)) >> 32);
    a2 += qword_538B4;
    *a3++ += result;
  }
  while ( (unsigned int)a3 < dword_538B0 );
  return result;
}
