/*
 * func-name: sub_3C7A5
 * func-address: 0x3c7a5
 * callers: none
 * callees: 0x37c9c, 0x3f22a, 0x3f46b, 0x45240
 */

void __usercall sub_3C7A5(int a1@<eax>, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // edx

  v6 = ++dword_54178;
  if ( dword_54174 && (v6 == 1 || dword_54170) && !sub_3F22A(a1) && sub_37C9C() )
    fprintf(env, "AIL_send_channel_voice_message(0x%X,0x%X,0x%X,0x%X,0x%X)\n", a2, a3, a4, a5, a6);
  sub_45240(a2, a3, a4, a5, a6);
  JUMPOUT(0x38258);
}
