/*
 * func-name: sub_48FAE
 * func-address: 0x48fae
 * callers: 0x48fae
 * callees: none
 */

__int16 __usercall sub_48FAE@<ax>(unsigned int a1@<ecx>, _DWORD *a2@<edi>, unsigned int a3@<esi>)
{
  __int16 result; // ax
  int v4; // ebp

  do
  {
    if ( a3 >= dword_538A8 )
      break;
    result = *(_WORD *)(a3 + 2) ^ 0x8000;
    v4 = ((unsigned int)qword_538B4 + (unsigned __int64)a1) >> 32;
    a1 += qword_538B4;
    a3 += *((_DWORD *)&qword_538B4 + v4 + 1);
    *a2++ += result;
  }
  while ( (unsigned int)a2 < dword_538B0 );
  return result;
}
