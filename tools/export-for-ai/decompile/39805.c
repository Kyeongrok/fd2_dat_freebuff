/*
 * func-name: sub_39805
 * func-address: 0x39805
 * callers: 0x25a96, 0x25b45
 * callees: 0x37c9c, 0x3f22a, 0x3f46b, 0x41770
 */

void __usercall sub_39805(int a1@<eax>, int a2)
{
  int v2; // edx

  v2 = ++dword_54178;
  if ( dword_54174 && (v2 == 1 || dword_54170) && !sub_3F22A(a1) && sub_37C9C() )
    fprintf(env, "AIL_stop_sample(0x%X)\n", a2);
  sub_41770(a2);
  JUMPOUT(0x382CA);
}
