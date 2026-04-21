/*
 * func-name: sub_34531
 * func-address: 0x34531
 * callers: 0x117e7, 0x16f55, 0x190ac, 0x1a813, 0x1a866, 0x1aa1d, 0x1d80b, 0x1d8ba
 * callees: 0x10b4e, 0x112a5, 0x11cac, 0x134e4, 0x135dd, 0x1366a, 0x15f84, 0x3702f, 0x3790a, 0x4e381
 */

int __usercall sub_34531@<eax>(__int32 a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4@<ebx>, unsigned __int8 *a5@<edi>)
{
  int v5; // eax
  int v6; // eax
  int v7; // eax
  __int32 v8; // eax
  __int32 v9; // eax
  __int32 v10; // eax
  __int32 v11; // eax
  int v12; // eax
  __int32 v13; // eax
  __int32 v14; // eax
  __int32 v15; // eax

  v5 = sub_3702F(a1, a2, a4, a3, 44);
  v6 = sub_112A5(v5, a2, a4, a3, 1u);
  v7 = sub_10B4E(v6, a2, a4, a3, 3);
  sub_135DD(v7, a2, a4, a3, 5, 8);
  sub_11CAC(v8, a2, a4, a3, 1);
  v9 = j___delay(100);
  sub_1366A(v9, a2, a4, a3, 7);
  LOWORD(v10) = sub_4E381();
  sub_15F84(a5, v10, a2, a3, a4, arg0_0, 11, 655360, 320, 205, 76, 74, 19, 1);
  n6_5 = 0;
  v12 = sub_10B4E(v11, a2, a4, a3, 7);
  sub_11CAC(v12, a2, a4, a3, 1);
  v13 = j___delay(100);
  sub_1366A(v13, a2, a4, a3, 8);
  LOWORD(v14) = sub_4E381();
  sub_15F84(a5, v14, a2, a3, a4, arg0_0, 3, 655360, 320, 205, 76, 74, 19, 1);
  return sub_134E4(v15, a2, a4, a3);
}
