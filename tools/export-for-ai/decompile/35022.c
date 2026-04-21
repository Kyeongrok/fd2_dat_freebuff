/*
 * func-name: sub_35022
 * func-address: 0x35022
 * callers: 0x117e7, 0x16f55, 0x190ac, 0x1a813, 0x1aa1d, 0x1d80b, 0x1d8ba
 * callees: 0x10b4e, 0x134e4, 0x135dd, 0x1366a, 0x15f84, 0x3702f
 */

void __usercall sub_35022(__int32 a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4@<ebx>, unsigned __int8 *a5@<edi>)
{
  int v5; // eax
  __int32 v6; // eax
  __int32 v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  __int32 v11; // eax
  int v12; // eax
  int v13; // eax

  v5 = sub_3702F(a1, a2, a4, a3, 40);
  sub_15F84(a5, v5, a2, a3, a4, arg0_0, 1, 655360, 320, 205, 76, 74, 19, 1);
  sub_135DD(v6, a2, a4, a3, 15, 34);
  byte_53AFA = 1;
  v8 = sub_10B4E(v7, a2, a4, a3, 3);
  byte_53AFA = 0;
  v9 = sub_1366A(v8, a2, a4, a3, 43);
  v10 = sub_134E4(v9, a2, a4, a3);
  sub_135DD(v10, a2, a4, a3, 0, 26);
  byte_53AFA = 1;
  v12 = sub_10B4E(v11, a2, a4, a3, 4);
  byte_53AFA = 0;
  v13 = sub_1366A(v12, a2, a4, a3, 44);
  sub_134E4(v13, a2, a4, a3);
  JUMPOUT(0x35F6E);
}
