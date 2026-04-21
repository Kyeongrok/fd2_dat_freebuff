/*
 * func-name: sub_3901E
 * func-address: 0x3901e
 * callers: 0x3fdaf, 0x41300, 0x41380, 0x41420, 0x44180, 0x44200, 0x442a0
 * callees: 0x37c9c, 0x3f22a, 0x3f46b, 0x3fb90
 */

void __usercall sub_3901E(int a1@<eax>, int a2)
{
  int v2; // edx

  v2 = ++dword_54178;
  if ( dword_54174 && (v2 == 1 || dword_54170) && !sub_3F22A(a1) && sub_37C9C() )
    fprintf(env, "AIL_uninstall_driver(0x%X)\n", a2);
  sub_3FB90(a2);
  JUMPOUT(0x382CA);
}
