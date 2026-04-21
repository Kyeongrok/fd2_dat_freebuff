/*
 * func-name: sub_3958E
 * func-address: 0x3958e
 * callers: none
 * callees: 0x37c9c, 0x3f22a, 0x3f46b, 0x41fee
 */

void __fastcall sub_3958E(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // edx
  int v9; // eax
  unsigned int n0xE; // ebx
  unsigned int i; // ebx

  v7 = ++dword_54178;
  if ( dword_54174 && (v7 == 1 || dword_54170) && !sub_3F22A(a1) && sub_37C9C() )
    fprintf(env, "AIL_set_sample_file(0x%X,0x%X,%d)\n", a5, a6, a7);
  v9 = sub_41FEE(a5, a6, a7);
  if ( dword_54174 && (dword_54178 == 1 || dword_54170) && !sub_3F22A(v9) )
  {
    for ( n0xE = 0; n0xE < 0xE; ++n0xE )
      fprintf(env, " ");
    for ( i = 1; i < dword_54178; ++i )
      fprintf(env, byte_50311);
    JUMPOUT(0x39682);
  }
  JUMPOUT(0x3916A);
}
