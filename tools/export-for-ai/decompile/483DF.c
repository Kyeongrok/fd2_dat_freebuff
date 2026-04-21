/*
 * func-name: sub_483DF
 * func-address: 0x483df
 * callers: 0x483df
 * callees: none
 */

__int16 __usercall sub_483DF@<ax>(int a1@<ecx>, _WORD *a2@<edi>, int *a3@<esi>)
{
  int n0x7FFF; // eax
  __int16 v4; // ax
  __int16 result; // ax
  char v6; // t0

  do
  {
    n0x7FFF = *a3++;
    if ( n0x7FFF > 0x7FFF )
    {
      LOWORD(n0x7FFF) = 0x7FFF;
    }
    else if ( n0x7FFF < -32768 )
    {
      LOWORD(n0x7FFF) = 0x8000;
    }
    v4 = n0x7FFF ^ 0x8000;
    v6 = v4;
    LOBYTE(result) = HIBYTE(v4);
    HIBYTE(result) = v6;
    *a2++ = result;
    --a1;
  }
  while ( a1 );
  return result;
}
