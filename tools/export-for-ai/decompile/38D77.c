/*
 * func-name: sub_38D77
 * func-address: 0x38d77
 * callers: 0x3f2cc, 0x3fb90, 0x40c40, 0x43a70
 * callees: 0x37c9c, 0x3f22a, 0x3f2a5, 0x3f46b
 */

void __usercall sub_38D77(int a1@<eax>, int a2)
{
  int v2; // edx

  v2 = ++dword_54178;
  if ( dword_54174 && (v2 == 1 || dword_54170) && !sub_3F22A(a1) && sub_37C9C() )
    fprintf(env, "AIL_release_timer_handle(%u)\n", a2);
  sub_3F2A5(a2);
  JUMPOUT(0x382CA);
}
