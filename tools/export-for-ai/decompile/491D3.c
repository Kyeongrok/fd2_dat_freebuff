/*
 * func-name: sub_491D3
 * func-address: 0x491d3
 * callers: 0x491d3
 * callees: none
 */

__int16 __usercall sub_491D3@<ax>(unsigned int a1@<ecx>, _DWORD *a2@<edi>, __int16 *a3@<esi>)
{
  __int16 result; // ax
  __int16 v4; // bx
  int v5; // ebp

  do
  {
    if ( (unsigned int)a3 >= dword_538A8 )
      break;
    result = *a3;
    v4 = a3[1];
    v5 = ((unsigned int)qword_538B4 + (unsigned __int64)a1) >> 32;
    a1 += qword_538B4;
    a3 = (__int16 *)((char *)a3 + *((_DWORD *)&qword_538B4 + v5 + 1));
    *a2 += result;
    a2[1] += v4;
    a2 += 2;
  }
  while ( (unsigned int)a2 < dword_538B0 );
  return result;
}
