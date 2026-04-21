/*
 * func-name: sub_3B716
 * func-address: 0x3b716
 * callers: none
 * callees: 0x37c9c, 0x3f22a, 0x3f46b, 0x44ab0
 */

void __usercall sub_3B716(int a1@<eax>, int a2, int a3, int a4)
{
  int v4; // edx
  int v6; // eax
  unsigned int n0xE; // ebx
  unsigned int i; // ebx

  v4 = ++dword_54178;
  if ( dword_54174 && (v4 == 1 || dword_54170) && !sub_3F22A(a1) && sub_37C9C() )
    fprintf(env, "AIL_timbre_status(0x%X,%d,%d)\n", a2, a3, a4);
  v6 = sub_44AB0(a2, a3, a4);
  if ( dword_54174 && (dword_54178 == 1 || dword_54170) && !sub_3F22A(v6) )
  {
    for ( n0xE = 0; n0xE < 0xE; ++n0xE )
      fprintf(env, " ");
    for ( i = 1; i < dword_54178; ++i )
      fprintf(env, byte_50311);
    JUMPOUT(0x39162);
  }
  JUMPOUT(0x3916A);
}
