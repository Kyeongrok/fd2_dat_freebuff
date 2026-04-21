/*
 * func-name: sub_32E8C
 * func-address: 0x32e8c
 * callers: 0x15311, 0x1cff0, 0x25bf4, 0x25ebb
 * callees: 0x10b4e, 0x135dd, 0x1366a, 0x15f84, 0x205da, 0x3702f, 0x3790a
 */

void __usercall sub_32E8C(__int32 a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4@<ebx>, unsigned __int8 *a5@<edi>)
{
  int v5; // eax
  __int32 v6; // eax
  __int32 v7; // eax
  __int32 v8; // eax
  int v9; // eax
  int v10; // eax
  __int32 v11; // eax
  int v12; // eax
  __int32 v13; // eax
  int v14; // eax
  __int32 v15; // eax

  v5 = sub_3702F(a1, a2, a4, a3, 40);
  sub_205DA(v5, a2, a4, a3);
  sub_135DD(v6, a2, a4, a3, 3, 17);
  v7 = j___delay(200);
  sub_15F84(a5, v7, a2, a3, a4, arg0_0, 0, 655360, 320, 205, 76, 74, 19, 1);
  n6_5 = 0;
  v9 = sub_1366A(v8, a2, a4, a3, 18);
  v10 = sub_10B4E(v9, a2, a4, a3, 1);
  sub_135DD(v10, a2, a4, a3, 3, 6);
  v11 = j___delay(200);
  v12 = sub_1366A(v11, a2, a4, a3, 17);
  sub_15F84(a5, v12, a2, a3, a4, arg0_0, 1, 655360, 320, 205, 76, 74, 19, 1);
  n6_5 = 0;
  v14 = sub_1366A(v13, a2, a4, a3, 19);
  sub_15F84(a5, v14, a2, a3, a4, arg0_0, 2, 655360, 320, 205, 76, 74, 19, 1);
  n6_5 = 0;
  sub_135DD(v15, a2, a4, a3, 3, 17);
  JUMPOUT(0x3312D);
}
