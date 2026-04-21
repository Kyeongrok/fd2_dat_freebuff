/*
 * func-name: sub_3B124
 * func-address: 0x3b124
 * callers: 0x1728c, 0x25977
 * callees: 0x37c9c, 0x3f22a, 0x3f46b, 0x449e0
 */

int __usercall sub_3B124@<eax>(int a1@<eax>, int a2, int n127, int n4000)
{
  int v4; // edx
  int result; // eax

  v4 = ++dword_54178;
  if ( dword_54174 && (v4 == 1 || dword_54170) && !sub_3F22A(a1) && sub_37C9C() )
    fprintf(env, "AIL_set_sequence_volume(0x%X,%d,%d)\n", a2, n127, n4000);
  result = sub_449E0(a2, n127, n4000);
  --dword_54178;
  return result;
}
