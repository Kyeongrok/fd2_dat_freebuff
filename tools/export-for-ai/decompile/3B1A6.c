/*
 * func-name: sub_3B1A6
 * func-address: 0x3b1a6
 * callers: 0x25977
 * callees: 0x37c9c, 0x3f22a, 0x3f46b, 0x44960
 */

void __usercall sub_3B1A6(int a1@<eax>, int a2, int arg4)
{
  int v3; // edx

  v3 = ++dword_54178;
  if ( dword_54174 && (v3 == 1 || dword_54170) && !sub_3F22A(a1) && sub_37C9C() )
    fprintf(env, "AIL_set_sequence_loop_count(0x%X,%d)\n", a2, arg4);
  sub_44960(a2, arg4);
  JUMPOUT(0x381D0);
}
