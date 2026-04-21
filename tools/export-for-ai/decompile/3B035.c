/*
 * func-name: sub_3B035
 * func-address: 0x3b035
 * callers: 0x43a70
 * callees: 0x37c9c, 0x3f22a, 0x3f46b, 0x44930
 */

void __usercall sub_3B035(int a1@<eax>, int a2)
{
  int v2; // edx

  v2 = ++dword_54178;
  if ( dword_54174 && (v2 == 1 || dword_54170) && !sub_3F22A(a1) && sub_37C9C() )
    fprintf(env, "AIL_end_sequence(0x%X)\n", a2);
  sub_44930(a2);
  JUMPOUT(0x382CA);
}
