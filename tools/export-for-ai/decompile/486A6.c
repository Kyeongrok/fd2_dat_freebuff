/*
 * func-name: sub_486A6
 * func-address: 0x486a6
 * callers: 0x486a6
 * callees: none
 */

__int16 __usercall sub_486A6@<ax>(int a1@<ecx>, _WORD *a2@<edi>, int *a3@<esi>)
{
  int n0x7FFF; // eax
  int n0x7FFF_1; // edx
  __int16 result; // ax
  char n0x7FFF_2; // t0
  __int16 v7; // dx
  char n0x7FFF_3; // t1

  do
  {
    n0x7FFF = *a3;
    n0x7FFF_1 = a3[1];
    a3 += 2;
    if ( n0x7FFF > 0x7FFF )
    {
      LOWORD(n0x7FFF) = 0x7FFF;
    }
    else if ( n0x7FFF < -32768 )
    {
      LOWORD(n0x7FFF) = 0x8000;
    }
    if ( n0x7FFF_1 > 0x7FFF )
    {
      LOWORD(n0x7FFF_1) = 0x7FFF;
    }
    else if ( n0x7FFF_1 < -32768 )
    {
      LOWORD(n0x7FFF_1) = 0x8000;
    }
    n0x7FFF_2 = n0x7FFF;
    LOBYTE(result) = BYTE1(n0x7FFF);
    HIBYTE(result) = n0x7FFF_2;
    n0x7FFF_3 = n0x7FFF_1;
    LOBYTE(v7) = BYTE1(n0x7FFF_1);
    HIBYTE(v7) = n0x7FFF_3;
    *a2 = v7;
    a2[1] = result;
    a2 += 2;
    --a1;
  }
  while ( a1 );
  return result;
}
