/*
 * func-name: sub_38262
 * func-address: 0x38262
 * callers: 0x3fb90, 0x40cf0
 * callees: 0x37c9c, 0x3f063, 0x3f22a, 0x3f46b
 */

int __usercall sub_38262@<eax>(int a1@<eax>, int a2)
{
  int v2; // edx
  int result; // eax

  v2 = ++dword_54178;
  if ( dword_54174 && (v2 == 1 || dword_54170) && !sub_3F22A(a1) && sub_37C9C() )
    fprintf(env, "AIL_restore_USE16_ISR(%d)\n", a2);
  result = sub_3F063(a2);
  --dword_54178;
  return result;
}
