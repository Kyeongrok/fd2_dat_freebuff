/*
 * func-name: sub_388A7
 * func-address: 0x388a7
 * callers: 0x3f950, 0x40cf0, 0x43ad0
 * callees: 0x37c9c, 0x3f22a, 0x3f27d, 0x3f46b
 */

void __usercall sub_388A7(int a1@<eax>, int a2, int a3)
{
  int v3; // edx
  int v5; // eax
  unsigned int n0xE; // ebx
  unsigned int i; // ebx

  v3 = ++dword_54178;
  if ( dword_54174 && (v3 == 1 || dword_54170) && !sub_3F22A(a1) && sub_37C9C() )
    fprintf(env, "AIL_set_timer_user(%u,%u)\n", a2, a3);
  v5 = sub_3F27D(a2, a3);
  if ( dword_54174 && (dword_54178 == 1 || dword_54170) && !sub_3F22A(v5) )
  {
    for ( n0xE = 0; n0xE < 0xE; ++n0xE )
      fprintf(env, " ");
    for ( i = 1; i < dword_54178; ++i )
      fprintf(env, byte_50311);
    JUMPOUT(0x3805E);
  }
  JUMPOUT(0x3916A);
}
