/*
 * func-name: sub_47EEA
 * func-address: 0x47eea
 * callers: 0x47eea
 * callees: none
 */

int __usercall sub_47EEA@<eax>(int a1@<ecx>, _WORD *a2@<edi>, int *a3@<esi>)
{
  int v3; // eax
  int v4; // edx
  int result; // eax

  do
  {
    v3 = *a3;
    v4 = a3[1];
    a3 += 2;
    result = v3 ^ 0x8000;
    *a2 = v4 ^ 0x8000;
    a2[1] = result;
    a2 += 2;
    --a1;
  }
  while ( a1 );
  return result;
}
