/*
 * func-name: sub_39716
 * func-address: 0x39716
 * callers: 0x41b84, 0x41deb, 0x45a20
 * callees: 0x37c9c, 0x3f22a, 0x3f46b, 0x415d0
 */

int __usercall sub_39716@<eax>(int a1@<eax>, int a2, int a3, int a4)
{
  int v4; // edx
  int result; // eax

  v4 = ++dword_54178;
  if ( dword_54174 && (v4 == 1 || dword_54170) && !sub_3F22A(a1) && sub_37C9C() )
    fprintf(env, "AIL_set_sample_type(0x%X,%d,%u)\n", a2, a3, a4);
  result = sub_415D0(a2, a3, a4);
  --dword_54178;
  return result;
}
