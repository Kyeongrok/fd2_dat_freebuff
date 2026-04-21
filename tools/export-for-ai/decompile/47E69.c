/*
 * func-name: sub_47E69
 * func-address: 0x47e69
 * callers: 0x47e69
 * callees: none
 */

int __usercall sub_47E69@<eax>(int a1@<ecx>, _WORD *a2@<edi>, int *a3@<esi>)
{
  int v3; // eax
  int result; // eax

  do
  {
    v3 = *a3++;
    result = v3 ^ 0x8000;
    *a2++ = result;
    --a1;
  }
  while ( a1 );
  return result;
}
