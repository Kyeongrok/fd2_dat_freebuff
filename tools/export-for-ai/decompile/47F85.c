/*
 * func-name: sub_47F85
 * func-address: 0x47f85
 * callers: 0x47f85
 * callees: none
 */

int __usercall sub_47F85@<eax>(int a1@<ecx>, _WORD *a2@<edi>, int *a3@<esi>)
{
  int v3; // edx
  int result; // eax
  char v5; // t0
  char v6; // t1

  do
  {
    result = *a3;
    v3 = a3[1];
    a3 += 2;
    v5 = result;
    LOBYTE(result) = BYTE1(result);
    BYTE1(result) = v5;
    v6 = v3;
    LOBYTE(v3) = BYTE1(v3);
    BYTE1(v3) = v6;
    *a2 = v3;
    a2[1] = result;
    a2 += 2;
    --a1;
  }
  while ( a1 );
  return result;
}
