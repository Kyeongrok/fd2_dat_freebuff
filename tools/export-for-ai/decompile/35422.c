/*
 * func-name: sub_35422
 * func-address: 0x35422
 * callers: 0x117e7, 0x16f55, 0x190ac, 0x1a813, 0x1aa1d, 0x1d80b, 0x1d8ba
 * callees: 0x10b4e, 0x112a5, 0x15f84, 0x3702f
 */

int __usercall sub_35422@<eax>(__int32 a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4@<ebx>, unsigned __int8 *a5@<edi>)
{
  int v5; // eax
  int v6; // eax
  __int32 v7; // eax

  v5 = sub_3702F(a1, a2, a4, a3, 40);
  v6 = sub_10B4E(v5, a2, a4, a3, 1);
  sub_15F84(a5, v6, a2, a3, a4, arg0_0, 1, 655360, 320, 205, 76, 74, 19, 1);
  return sub_112A5(v7, a2, a4, a3, 0x13u);
}
