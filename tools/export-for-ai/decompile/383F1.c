/*
 * func-name: sub_383F1
 * func-address: 0x383f1
 * callers: 0x40c40, 0x42dd0, 0x43ad0
 * callees: 0x37c9c, 0x3f1ed, 0x3f22a, 0x3f46b
 */

void __usercall sub_383F1(int a1@<eax>, int a2)
{
  int v2; // edx

  v2 = ++dword_54178;
  if ( dword_54174 && (v2 == 1 || dword_54170) && !sub_3F22A(a1) && sub_37C9C() )
    fprintf(env, "AIL_delay(%d)\n", a2);
  sub_3F1ED(a2);
  JUMPOUT(0x382CA);
}
