/*
 * func-name: sub_35258
 * func-address: 0x35258
 * callers: 0x117e7, 0x16f55, 0x190ac, 0x1a813, 0x1aa1d, 0x1d80b, 0x1d8ba
 * callees: 0x15f84, 0x344f2, 0x3702f
 */

int __usercall sub_35258@<eax>(__int32 a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4@<ebx>, unsigned __int8 *a5@<edi>)
{
  int v5; // eax
  __int32 v6; // eax

  v5 = sub_3702F(a1, a2, a4, a3, 40);
  sub_15F84(a5, v5, a2, a3, a4, arg0_0, 8, 655360, 320, 205, 76, 74, 19, 1);
  return sub_344F2(v6, a2, a4, a3, 16, 34, 0);
}
