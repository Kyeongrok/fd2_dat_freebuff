/*
 * func-name: sub_38BD9
 * func-address: 0x38bd9
 * callers: 0x3f320, 0x3f950, 0x40cf0, 0x43ad0
 * callees: 0x37c9c, 0x3f22a, 0x3f2f0, 0x3f46b
 */

void __usercall sub_38BD9(int a1@<eax>, int a2)
{
  int v2; // edx

  v2 = ++dword_54178;
  if ( dword_54174 && (v2 == 1 || dword_54170) && !sub_3F22A(a1) && sub_37C9C() )
    fprintf(env, "AIL_start_timer(%u)\n", a2);
  sub_3F2F0(a2);
  JUMPOUT(0x382CA);
}
