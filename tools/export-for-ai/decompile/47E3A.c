/*
 * func-name: sub_47E3A
 * func-address: 0x47e3a
 * callers: 0x47e3a
 * callees: none
 */

int __usercall sub_47E3A@<eax>(int a1@<ecx>, _BYTE *a2@<ebx>, _BYTE *a3@<edi>, int *a4@<esi>)
{
  int v4; // eax
  int v5; // edx
  int result; // eax

  do
  {
    v4 = *a4;
    v5 = a4[1];
    a4 += 2;
    result = v4 ^ 0x8000;
    *a3 = (unsigned __int16)(v5 ^ 0x8000) >> 8;
    *a2 = BYTE1(result);
    ++a3;
    ++a2;
    --a1;
  }
  while ( a1 );
  return result;
}
