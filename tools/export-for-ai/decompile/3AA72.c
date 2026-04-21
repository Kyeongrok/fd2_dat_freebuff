/*
 * func-name: sub_3AA72
 * func-address: 0x3aa72
 * callers: 0x25bf4
 * callees: 0x37c9c, 0x3f22a, 0x3f46b, 0x44240
 */

void __fastcall sub_3AA72(int a1)
{
  int v1; // edx
  int v3; // eax
  unsigned int n0xE; // ebx
  unsigned int i; // ebx

  v1 = ++dword_54178;
  if ( dword_54174 && (v1 == 1 || dword_54170) && !sub_3F22A(a1) && sub_37C9C() )
    fprintf(env, "AIL_install_MDI_INI()\n");
  v3 = sub_44240();
  if ( dword_54174 && (dword_54178 == 1 || dword_54170) && !sub_3F22A(v3) )
  {
    for ( n0xE = 0; n0xE < 0xE; ++n0xE )
      fprintf(env, " ");
    for ( i = 1; i < dword_54178; ++i )
      fprintf(env, byte_50311);
    JUMPOUT(0x39155);
  }
  JUMPOUT(0x3916A);
}
