/*
 * func-name: sub_3C636
 * func-address: 0x3c636
 * callers: 0x42980
 * callees: 0x37c9c, 0x3f22a, 0x3f46b, 0x451e0
 */

int __usercall sub_3C636@<eax>(int a1@<eax>, int a2, int a3, int a4)
{
  int v4; // edx
  int result; // eax

  v4 = ++dword_54178;
  if ( dword_54174 && (v4 == 1 || dword_54170) && !sub_3F22A(a1) && sub_37C9C() )
    fprintf(env, "AIL_map_sequence_channel(0x%X,%d,%d)\n", a2, a3, a4);
  result = sub_451E0(a2, a3, a4);
  --dword_54178;
  return result;
}
