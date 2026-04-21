/*
 * func-name: sub_47F0B
 * func-address: 0x47f0b
 * callers: 0x47f0b
 * callees: none
 */

int __usercall sub_47F0B@<eax>(int a1@<ecx>, _WORD *a2@<edi>, int *a3@<esi>)
{
  int result; // eax
  int v4; // edx

  do
  {
    result = *a3;
    v4 = a3[1];
    a3 += 2;
    *a2 = v4;
    a2[1] = result;
    a2 += 2;
    --a1;
  }
  while ( a1 );
  return result;
}
