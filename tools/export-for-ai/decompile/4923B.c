/*
 * func-name: sub_4923B
 * func-address: 0x4923b
 * callers: 0x4923b
 * callees: none
 */

__int16 __usercall sub_4923B@<ax>(unsigned int a1@<ecx>, _DWORD *a2@<edi>, __int16 *a3@<esi>)
{
  __int16 v3; // bx
  __int16 result; // ax
  int v5; // ebp

  do
  {
    if ( (unsigned int)a3 >= dword_538A8 )
      break;
    v3 = *a3;
    result = a3[1];
    v5 = ((unsigned int)qword_538B4 + (unsigned __int64)a1) >> 32;
    a1 += qword_538B4;
    a3 = (__int16 *)((char *)a3 + *((_DWORD *)&qword_538B4 + v5 + 1));
    *a2 += result;
    a2[1] += v3;
    a2 += 2;
  }
  while ( (unsigned int)a2 < dword_538B0 );
  return result;
}
