/*
 * func-name: sub_3B98A
 * func-address: 0x3b98a
 * callers: none
 * callees: 0x37c9c, 0x3f22a, 0x3f46b, 0x44c30
 */

int __usercall sub_3B98A@<eax>(int a1@<eax>, int a2, int a3, int a4)
{
  int v4; // edx
  int result; // eax

  v4 = ++dword_54178;
  if ( dword_54174 && (v4 == 1 || dword_54170) && !sub_3F22A(a1) && sub_37C9C() )
    fprintf(env, "AIL_unprotect_timbre(0x%X,%d,%d)\n", a2, a3, a4);
  result = sub_44C30(a2, a3, a4);
  --dword_54178;
  return result;
}
