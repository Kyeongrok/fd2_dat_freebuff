/*
 * func-name: sub_47DA5
 * func-address: 0x47da5
 * callers: 0x47da5
 * callees: none
 */

int __usercall sub_47DA5@<eax>(int a1@<ecx>, _WORD *a2@<edi>, int *a3@<esi>)
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
    BYTE1(v4) ^= 0x80u;
    LOBYTE(v4) = BYTE1(result);
    *a2++ = v4;
    --a1;
  }
  while ( a1 );
  return result;
}
