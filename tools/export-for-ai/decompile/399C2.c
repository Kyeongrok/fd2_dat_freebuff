/*
 * func-name: sub_399C2
 * func-address: 0x399c2
 * callers: 0x45880
 * callees: 0x37c9c, 0x3f22a, 0x3f46b, 0x41630
 */

void __usercall sub_399C2(int a1@<eax>, int a2, int a3)
{
  int v3; // edx

  v3 = ++dword_54178;
  if ( dword_54174 && (v3 == 1 || dword_54170) && !sub_3F22A(a1) && sub_37C9C() )
    fprintf(env, "AIL_set_sample_volume(0x%X,%d)\n", a2, a3);
  sub_41630(a2, a3);
  JUMPOUT(0x381D0);
}
