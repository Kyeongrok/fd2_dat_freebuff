/*
 * func-name: sub_484E9
 * func-address: 0x484e9
 * callers: 0x484e9
 * callees: none
 */

int __usercall sub_484E9@<eax>(int a1@<ecx>, _WORD *a2@<edi>, int *a3@<esi>)
{
  int n0x7FFF; // eax
  int n0x7FFF_1; // edx
  int result; // eax

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
      LOWORD(n0x7FFF_1) = 0x7FFF;
    }
    else if ( n0x7FFF_1 < -32768 )
    {
      LOWORD(n0x7FFF_1) = 0x8000;
    }
    result = n0x7FFF ^ 0x8000;
    *a2 = n0x7FFF_1 ^ 0x8000;
    a2[1] = result;
    a2 += 2;
    --a1;
  }
  while ( a1 );
  return result;
}
