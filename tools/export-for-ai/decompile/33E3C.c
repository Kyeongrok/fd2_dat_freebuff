/*
 * func-name: sub_33E3C
 * func-address: 0x33e3c
 * callers: 0x15311, 0x1cff0, 0x25bf4, 0x25ebb
 * callees: 0x135dd, 0x1366a, 0x15f84, 0x205da, 0x33f78, 0x361b0, 0x3702f
 */

void __usercall sub_33E3C(__int32 a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4@<ebx>, unsigned __int8 *a5@<edi>)
{
  int v5; // eax
  __int32 v6; // eax
  int v7; // eax
  __int32 v8; // eax
  __int32 v9; // eax
  __int32 v10; // eax
  __int64 v11; // rax

  v5 = sub_3702F(a1, a2, a4, a3, 40);
  sub_205DA(v5, a2, a4, a3);
  v7 = sub_1366A(v6, a2, a4, a3, 87);
  sub_135DD(v7, a2, a4, a3, 16, 19);
  sub_15F84(a5, v8, a2, a3, a4, arg0_0, 0, 655360, 320, 205, 76, 74, 19, 1);
  n6_5 = 0;
  sub_135DD(v9, a2, a4, a3, 16, 1);
  sub_33F78(21, 21, 5);
  sub_33F78(22, 23, 5);
  sub_33F78(23, 20, 5);
  v10 = sub_33F78(24, 24, 5);
  sub_15F84(a5, v10, a2, a3, a4, arg0_0, 1, 655360, 320, 205, 76, 74, 19, 1);
  v11 = sub_361B0();
  sub_15F84(a5, v11, SHIDWORD(v11), a3, a4, arg0_0, 2, 655360, 320, 205, 76, 74, 19, 1);
  n6_5 = 0;
  sub_135DD(v11, SHIDWORD(v11), a4, a3, 16, 14);
  sub_33F78(24, 22, 18);
  sub_33F78(25, 21, 18);
  sub_33F78(26, 23, 18);
  n6_5 = 1;
  JUMPOUT(0x3313B);
}
