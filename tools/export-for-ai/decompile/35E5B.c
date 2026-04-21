/*
 * func-name: sub_35E5B
 * func-address: 0x35e5b
 * callers: 0x117e7, 0x16f55, 0x190ac, 0x1a813, 0x1aa1d, 0x1d80b, 0x1d8ba
 * callees: 0x15f84, 0x344f2, 0x35b78, 0x3702f
 */

void __usercall sub_35E5B(__int32 a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4@<ebx>, unsigned __int8 *a5@<edi>)
{
  int v5; // eax
  int v6; // eax
  __int32 v7; // eax
  __int32 v8; // eax

  v5 = sub_3702F(a1, a2, a4, a3, 40);
  v6 = sub_344F2(v5, a2, a4, a3, 41, 45, 0);
  sub_15F84(a5, v6, a2, a3, a4, arg0_0, 5, 655360, 320, 205, 76, 74, 19, 1);
  sub_35B78(v7, a2, a4, a3, 8, 7, 3u);
  sub_35B78(v8, a2, a4, a3, 4, 7, 4u);
  JUMPOUT(0x35D55);
}
