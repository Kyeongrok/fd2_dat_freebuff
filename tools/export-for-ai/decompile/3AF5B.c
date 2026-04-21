/*
 * func-name: sub_3AF5B
 * func-address: 0x3af5b
 * callers: 0x25977, 0x43270, 0x443b0, 0x44790, 0x44930
 * callees: 0x37c9c, 0x3f22a, 0x3f46b, 0x447d0
 */

void __usercall sub_3AF5B(int a1@<eax>, int a2)
{
  int v2; // edx

  v2 = ++dword_54178;
  if ( dword_54174 && (v2 == 1 || dword_54170) && !sub_3F22A(a1) && sub_37C9C() )
    fprintf(env, "AIL_stop_sequence(0x%X)\n", a2);
  sub_447D0(a2);
  JUMPOUT(0x382CA);
}
