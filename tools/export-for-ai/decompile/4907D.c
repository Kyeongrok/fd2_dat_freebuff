/*
 * func-name: sub_4907D
 * func-address: 0x4907d
 * callers: 0x4907d
 * callees: none
 */

__int16 __usercall sub_4907D@<ax>(__int16 result@<ax>, unsigned int a2@<ecx>, _DWORD *a3@<edi>, _BYTE *a4@<esi>)
{
  int v4; // ebp

  do
  {
    if ( (unsigned int)a4 >= dword_538A8 )
      break;
    HIBYTE(result) = *a4;
    v4 = ((unsigned int)qword_538B4 + (unsigned __int64)a2) >> 32;
    a2 += qword_538B4;
    a4 += *((_DWORD *)&qword_538B4 + v4 + 1);
    *a3++ += result;
  }
  while ( (unsigned int)a3 < dword_538B0 );
  return result;
}
