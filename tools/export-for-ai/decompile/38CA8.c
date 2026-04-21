/*
 * func-name: sub_38CA8
 * func-address: 0x38ca8
 * callers: 0x3f374
 * callees: 0x37c9c, 0x3f22a, 0x3f344, 0x3f46b
 */

void __usercall sub_38CA8(int a1@<eax>, int a2)
{
  int v2; // edx

  v2 = ++dword_54178;
  if ( dword_54174 && (v2 == 1 || dword_54170) && !sub_3F22A(a1) && sub_37C9C() )
    fprintf(env, "AIL_stop_timer(%u)\n", a2);
  sub_3F344(a2);
  JUMPOUT(0x382CA);
}
