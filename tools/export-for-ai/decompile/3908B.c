/*
 * func-name: sub_3908B
 * func-address: 0x3908b
 * callers: 0x25bf4
 * callees: 0x37c9c, 0x3f22a, 0x3f46b, 0x413c0
 */

int __fastcall sub_3908B(int a1)
{
  int v1; // edx
  int v3; // eax
  int v4; // esi
  unsigned int n0xE; // ebx
  unsigned int i; // ebx

  v1 = ++dword_54178;
  if ( dword_54174 && (v1 == 1 || dword_54170) && !sub_3F22A(a1) && sub_37C9C() )
    fprintf(env, "AIL_install_DIG_INI()\n");
  v3 = sub_413C0();
  v4 = v3;
  if ( dword_54174 && (dword_54178 == 1 || dword_54170) && !sub_3F22A(v3) )
  {
    for ( n0xE = 0; n0xE < 0xE; ++n0xE )
      fprintf(env, " ");
    for ( i = 1; i < dword_54178; ++i )
      fprintf(env, byte_50311);
    fprintf(env, "Result = 0x%X\n", v4);
  }
  --dword_54178;
  return v4;
}
