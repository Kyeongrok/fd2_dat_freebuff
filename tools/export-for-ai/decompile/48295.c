/*
 * func-name: sub_48295
 * func-address: 0x48295
 * callers: 0x48295
 * callees: none
 */

int __usercall sub_48295@<eax>(int a1@<ecx>, _BYTE *a2@<ebx>, _BYTE *a3@<edi>, int *a4@<esi>)
{
  int n0x7FFF; // eax
  int n0x7FFF_1; // edx

  do
  {
    n0x7FFF = *a4;
    n0x7FFF_1 = a4[1];
    a4 += 2;
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
    *a3 = BYTE1(n0x7FFF);
    *a2 = BYTE1(n0x7FFF_1);
    ++a3;
    ++a2;
    --a1;
  }
  while ( a1 );
  return n0x7FFF;
}
