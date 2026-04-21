/*
 * func-name: sub_3A280
 * func-address: 0x3a280
 * callers: none
 * callees: 0x37c9c, 0x3f22a, 0x3f46b, 0x41950
 */

void __usercall sub_3A280(int a1@<eax>, int a2, int a3, int a4, int a5)
{
  int v5; // edx

  v5 = ++dword_54178;
  if ( dword_54174 && (v5 == 1 || dword_54170) && !sub_3F22A(a1) && sub_37C9C() )
    fprintf(env, "AIL_load_sample_buffer(0x%X,%u,0x%X,%u)\n", a2, a3, a4, a5);
  sub_41950(a2, a3, a4, a5);
  JUMPOUT(0x38258);
}
