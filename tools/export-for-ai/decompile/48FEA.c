/*
 * func-name: sub_48FEA
 * func-address: 0x48fea
 * callers: 0x48fea
 * callees: none
 */

__int16 __usercall sub_48FEA@<ax>(unsigned int a1@<ecx>, _DWORD *a2@<edi>, _WORD *a3@<esi>)
{
  __int16 result; // ax
  __int16 v4; // bx
  int v5; // ebp

  do
  {
    if ( (unsigned int)a3 >= dword_538A8 )
      break;
    result = a3[1] ^ 0x8000;
    v4 = *a3 ^ 0x8000;
    v5 = ((unsigned int)qword_538B4 + (unsigned __int64)a1) >> 32;
    a1 += qword_538B4;
    a3 = (_WORD *)((char *)a3 + *((_DWORD *)&qword_538B4 + v5 + 1));
    *a2 += result;
    a2[1] += v4;
    a2 += 2;
  }
  while ( (unsigned int)a2 < dword_538B0 );
  return result;
}
