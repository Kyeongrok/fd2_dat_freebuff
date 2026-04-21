/*
 * func-name: sub_47E7D
 * func-address: 0x47e7d
 * callers: 0x47e7d
 * callees: none
 */

int __usercall sub_47E7D@<eax>(int a1@<ecx>, _WORD *a2@<edi>, int *a3@<esi>)
{
  int result; // eax

  do
  {
    result = *a3++;
    *a2++ = result;
    --a1;
  }
  while ( a1 );
  return result;
}
