/*
 * func-name: sub_357DD
 * func-address: 0x357dd
 * callers: 0x117e7, 0x16f55, 0x190ac, 0x1a813, 0x1aa1d, 0x1d80b, 0x1d8ba
 * callees: 0x10b4e, 0x135dd, 0x1366a, 0x15f84, 0x3702f
 */

int __usercall sub_357DD@<eax>(__int32 a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4@<ebx>, unsigned __int8 *a5@<edi>)
{
  int v5; // eax
  __int32 v6; // eax
  int v7; // eax
  int v8; // eax
  __int32 v9; // eax

  v5 = sub_3702F(a1, a2, a4, a3, 40);
  sub_135DD(v5, a2, a4, a3, 6, 40);
  v7 = sub_10B4E(v6, a2, a4, a3, 1);
  v8 = sub_1366A(v7, a2, a4, a3, 74);
  sub_15F84(a5, v8, a2, a3, a4, arg0_0, 5, 655360, 320, 205, 76, 74, 19, 1);
  return sub_134E4(v9, a2, a4, a3);
}
