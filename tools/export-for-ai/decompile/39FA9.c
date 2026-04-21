/*
 * func-name: sub_39FA9
 * func-address: 0x39fa9
 * callers: none
 * callees: 0x37c9c, 0x3f22a, 0x3f46b, 0x41380
 */

void __usercall sub_39FA9(int a1@<eax>, int a2, int a3, int a4)
{
  int v4; // edx
  int v6; // eax
  unsigned int n0xE; // ebx
  unsigned int i; // ebx

  v4 = ++dword_54178;
  if ( dword_54174 && (v4 == 1 || dword_54170) && !sub_3F22A(a1) && sub_37C9C() )
    fprintf(env, "AIL_install_DIG_driver_image(0x%X,%u,0x%X)\n", a2, a3, a4);
  v6 = sub_41380(a2, a3, a4);
  if ( dword_54174 && (dword_54178 == 1 || dword_54170) && !sub_3F22A(v6) )
  {
    for ( n0xE = 0; n0xE < 0xE; ++n0xE )
      fprintf(env, " ");
    for ( i = 1; i < dword_54178; ++i )
      fprintf(env, byte_50311);
    JUMPOUT(0x394A9);
  }
  JUMPOUT(0x3916A);
}
