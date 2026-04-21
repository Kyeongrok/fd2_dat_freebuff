/*
 * func-name: sub_3A644
 * func-address: 0x3a644
 * callers: 0x41ec1
 * callees: 0x37c9c, 0x3f22a, 0x3f46b, 0x41840
 */

void __usercall sub_3A644(int a1@<eax>, int a2, int a3)
{
  int v3; // edx
  int v5; // eax
  unsigned int n0xE; // ebx
  unsigned int i; // ebx

  v3 = ++dword_54178;
  if ( dword_54174 && (v3 == 1 || dword_54170) && !sub_3F22A(a1) && sub_37C9C() )
    fprintf(env, "AIL_register_EOS_callback(0x%X,0x%X)\n", a2, a3);
  v5 = sub_41840(a2, a3);
  if ( dword_54174 && (dword_54178 == 1 || dword_54170) && !sub_3F22A(v5) )
  {
    for ( n0xE = 0; n0xE < 0xE; ++n0xE )
      fprintf(env, " ");
    for ( i = 1; i < dword_54178; ++i )
      fprintf(env, byte_50311);
    JUMPOUT(0x39013);
  }
  JUMPOUT(0x3916A);
}
