/*
 * func-name: sub_47E28
 * func-address: 0x47e28
 * callers: 0x47e28
 * callees: none
 */

int __usercall sub_47E28@<eax>(int a1@<ecx>, _BYTE *a2@<ebx>, _BYTE *a3@<edi>, int *a4@<esi>)
{
  int result; // eax
  int v5; // edx

  do
  {
    result = *a4;
    v5 = a4[1];
    a4 += 2;
    *a3 = BYTE1(result);
    *a2 = BYTE1(v5);
    ++a3;
    ++a2;
    --a1;
  }
  while ( a1 );
  return result;
}
