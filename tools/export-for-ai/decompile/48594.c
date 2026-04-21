/*
 * func-name: sub_48594
 * func-address: 0x48594
 * callers: 0x48594
 * callees: none
 */

int __usercall sub_48594@<eax>(int a1@<ecx>, _WORD *a2@<edi>, int *a3@<esi>)
{
  int n0x7FFF; // eax
  int n0x7FFF_1; // edx
  __int16 v5; // dx
  int result; // eax
  char v7; // t0
  char v8; // t1

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
    v5 = n0x7FFF_1 ^ 0x8000;
    v7 = result;
    LOBYTE(result) = BYTE1(result);
    BYTE1(result) = v7;
    v8 = v5;
    LOBYTE(v5) = HIBYTE(v5);
    HIBYTE(v5) = v8;
    *a2 = result;
    a2[1] = v5;
    a2 += 2;
    --a1;
  }
  while ( a1 );
  return result;
}
