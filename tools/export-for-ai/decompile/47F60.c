/*
 * func-name: sub_47F60
 * func-address: 0x47f60
 * callers: 0x47f60
 * callees: none
 */

int __usercall sub_47F60@<eax>(int a1@<ecx>, _WORD *a2@<edi>, int *a3@<esi>)
{
  int v3; // eax
  int v4; // edx
  int result; // eax
  char v6; // t0
  char v7; // t1

  do
  {
    v3 = *a3;
    v4 = a3[1];
    a3 += 2;
    result = v3 ^ 0x8000;
    LOWORD(v4) = v4 ^ 0x8000;
    v6 = result;
    LOBYTE(result) = BYTE1(result);
    BYTE1(result) = v6;
    v7 = v4;
    LOBYTE(v4) = BYTE1(v4);
    BYTE1(v4) = v7;
    *a2 = v4;
    a2[1] = result;
    a2 += 2;
    --a1;
  }
  while ( a1 );
  return result;
}
