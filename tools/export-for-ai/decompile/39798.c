/*
 * func-name: sub_39798
 * func-address: 0x39798
 * callers: 0x25a96, 0x25b45, 0x41b84, 0x45a20
 * callees: 0x37c9c, 0x3f22a, 0x3f46b, 0x416f0
 */

void __usercall sub_39798(int a1@<eax>, int a2)
{
  int v2; // edx

  v2 = ++dword_54178;
  if ( dword_54174 && (v2 == 1 || dword_54170) && !sub_3F22A(a1) && sub_37C9C() )
    fprintf(env, "AIL_start_sample(0x%X)\n", a2);
  sub_416F0(a2);
  JUMPOUT(0x382CA);
}
