/*
 * func-name: sub_48806
 * func-address: 0x48806
 * callers: 0x48806
 * callees: none
 */

int __usercall sub_48806@<eax>(int a1@<ecx>, _WORD *a2@<ebx>, _WORD *a3@<edi>, int *a4@<esi>)
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
      LOWORD(n0x7FFF_1) = 0x7FFF;
    }
    else if ( n0x7FFF_1 < -32768 )
    {
      LOWORD(n0x7FFF_1) = 0x8000;
    }
    *a3 = n0x7FFF_1;
    *a2 = n0x7FFF;
    ++a3;
    ++a2;
    --a1;
  }
  while ( a1 );
  return n0x7FFF;
}
