/*
 * func-name: sub_48197
 * func-address: 0x48197
 * callers: 0x48197
 * callees: none
 */

char __usercall sub_48197@<al>(int a1@<ecx>, _WORD *a2@<edi>, int *a3@<esi>)
{
  int n0x7FFF; // eax
  int n0x7FFF_1; // edx
  __int16 v5; // ax

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
      LOWORD(n0x7FFF_1) = 0x7FFF;
    }
    else if ( n0x7FFF_1 < -32768 )
    {
      LOWORD(n0x7FFF_1) = 0x8000;
    }
    HIBYTE(v5) = BYTE1(n0x7FFF) ^ 0x80;
    LOBYTE(v5) = (unsigned __int16)(n0x7FFF_1 ^ 0x8000) >> 8;
    *a2++ = v5;
    --a1;
  }
  while ( a1 );
  return v5;
}
