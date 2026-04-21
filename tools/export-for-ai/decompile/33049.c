/*
 * func-name: sub_33049
 * func-address: 0x33049
 * callers: 0x15311, 0x1cff0, 0x25bf4, 0x25ebb
 * callees: 0x10b4e, 0x11cac, 0x12d7b, 0x134e4, 0x135dd, 0x1366a, 0x15f84, 0x205da, 0x3702f, 0x3790a
 */

void __usercall sub_33049(__int32 a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4@<ebx>, unsigned __int8 *a5@<edi>)
{
  int v5; // eax
  __int32 v6; // eax
  __int32 v7; // eax
  __int32 v8; // eax
  int v9; // eax
  __int32 v10; // eax
  int v11; // eax
  __int32 v12; // eax
  __int32 v13; // eax
  int v14; // eax
  __int32 v15; // eax
  int v16; // eax

  v5 = sub_3702F(a1, a2, a4, a3, 40);
  sub_205DA(v5, a2, a4, a3);
  sub_15F84(a5, v6, a2, a3, a4, arg0_0, 0, 655360, 320, 205, 76, 74, 19, 1);
  n6_5 = 0;
  sub_135DD(v7, a2, a4, a3, 3, 3);
  v8 = j___delay(200);
  v9 = sub_10B4E(v8, a2, a4, a3, 1);
  sub_11CAC(v9, a2, a4, a3, 0);
  v10 = j___delay(200);
  v11 = sub_1366A(v10, a2, a4, a3, 22);
  sub_15F84(a5, v11, a2, a3, a4, arg0_0, 1, 655360, 320, 205, 76, 74, 19, 1);
  n6_5 = 0;
  sub_135DD(v12, a2, a4, a3, 8, 14);
  v14 = sub_1366A(v13, a2, a4, a3, 21);
  sub_15F84(a5, v14, a2, a3, a4, arg0_0, 2, 655360, 320, 205, 76, 74, 19, 1);
  v16 = sub_134E4(v15, a2, a4, a3);
  sub_12D7B(v16, a2, a4, a3, 0);
}
