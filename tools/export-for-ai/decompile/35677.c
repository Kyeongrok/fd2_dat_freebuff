/*
 * func-name: sub_35677
 * func-address: 0x35677
 * callers: 0x117e7, 0x16f55, 0x190ac, 0x1a813, 0x1aa1d, 0x1d80b, 0x1d8ba
 * callees: 0x15f84, 0x35f10, 0x3702f
 */

int __usercall sub_35677@<eax>(__int32 a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4@<ebx>, unsigned __int8 *a5@<edi>)
{
  int v5; // eax

  v5 = sub_3702F(a1, a2, a4, a3, 40);
  sub_15F84(a5, v5, a2, a3, a4, arg0_0, 5, 655360, 320, 205, 76, 74, 19, 1);
  return sub_35F10(18);
}
