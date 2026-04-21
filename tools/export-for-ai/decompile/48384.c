/*
 * func-name: sub_48384
 * func-address: 0x48384
 * callers: 0x48384
 * callees: none
 */

int __usercall sub_48384@<eax>(int a1@<ecx>, _WORD *a2@<edi>, int *a3@<esi>)
{
  int n0x7FFF; // eax
  int result; // eax

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
    result = n0x7FFF ^ 0x8000;
    *a2++ = result;
    --a1;
  }
  while ( a1 );
  return result;
}
