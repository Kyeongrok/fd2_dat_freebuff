/*
 * func-name: sub_47DD8
 * func-address: 0x47dd8
 * callers: 0x47dd8
 * callees: none
 */

char __usercall sub_47DD8@<al>(int a1@<ecx>, _WORD *a2@<edi>, int *a3@<esi>)
{
  int v3; // eax
  int v4; // edx
  __int16 v5; // ax

  do
  {
    v3 = *a3;
    v4 = a3[1];
    a3 += 2;
    HIBYTE(v5) = BYTE1(v3) ^ 0x80;
    LOBYTE(v5) = (unsigned __int16)(v4 ^ 0x8000) >> 8;
    *a2++ = v5;
    --a1;
  }
  while ( a1 );
  return v5;
}
