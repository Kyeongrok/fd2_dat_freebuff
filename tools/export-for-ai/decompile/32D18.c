/*
 * func-name: sub_32D18
 * func-address: 0x32d18
 * callers: 0x15311, 0x1cff0, 0x25bf4, 0x25ebb
 * callees: 0x10b4e, 0x11cac, 0x134e4, 0x135dd, 0x1366a, 0x15f84, 0x205da, 0x3702f, 0x3790a
 */

void __usercall sub_32D18(__int32 a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4@<ebx>, unsigned __int8 *a5@<edi>)
{
  int v5; // eax
  __int32 v6; // eax
  __int32 v7; // eax
  __int32 v8; // eax
  __int32 v9; // eax
  __int32 v10; // eax
  __int32 v11; // eax
  int v12; // eax
  __int32 v13; // eax
  int v14; // eax
  __int32 v15; // eax
  int v16; // eax
  __int32 v17; // eax
  int v18; // eax
  int v19; // eax

  v5 = sub_3702F(a1, a2, a4, a3, 40);
  sub_205DA(v5, a2, a4, a3);
  sub_135DD(v6, a2, a4, a3, 13, 11);
  sub_1366A(v7, a2, a4, a3, 9);
  v8 = j___delay(50);
  sub_15F84(a5, v8, a2, a3, a4, arg0_0, 0, 655360, 320, 205, 76, 74, 19, 1);
  n6_5 = 0;
  v9 = j___delay(200);
  sub_1366A(v9, a2, a4, a3, 10);
  v10 = j___delay(200);
  sub_15F84(a5, v10, a2, a3, a4, arg0_0, 1, 655360, 320, 205, 76, 74, 19, 1);
  n6_5 = 0;
  v11 = j___delay(200);
  v12 = sub_10B4E(v11, a2, a4, a3, 1);
  sub_11CAC(v12, a2, a4, a3, 0);
  v13 = j___delay(200);
  v14 = sub_1366A(v13, a2, a4, a3, 11);
  sub_15F84(a5, v14, a2, a3, a4, arg0_0, 2, 655360, 320, 205, 76, 74, 19, 1);
  n6_5 = 0;
  v16 = sub_134E4(v15, a2, a4, a3);
  sub_135DD(v16, a2, a4, a3, 6, 12);
  byte_53AFA = 1;
  v18 = sub_10B4E(v17, a2, a4, a3, 2);
  byte_53AFA = 0;
  v19 = sub_1366A(v18, a2, a4, a3, 12);
  sub_134E4(v19, a2, a4, a3);
  JUMPOUT(0x33206);
}
