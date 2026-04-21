/*
 * func-name: sub_48858
 * func-address: 0x48858
 * callers: 0x48858
 * callees: none
 */

int __usercall sub_48858@<eax>(int a1@<ecx>, _WORD *a2@<ebx>, _WORD *a3@<edi>, int *a4@<esi>)
{
  int n0x7FFF; // eax
  int n0x7FFF_1; // edx
  __int16 v6; // dx
  int result; // eax
  char v8; // t0
  char v9; // t1

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
    v6 = n0x7FFF_1 ^ 0x8000;
    v8 = result;
    LOBYTE(result) = BYTE1(result);
    BYTE1(result) = v8;
    v9 = v6;
    LOBYTE(v6) = HIBYTE(v6);
    HIBYTE(v6) = v9;
    *a3 = result;
    *a2 = v6;
    ++a3;
    ++a2;
    --a1;
  }
  while ( a1 );
  return result;
}
