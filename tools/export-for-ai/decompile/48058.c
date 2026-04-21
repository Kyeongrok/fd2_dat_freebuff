/*
 * func-name: sub_48058
 * func-address: 0x48058
 * callers: 0x48058
 * callees: none
 */

int __usercall sub_48058@<eax>(int a1@<ecx>, _WORD *a2@<ebx>, _WORD *a3@<edi>, int *a4@<esi>)
{
  int v4; // eax
  int v5; // edx
  int result; // eax
  char v7; // t0
  char v8; // t1

  do
  {
    v4 = *a4;
    v5 = a4[1];
    a4 += 2;
    result = v4 ^ 0x8000;
    LOWORD(v5) = v5 ^ 0x8000;
    v7 = result;
    LOBYTE(result) = BYTE1(result);
    BYTE1(result) = v7;
    v8 = v5;
    LOBYTE(v5) = BYTE1(v5);
    BYTE1(v5) = v8;
    *a3 = v5;
    *a2 = result;
    ++a3;
    ++a2;
    --a1;
  }
  while ( a1 );
  return result;
}
