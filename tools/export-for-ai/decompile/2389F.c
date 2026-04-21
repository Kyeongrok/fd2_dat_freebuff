/*
 * func-name: sub_2389F
 * func-address: 0x2389f
 * callers: 0x15311, 0x1cff0, 0x25bf4
 * callees: 0x112a5, 0x15f84, 0x3702f
 */

void __usercall sub_2389F(__int32 a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4@<ebx>, unsigned __int8 *a5@<edi>)
{
  int v5; // eax
  __int32 v6; // eax

  v5 = sub_3702F(a1, a2, a4, a3, 40);
  sub_15F84(a5, v5, a2, a3, a4, arg0_0, 9, 655360, 320, 205, 76, 74, 19, 1);
  sub_112A5(v6, a2, a4, a3, 3u);
  JUMPOUT(0x237C8);
}
