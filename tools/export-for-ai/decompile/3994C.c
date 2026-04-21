/*
 * func-name: sub_3994C
 * func-address: 0x3994c
 * callers: 0x41b84, 0x41deb, 0x458f0
 * callees: 0x37c9c, 0x3f22a, 0x3f46b, 0x41610
 */

void __usercall sub_3994C(int a1@<eax>, int a2, int a3)
{
  int v3; // edx

  v3 = ++dword_54178;
  if ( dword_54174 && (v3 == 1 || dword_54170) && !sub_3F22A(a1) && sub_37C9C() )
    fprintf(env, "AIL_set_sample_playback_rate(0x%X,%d)\n", a2, a3);
  sub_41610(a2, a3);
  JUMPOUT(0x381D0);
}
