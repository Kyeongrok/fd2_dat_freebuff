/*
 * func-name: sub_480C8
 * func-address: 0x480c8
 * callers: 0x480c8
 * callees: none
 */

int __usercall sub_480C8@<eax>(int a1@<ecx>, _BYTE *a2@<edi>, int *a3@<esi>)
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
    *a2++ = BYTE1(n0x7FFF);
    --a1;
  }
  while ( a1 );
  return n0x7FFF;
}
