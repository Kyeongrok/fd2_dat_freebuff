/*
 * func-name: sub_33169
 * func-address: 0x33169
 * callers: 0x15311, 0x1cff0, 0x25bf4, 0x25ebb
 * callees: 0x10b4e, 0x135dd, 0x1366a, 0x15f84, 0x205da, 0x3702f
 */

void __usercall sub_33169(__int32 a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4@<ebx>, unsigned __int8 *a5@<edi>)
{
  int v5; // eax
  __int32 v6; // eax
  __int32 v7; // eax
  int v8; // eax
  __int32 v9; // eax
  int v10; // eax
  __int32 v11; // eax
  int v12; // eax

  v5 = sub_3702F(a1, a2, a4, a3, 40);
  sub_205DA(v5, a2, a4, a3);
  sub_15F84(a5, v6, a2, a3, a4, arg0_0, 0, 655360, 320, 205, 76, 74, 19, 1);
  n6_5 = 0;
  byte_53AFA = 1;
  v8 = sub_10B4E(v7, a2, a4, a3, 1);
  byte_53AFA = 0;
  sub_135DD(v8, a2, a4, a3, 8, 1);
  v10 = sub_1366A(v9, a2, a4, a3, 28);
  sub_135DD(v10, a2, a4, a3, 8, 0);
  v12 = sub_1366A(v11, a2, a4, a3, 29);
  sub_15F84(a5, v12, a2, a3, a4, arg0_0, 1, 655360, 320, 205, 76, 74, 19, 1);
  JUMPOUT(0x33140);
}
