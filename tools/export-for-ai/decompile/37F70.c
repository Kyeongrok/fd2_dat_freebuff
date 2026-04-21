/*
 * func-name: sub_37F70
 * func-address: 0x37f70
 * callers: 0x3fca9
 * callees: 0x37c9c, 0x3f22a, 0x3f46b, 0x3f937
 */

void __usercall sub_37F70(int a1@<eax>, int a2, int a3)
{
  int v3; // edx
  int v5; // eax
  unsigned int n0xE; // ebx
  unsigned int i; // ebx

  v3 = ++dword_54178;
  if ( dword_54174 && (v3 == 1 || dword_54170) && !sub_3F22A(a1) && sub_37C9C() )
    fprintf(env, "AIL_set_preference(%d,%d)\n", a2, a3);
  v5 = sub_3F937(a2, a3);
  if ( dword_54174 && (dword_54178 == 1 || dword_54170) && !sub_3F22A(v5) )
  {
    for ( n0xE = 0; n0xE < 0xE; ++n0xE )
      fprintf(env, " ");
    for ( i = 1; i < dword_54178; ++i )
      fprintf(env, byte_50311);
    JUMPOUT(0x39162);
  }
  JUMPOUT(0x3916A);
}
