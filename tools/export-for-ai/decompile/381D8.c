/*
 * func-name: sub_381D8
 * func-address: 0x381d8
 * callers: none
 * callees: 0x37c9c, 0x3ee4d, 0x3f22a, 0x3f46b
 */

void __fastcall sub_381D8(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // edx

  v7 = ++dword_54178;
  if ( dword_54174 && (v7 == 1 || dword_54170) && !sub_3F22A(a1) && sub_37C9C() )
    fprintf(env, "AIL_set_USE16_ISR(%d,0x%X,%u)\n", a5, a6, a7);
  sub_3EE4D(a5, a6, a7);
  JUMPOUT(0x38255);
}
