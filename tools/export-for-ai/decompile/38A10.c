/*
 * func-name: sub_38A10
 * func-address: 0x38a10
 * callers: 0x3f950, 0x40cf0, 0x43ad0
 * callees: 0x37c9c, 0x3f22a, 0x3f3c8, 0x3f46b
 */

void __usercall sub_38A10(int a1@<eax>, int a2, int n100)
{
  int v3; // edx

  v3 = ++dword_54178;
  if ( dword_54174 && (v3 == 1 || dword_54170) && !sub_3F22A(a1) && sub_37C9C() )
    fprintf(env, "AIL_set_timer_frequency(%u,%u)\n", a2, n100);
  sub_3F3C8(a2, n100);
  JUMPOUT(0x381D0);
}
