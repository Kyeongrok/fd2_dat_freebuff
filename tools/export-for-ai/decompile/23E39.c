/*
 * func-name: sub_23E39
 * func-address: 0x23e39
 * callers: 0x15311, 0x1cff0, 0x25bf4
 * callees: 0x11506, 0x15f84, 0x3702f
 */

void __usercall sub_23E39(__int32 a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4@<ebx>, unsigned __int8 *a5@<edi>)
{
  int v5; // eax
  __int32 v6; // eax

  v5 = sub_3702F(a1, a2, a4, a3, 40);
  sub_11506(v5, a2, a4, a3);
  sub_15F84(a5, v6, a2, a3, a4, arg0_0, 3, 655360, 320, 205, 76, 74, 19, 1);
  JUMPOUT(0x231F2);
}
