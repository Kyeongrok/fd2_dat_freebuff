/*
 * func-name: sub_3460B
 * func-address: 0x3460b
 * callers: 0x117e7, 0x16f55, 0x190ac, 0x1a813, 0x1aa1d, 0x1d80b, 0x1d8ba
 * callees: 0x11cac, 0x134e4, 0x135dd, 0x1366a, 0x15f84, 0x32999, 0x3702f, 0x4e381
 */

void __usercall sub_3460B(__int32 a1@<eax>, int a2@<edx>, int n4@<ecx>, int n34@<ebx>, unsigned __int8 *a5@<edi>)
{
  int v5; // eax
  __int32 v6; // eax
  __int32 v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax

  v5 = sub_3702F(a1, a2, n34, n4, 44);
  sub_135DD(v5, a2, n34, n4, 11, 16);
  sub_32999(v6, a2, n34, n4, 4);
  LOWORD(v7) = sub_4E381();
  v8 = sub_11CAC(v7, a2, n34, n4, 1);
  v9 = sub_1366A(v8, a2, n34, n4, 3);
  v10 = sub_134E4(v9, a2, n34, n4);
  sub_15F84(a5, v10, a2, n4, n34, arg0_0, 4, 655360, 320, 205, 76, 74, 19, 1);
}
