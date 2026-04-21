/*
 * func-name: sub_394B4
 * func-address: 0x394b4
 * callers: 0x41b26, 0x45f99
 * callees: 0x37c9c, 0x3f22a, 0x3f46b, 0x414d0
 */

void __usercall sub_394B4(int a1@<eax>, int a2)
{
  int v2; // edx

  v2 = ++dword_54178;
  if ( dword_54174 && (v2 == 1 || dword_54170) && !sub_3F22A(a1) && sub_37C9C() )
    fprintf(env, "AIL_release_sample_handle(0x%X)\n", a2);
  sub_414D0(a2);
  JUMPOUT(0x382CA);
}
