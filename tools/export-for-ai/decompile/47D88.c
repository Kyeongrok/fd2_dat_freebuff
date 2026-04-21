/*
 * func-name: sub_47D88
 * func-address: 0x47d88
 * callers: 0x47d88, 0x49891
 * callees: none
 */

int __usercall sub_47D88@<eax>(int a1@<ecx>, _BYTE *a2@<edi>, int *a3@<esi>)
{
  int v3; // eax
  int result; // eax

  do
  {
    v3 = *a3++;
    result = v3 ^ 0x8000;
    *a2++ = BYTE1(result);
    --a1;
  }
  while ( a1 );
  return result;
}
