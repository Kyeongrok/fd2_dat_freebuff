/*
 * func-name: sub_48411
 * func-address: 0x48411
 * callers: 0x48411
 * callees: none
 */

__int16 __usercall sub_48411@<ax>(int a1@<ecx>, _WORD *a2@<edi>, int *a3@<esi>)
{
  int n0x7FFF; // eax
  __int16 result; // ax
  char n0x7FFF_1; // t0

  do
  {
    n0x7FFF = *a3++;
    if ( n0x7FFF > 0x7FFF )
    {
      LOWORD(n0x7FFF) = 0x7FFF;
    }
    else if ( n0x7FFF < -32768 )
    {
      LOWORD(n0x7FFF) = 0x8000;
    }
    n0x7FFF_1 = n0x7FFF;
    LOBYTE(result) = BYTE1(n0x7FFF);
    HIBYTE(result) = n0x7FFF_1;
    *a2++ = result;
    --a1;
  }
  while ( a1 );
  return result;
}
