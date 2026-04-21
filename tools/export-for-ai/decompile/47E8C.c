/*
 * func-name: sub_47E8C
 * func-address: 0x47e8c
 * callers: 0x47e8c
 * callees: none
 */

__int16 __usercall sub_47E8C@<ax>(int a1@<ecx>, _WORD *a2@<edi>, int *a3@<esi>)
{
  int v3; // eax
  __int16 result; // ax
  char v5; // t0

  do
  {
    v3 = *a3++;
    LOWORD(v3) = v3 ^ 0x8000;
    v5 = v3;
    LOBYTE(result) = BYTE1(v3);
    HIBYTE(result) = v5;
    *a2++ = result;
    --a1;
  }
  while ( a1 );
  return result;
}
