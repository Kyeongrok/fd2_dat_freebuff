/*
 * func-name: sub_38074
 * func-address: 0x38074
 * callers: 0x3f950
 * callees: 0x37c9c, 0x3eda5, 0x3f22a, 0x3f46b
 */

void __usercall sub_38074(int a1@<eax>, int a2)
{
  int v2; // edx
  int v4; // eax
  unsigned int n0xE; // ebx
  unsigned int i; // ebx

  v2 = ++dword_54178;
  if ( dword_54174 && (v2 == 1 || dword_54170) && !sub_3F22A(a1) && sub_37C9C() )
    fprintf(env, "AIL_get_real_vect(0x%X)\n", a2);
  v4 = sub_3EDA5(a2);
  if ( dword_54174 && (dword_54178 == 1 || dword_54170) && !sub_3F22A(v4) )
  {
    for ( n0xE = 0; n0xE < 0xE; ++n0xE )
      fprintf(env, " ");
    for ( i = 1; i < dword_54178; ++i )
      fprintf(env, byte_50311);
    JUMPOUT(0x39162);
  }
  JUMPOUT(0x3916A);
}
