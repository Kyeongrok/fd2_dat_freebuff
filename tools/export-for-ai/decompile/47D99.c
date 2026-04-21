/*
 * func-name: sub_47D99
 * func-address: 0x47d99
 * callers: 0x47d99, 0x49891
 * callees: none
 */

int __usercall sub_47D99@<eax>(int a1@<ecx>, _BYTE *a2@<edi>, int *a3@<esi>)
{
  int result; // eax

  do
  {
    result = *a3++;
    *a2++ = BYTE1(result);
    --a1;
  }
  while ( a1 );
  return result;
}
