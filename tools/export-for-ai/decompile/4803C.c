/*
 * func-name: sub_4803C
 * func-address: 0x4803c
 * callers: 0x4803c
 * callees: none
 */

int __usercall sub_4803C@<eax>(int a1@<ecx>, _WORD *a2@<ebx>, _WORD *a3@<edi>, int *a4@<esi>)
{
  int v4; // edx
  int result; // eax
  char v6; // t0
  char v7; // t1

  do
  {
    result = *a4;
    v4 = a4[1];
    a4 += 2;
    v6 = result;
    LOBYTE(result) = BYTE1(result);
    BYTE1(result) = v6;
    v7 = v4;
    LOBYTE(v4) = BYTE1(v4);
    BYTE1(v4) = v7;
    *a3 = result;
    *a2 = v4;
    ++a3;
    ++a2;
    --a1;
  }
  while ( a1 );
  return result;
}
