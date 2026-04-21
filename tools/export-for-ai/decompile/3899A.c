/*
 * func-name: sub_3899A
 * func-address: 0x3899a
 * callers: 0x3ec7c, 0x3f3c8, 0x3f3f8
 * callees: 0x37c9c, 0x3f22a, 0x3f398, 0x3f46b
 */

void __usercall sub_3899A(int a1@<eax>, int a2, int a3)
{
  int v3; // edx

  v3 = ++dword_54178;
  if ( dword_54174 && (v3 == 1 || dword_54170) && !sub_3F22A(a1) && sub_37C9C() )
    fprintf(env, "AIL_set_timer_period(%u,%u)\n", a2, a3);
  sub_3F398(a2, a3);
  JUMPOUT(0x381D0);
}
