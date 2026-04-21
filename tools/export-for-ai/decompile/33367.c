/*
 * func-name: sub_33367
 * func-address: 0x33367
 * callers: 0x15311, 0x1cff0, 0x25bf4, 0x25ebb
 * callees: 0x10b4e, 0x135dd, 0x1366a, 0x15f84, 0x205da, 0x3702f
 */

void __usercall sub_33367(__int32 a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4@<ebx>, unsigned __int8 *a5@<edi>)
{
  int v5; // eax
  __int32 v6; // eax
  __int32 v7; // eax
  __int32 v8; // eax
  int v9; // eax
  int v10; // eax

  v5 = sub_3702F(a1, a2, a4, a3, 40);
  sub_205DA(v5, a2, a4, a3);
  sub_15F84(a5, v6, a2, a3, a4, arg0_0, 0, 655360, 320, 205, 76, 74, 19, 1);
  n6_5 = 0;
  sub_135DD(v7, a2, a4, a3, 10, 7);
  v9 = sub_10B4E(v8, a2, a4, a3, 1);
  v10 = sub_1366A(v9, a2, a4, a3, 38);
  sub_15F84(a5, v10, a2, a3, a4, arg0_0, 1, 655360, 320, 205, 76, 74, 19, 1);
  JUMPOUT(0x3310C);
}
