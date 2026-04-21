/*
 * func-name: sub_3815F
 * func-address: 0x3815f
 * callers: 0x3f950, 0x3fb90
 * callees: 0x37c9c, 0x3edd1, 0x3f22a, 0x3f46b
 */

void __usercall sub_3815F(int a1@<eax>, int a2, int a3)
{
  int v3; // edx

  v3 = ++dword_54178;
  if ( dword_54174 && (v3 == 1 || dword_54170) && !sub_3F22A(a1) && sub_37C9C() )
    fprintf(env, "AIL_set_real_vect(0x%X,0x%X)\n", a2, a3);
  sub_3EDD1(a2, a3);
  JUMPOUT(0x382CD);
}
