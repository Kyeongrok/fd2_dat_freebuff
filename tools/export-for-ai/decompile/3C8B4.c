/*
 * func-name: sub_3C8B4
 * func-address: 0x3c8b4
 * callers: none
 * callees: 0x37c9c, 0x3f22a, 0x3f46b, 0x45e21
 */

void __usercall sub_3C8B4(int a1@<eax>, int a2, int a3, int a4, int a5)
{
  int v5; // edx
  int v7; // eax
  unsigned int n0xE; // ebx
  unsigned int i; // ebx

  v5 = ++dword_54178;
  if ( dword_54174 && (v5 == 1 || dword_54170) && !sub_3F22A(a1) && sub_37C9C() )
    fprintf(env, "AIL_create_wave_synthesizer(0x%X,0x%X,0x%X,%d)\n", a2, a3, a4, a5);
  v7 = sub_45E21(a2, a3, a4, a5);
  if ( dword_54174 && (dword_54178 == 1 || dword_54170) && !sub_3F22A(v7) )
  {
    for ( n0xE = 0; n0xE < 0xE; ++n0xE )
      fprintf(env, " ");
    for ( i = 1; i < dword_54178; ++i )
      fprintf(env, byte_50311);
    JUMPOUT(0x39155);
  }
  JUMPOUT(0x3916A);
}
