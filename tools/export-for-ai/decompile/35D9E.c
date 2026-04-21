/*
 * func-name: sub_35D9E
 * func-address: 0x35d9e
 * callers: 0x117e7, 0x16f55, 0x190ac, 0x1a813, 0x1aa1d, 0x1d80b, 0x1d8ba
 * callees: 0x15f84, 0x35b78, 0x3702f
 */

int __usercall sub_35D9E@<eax>(__int32 a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4@<ebx>, unsigned __int8 *a5@<edi>)
{
  int v5; // eax
  __int32 v6; // eax
  __int32 v7; // eax
  int n8; // eax

  v5 = sub_3702F(a1, a2, a4, a3, 40);
  sub_15F84(a5, v5, a2, a3, a4, arg0_0, 4, 655360, 320, 205, 76, 74, 19, 1);
  sub_35B78(v6, a2, a4, a3, 14, 7, 2u);
  sub_15F84(a5, v7, a2, a3, a4, arg0_0, 6, 655360, 320, 205, 76, 74, 19, 1);
  n8 = n8_1;
  *(_BYTE *)(n8_1 + 18) = 1;
  return n8;
}
