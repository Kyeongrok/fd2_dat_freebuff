/*
 * func-name: sub_4823E
 * func-address: 0x4823e
 * callers: 0x4823e
 * callees: none
 */

int __usercall sub_4823E@<eax>(int a1@<ecx>, _BYTE *a2@<ebx>, _BYTE *a3@<edi>, int *a4@<esi>)
{
  int n0x7FFF; // eax
  int n0x7FFF_1; // edx
  int result; // eax

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
    result = n0x7FFF ^ 0x8000;
    *a3 = BYTE1(result);
    *a2 = (unsigned __int16)(n0x7FFF_1 ^ 0x8000) >> 8;
    ++a3;
    ++a2;
    --a1;
  }
  while ( a1 );
  return result;
}
