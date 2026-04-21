/*
 * func-name: sub_481F0
 * func-address: 0x481f0
 * callers: 0x481f0
 * callees: none
 */

char __usercall sub_481F0@<al>(int a1@<ecx>, _WORD *a2@<edi>, int *a3@<esi>)
{
  int n0x7FFF; // eax
  int n0x7FFF_1; // edx

  do
  {
    n0x7FFF = *a3;
    n0x7FFF_1 = a3[1];
    a3 += 2;
    if ( n0x7FFF > 0x7FFF )
    {
      BYTE1(n0x7FFF) = 127;
    }
    else if ( n0x7FFF < -32768 )
    {
      BYTE1(n0x7FFF) = 0x80;
    }
    if ( n0x7FFF_1 > 0x7FFF )
    {
      BYTE1(n0x7FFF_1) = 127;
    }
    else if ( n0x7FFF_1 < -32768 )
    {
      BYTE1(n0x7FFF_1) = 0x80;
    }
    LOBYTE(n0x7FFF) = BYTE1(n0x7FFF_1);
    *a2++ = n0x7FFF;
    --a1;
  }
  while ( a1 );
  return n0x7FFF;
}
