/*
 * func-name: sub_3BDDF
 * func-address: 0x3bddf
 * callers: 0x42980
 * callees: 0x37c9c, 0x3f22a, 0x3f46b, 0x44d80
 */

void __usercall sub_3BDDF(int a1@<eax>, int a2, int a3)
{
  int v3; // edx

  v3 = ++dword_54178;
  if ( dword_54174 && (v3 == 1 || dword_54170) && !sub_3F22A(a1) && sub_37C9C() )
    fprintf(env, "AIL_branch_index(0x%X,%u)\n", a2, a3);
  sub_44D80(a2, a3);
  JUMPOUT(0x381D0);
}
