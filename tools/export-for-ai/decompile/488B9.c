/*
 * func-name: sub_488B9
 * func-address: 0x488b9
 * callers: 0x488b9
 * callees: none
 */

__int16 __usercall sub_488B9@<ax>(int a1@<ecx>, _WORD *a2@<ebx>, _WORD *a3@<edi>, int *a4@<esi>)
{
  int n0x7FFF; // eax
  int n0x7FFF_1; // edx
  __int16 result; // ax
  char n0x7FFF_2; // t0
  __int16 v8; // dx
  char n0x7FFF_3; // t1

  do
  {
    n0x7FFF = *a4;
    n0x7FFF_1 = a4[1];
    a4 += 2;
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
    LOBYTE(v8) = BYTE1(n0x7FFF_1);
    HIBYTE(v8) = n0x7FFF_3;
    *a3 = result;
    *a2 = v8;
    ++a3;
    ++a2;
    --a1;
  }
  while ( a1 );
  return result;
}
