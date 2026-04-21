/*
 * func-name: sub_33DBA
 * func-address: 0x33dba
 * callers: 0x15311, 0x1cff0, 0x25bf4, 0x25ebb
 * callees: 0x135dd, 0x1366a, 0x15f84, 0x205da, 0x35b78, 0x3702f
 */

void __usercall sub_33DBA(__int32 a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4@<ebx>, unsigned __int8 *a5@<edi>)
{
  int v5; // eax
  __int32 v6; // eax
  __int32 v7; // eax
  int v8; // eax

  v5 = sub_3702F(a1, a2, a4, a3, 40);
  sub_205DA(v5, a2, a4, a3);
  n6_5 = 0;
  sub_135DD(v6, a2, a4, a3, 9, 56);
  v8 = sub_1366A(v7, a2, a4, a3, 86);
  sub_15F84(a5, v8, a2, a3, a4, arg0_0, 7, 655360, 320, 205, 76, 74, 19, 1);
  sub_35B78(9, 19, 8);
  JUMPOUT(0x3312D);
}
