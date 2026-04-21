/*
 * func-name: sub_47ED4
 * func-address: 0x47ed4
 * callers: 0x47ed4
 * callees: none
 */

int __usercall sub_47ED4@<eax>(int a1@<ecx>, _WORD *a2@<edi>, int *a3@<esi>)
{
  int result; // eax
  int v4; // edx

  do
  {
    result = *a3;
    v4 = a3[1];
    a3 += 2;
    *a2 = result;
    a2[1] = v4;
    a2 += 2;
    --a1;
  }
  while ( a1 );
  return result;
}
