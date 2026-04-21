/*
 * func-name: sub_47FFD
 * func-address: 0x47ffd
 * callers: 0x47ffd
 * callees: none
 */

int __usercall sub_47FFD@<eax>(int a1@<ecx>, _WORD *a2@<ebx>, _WORD *a3@<edi>, int *a4@<esi>)
{
  int result; // eax
  int v5; // edx

  do
  {
    result = *a4;
    v5 = a4[1];
    a4 += 2;
    *a3 = v5;
    *a2 = result;
    ++a3;
    ++a2;
    --a1;
  }
  while ( a1 );
  return result;
}
