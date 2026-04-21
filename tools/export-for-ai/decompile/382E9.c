/*
 * func-name: sub_382E9
 * func-address: 0x382e9
 * callers: 0x3f565, 0x3f950, 0x3fb90, 0x3fc33, 0x401c0, 0x404c0, 0x406b0, 0x40b40, 0x40c40, 0x40cf0, 0x416f0, 0x41950, 0x42270, 0x422c0, 0x423e0, 0x42dd0, 0x42ea0, 0x43270, 0x439a0, 0x43ad0, 0x443d0, 0x44ab0, 0x44af0, 0x44bf0, 0x44c30, 0x45240
 * callees: 0x37c9c, 0x3f113, 0x3f22a, 0x3f46b
 */

void __usercall sub_382E9(int a1@<eax>, int a2, int a3, int a4, int a5)
{
  int v5; // edx
  int v7; // eax
  unsigned int n0xE; // ebx
  unsigned int i; // ebx

  v5 = ++dword_54178;
  if ( dword_54174 && (v5 == 1 || dword_54170) && !sub_3F22A(a1) && sub_37C9C() )
    fprintf(env, "AIL_call_driver(0x%X,0x%X,0x%X,0x%X)\n", a2, a3, a4, a5);
  v7 = sub_3F113(a2, a3, a4, a5);
  if ( dword_54174 && (dword_54178 == 1 || dword_54170) && !sub_3F22A(v7) )
  {
    for ( n0xE = 0; n0xE < 0xE; ++n0xE )
      fprintf(env, " ");
    for ( i = 1; i < dword_54178; ++i )
      fprintf(env, byte_50311);
    JUMPOUT(0x3915B);
  }
  JUMPOUT(0x3916A);
}
