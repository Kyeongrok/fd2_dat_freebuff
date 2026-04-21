/*
 * func-name: sub_47DF7
 * func-address: 0x47df7
 * callers: 0x47df7
 * callees: none
 */

char __usercall sub_47DF7@<al>(int a1@<ecx>, _WORD *a2@<edi>, int *a3@<esi>)
{
  int v3; // edx
  int v4; // eax

  do
  {
    v4 = *a3;
    v3 = a3[1];
    a3 += 2;
    LOBYTE(v4) = BYTE1(v3);
    *a2++ = v4;
    --a1;
  }
  while ( a1 );
  return v4;
}
