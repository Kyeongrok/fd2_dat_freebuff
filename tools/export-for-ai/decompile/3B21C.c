/*
 * func-name: sub_3B21C
 * func-address: 0x3b21c
 * callers: none
 * callees: 0x37c9c, 0x3f22a, 0x3f46b, 0x44a60
 */

void __usercall sub_3B21C(int a1@<eax>, int a2)
{
  int v2; // edx
  int v4; // eax
  unsigned int n0xE; // ebx
  unsigned int i; // ebx

  v2 = ++dword_54178;
  if ( dword_54174 && (v2 == 1 || dword_54170) && !sub_3F22A(a1) && sub_37C9C() )
    fprintf(env, "AIL_sequence_status(0x%X)\n", a2);
  v4 = sub_44A60(a2);
  if ( dword_54174 && (dword_54178 == 1 || dword_54170) && !sub_3F22A(v4) )
  {
    for ( n0xE = 0; n0xE < 0xE; ++n0xE )
      fprintf(env, " ");
    for ( i = 1; i < dword_54178; ++i )
      fprintf(env, byte_50311);
    JUMPOUT(0x3889C);
  }
  JUMPOUT(0x3916A);
}
