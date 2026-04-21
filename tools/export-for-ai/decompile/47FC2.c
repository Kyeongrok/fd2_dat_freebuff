/*
 * func-name: sub_47FC2
 * func-address: 0x47fc2
 * callers: 0x47fc2
 * callees: none
 */

int __usercall sub_47FC2@<eax>(int a1@<ecx>, _WORD *a2@<ebx>, _WORD *a3@<edi>, int *a4@<esi>)
{
  int result; // eax
  int v5; // edx

  do
  {
    result = *a4;
    v5 = a4[1];
    a4 += 2;
    *a3 = result;
    *a2 = v5;
    ++a3;
    ++a2;
    --a1;
  }
  while ( a1 );
  return result;
}
