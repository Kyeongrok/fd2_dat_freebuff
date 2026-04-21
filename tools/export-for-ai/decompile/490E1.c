/*
 * func-name: sub_490E1
 * func-address: 0x490e1
 * callers: 0x490e1
 * callees: none
 */

__int16 __usercall sub_490E1@<ax>(__int16 result@<ax>, unsigned int a2@<ecx>, _DWORD *a3@<edi>, unsigned int a4@<esi>)
{
  int v4; // ebp

  do
  {
    if ( a4 >= dword_538A8 )
      break;
    HIBYTE(result) = *(_BYTE *)(a4 + 1);
    v4 = ((unsigned int)qword_538B4 + (unsigned __int64)a2) >> 32;
    a2 += qword_538B4;
    a4 += *((_DWORD *)&qword_538B4 + v4 + 1);
    *a3++ += result;
  }
  while ( (unsigned int)a3 < dword_538B0 );
  return result;
}
