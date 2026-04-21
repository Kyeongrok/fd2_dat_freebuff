/*
 * func-name: sub_4809B
 * func-address: 0x4809b
 * callers: 0x4809b
 * callees: none
 */

int __usercall sub_4809B@<eax>(int a1@<ecx>, _BYTE *a2@<edi>, int *a3@<esi>)
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
    *a2++ = BYTE1(result);
    --a1;
  }
  while ( a1 );
  return result;
}
