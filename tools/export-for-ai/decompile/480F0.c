/*
 * func-name: sub_480F0
 * func-address: 0x480f0
 * callers: 0x480f0
 * callees: none
 */

int __usercall sub_480F0@<eax>(int a1@<ecx>, _WORD *a2@<edi>, int *a3@<esi>)
{
  int n0x7FFF; // eax
  int n0x7FFF_1; // edx
  int result; // eax
  __int16 v6; // dx

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
    result = n0x7FFF ^ 0x8000;
    HIBYTE(v6) = BYTE1(n0x7FFF_1) ^ 0x80;
    LOBYTE(v6) = BYTE1(result);
    *a2++ = v6;
    --a1;
  }
  while ( a1 );
  return result;
}
