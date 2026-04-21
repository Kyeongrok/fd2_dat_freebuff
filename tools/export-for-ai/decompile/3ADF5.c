/*
 * func-name: sub_3ADF5
 * func-address: 0x3adf5
 * callers: 0x25977
 * callees: 0x37c9c, 0x3f22a, 0x3f46b, 0x443d0
 */

void __usercall sub_3ADF5(int a1@<eax>, int a2, int _FDMUS.DAT_, int a4)
{
  int v4; // edx
  int v6; // eax
  unsigned int n0xE; // ebx
  unsigned int i; // ebx

  v4 = ++dword_54178;
  if ( dword_54174 && (v4 == 1 || dword_54170) && !sub_3F22A(a1) && sub_37C9C() )
    fprintf(env, "AIL_init_sequence(0x%X,0x%X,%d)\n", a2, _FDMUS.DAT_, a4);
  v6 = sub_443D0(a2, _FDMUS.DAT_, a4);
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
