/*
 * func-name: sub_3C5C0
 * func-address: 0x3c5c0
 * callers: 0x42980, 0x447d0
 * callees: 0x37c9c, 0x3f22a, 0x3f46b, 0x450b0
 */

void __usercall sub_3C5C0(int a1@<eax>, int a2, int a3)
{
  int v3; // edx

  v3 = ++dword_54178;
  if ( dword_54174 && (v3 == 1 || dword_54170) && !sub_3F22A(a1) && sub_37C9C() )
    fprintf(env, "AIL_release_channel(0x%X,%d)\n", a2, a3);
  sub_450B0(a2, a3);
  JUMPOUT(0x381D0);
}
