/*
 * func-name: sub_483B4
 * func-address: 0x483b4
 * callers: 0x483b4
 * callees: none
 */

int __usercall sub_483B4@<eax>(int a1@<ecx>, _WORD *a2@<edi>, int *a3@<esi>)
{
  int n0x7FFF; // eax

  do
  {
    n0x7FFF = *a3++;
    if ( n0x7FFF > 0x7FFF )
    {
      n0x7FFF = 0x7FFF;
    }
    else if ( n0x7FFF < -32768 )
    {
      n0x7FFF = -32768;
    }
    *a2++ = n0x7FFF;
    --a1;
  }
  while ( a1 );
  return n0x7FFF;
}
