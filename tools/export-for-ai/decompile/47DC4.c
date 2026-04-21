/*
 * func-name: sub_47DC4
 * func-address: 0x47dc4
 * callers: 0x47dc4
 * callees: none
 */

int __usercall sub_47DC4@<eax>(int a1@<ecx>, _WORD *a2@<edi>, int *a3@<esi>)
{
  int result; // eax
  int v4; // edx

  do
  {
    result = *a3;
    v4 = a3[1];
    a3 += 2;
    LOBYTE(v4) = BYTE1(result);
    *a2++ = v4;
    --a1;
  }
  while ( a1 );
  return result;
}
