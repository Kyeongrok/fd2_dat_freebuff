/*
 * func-name: sub_3396A
 * func-address: 0x3396a
 * callers: 0x15311, 0x1cff0, 0x25bf4, 0x25ebb
 * callees: 0x111ba, 0x12d7b, 0x135dd, 0x15f84, 0x205da, 0x24b4d, 0x25a96, 0x3702f, 0x3790a, 0x37910
 */

void __usercall sub_3396A(__int32 a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4@<ebx>, unsigned __int8 *a5@<edi>)
{
  int v5; // eax
  __int32 v6; // eax
  __int32 v7; // eax
  __int32 v8; // eax
  int v9; // eax
  __int32 v10; // eax
  int v11; // eax
  __int32 v12; // eax
  int v13; // eax
  __int32 v14; // eax
  int v15; // eax
  int v16; // eax
  __int32 v17; // eax
  __int32 v18; // eax

  v5 = sub_3702F(a1, a2, a4, a3, 40);
  sub_205DA(v5, a2, a4, a3);
  FDOTHER_DAT__0 = 0;
  FDOTHER_DAT__0 = (int)sub_111BA(v6, a2, a4, a3, (int)aFdotherDat, 0, 88);// "FDOTHER.DAT"
  sub_135DD(FDOTHER_DAT__0, a2, a4, a3, 5, 0);
  sub_15F84(a5, v7, a2, a3, a4, arg0_0, 1, 655360, 320, 205, 76, 74, 19, 1);
  v8 = memset(n655360_0, 0, 153216);
  v9 = sub_25A96(v8, a2, a4, a3, FDOTHER_DAT__0, 1, 1);
  sub_24B4D(v9, a2, a4, a3, 20);
  v10 = j___delay(600);
  v11 = sub_25A96(v10, a2, a4, a3, FDOTHER_DAT__0, 1, 1);
  sub_24B4D(v11, a2, a4, a3, 20);
  v12 = j___delay(600);
  v13 = sub_25A96(v12, a2, a4, a3, FDOTHER_DAT__0, 1, 1);
  sub_24B4D(v13, a2, a4, a3, 20);
  v14 = j___delay(600);
  v15 = sub_25A96(v14, a2, a4, a3, FDOTHER_DAT__0, 1, 1);
  v16 = sub_24B4D(v15, a2, a4, a3, 60);
  sub_15F84(a5, v16, a2, a3, a4, arg0_0, 2, 655360, 320, 205, 76, 74, 19, 1);
  sub_12D7B(v17, a2, a4, a3, 0);
  sub_1D4F6(v18, a2, a4, a3);
}
