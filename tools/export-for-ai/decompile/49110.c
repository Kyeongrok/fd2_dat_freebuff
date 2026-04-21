/*
 * func-name: sub_49110
 * func-address: 0x49110
 * callers: 0x49110
 * callees: none
 */

__int16 __usercall sub_49110@<ax>(
        __int16 result@<ax>,
        unsigned int a2@<ecx>,
        __int16 a3@<bx>,
        _DWORD *a4@<edi>,
        _BYTE *a5@<esi>)
{
  int v5; // ebp

  do
  {
    if ( (unsigned int)a5 >= dword_538A8 )
      break;
    HIBYTE(a3) = *a5;
    HIBYTE(result) = a5[1];
    v5 = ((unsigned int)qword_538B4 + (unsigned __int64)a2) >> 32;
    a2 += qword_538B4;
    a5 += *((_DWORD *)&qword_538B4 + v5 + 1);
    *a4 += result;
    a4[1] += a3;
    a4 += 2;
  }
  while ( (unsigned int)a4 < dword_538B0 );
  return result;
}
