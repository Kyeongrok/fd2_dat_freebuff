/*
 * func-name: sub_48149
 * func-address: 0x48149
 * callers: 0x48149
 * callees: none
 */

int __usercall sub_48149@<eax>(int a1@<ecx>, _WORD *a2@<edi>, int *a3@<esi>)
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
      n0x7FFF = 0x7FFF;
    }
    else if ( n0x7FFF < -32768 )
    {
      n0x7FFF = -32768;
    }
    if ( n0x7FFF_1 > 0x7FFF )
    {
      BYTE1(n0x7FFF_1) = 127;
    }
    else if ( n0x7FFF_1 < -32768 )
    {
      BYTE1(n0x7FFF_1) = 0x80;
    }
    LOBYTE(n0x7FFF_1) = BYTE1(n0x7FFF);
    *a2++ = n0x7FFF_1;
    --a1;
  }
  while ( a1 );
  return n0x7FFF;
}
