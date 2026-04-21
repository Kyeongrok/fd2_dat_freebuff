/*
 * func-name: sub_47F9F
 * func-address: 0x47f9f
 * callers: 0x47f9f
 * callees: none
 */

int __usercall sub_47F9F@<eax>(int a1@<ecx>, _WORD *a2@<ebx>, _WORD *a3@<edi>, int *a4@<esi>)
{
  int v4; // eax
  int v5; // edx
  int result; // eax

  do
  {
    v4 = *a4;
    v5 = a4[1];
    a4 += 2;
    result = v4 ^ 0x8000;
    *a3 = result;
    *a2 = v5 ^ 0x8000;
    ++a3;
    ++a2;
    --a1;
  }
  while ( a1 );
  return result;
}
