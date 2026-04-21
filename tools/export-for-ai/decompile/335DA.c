/*
 * func-name: sub_335DA
 * func-address: 0x335da
 * callers: 0x15311, 0x1cff0, 0x25bf4, 0x25ebb
 * callees: 0x135dd, 0x1366a, 0x15f84, 0x205da, 0x3702f
 */

void __usercall sub_335DA(__int32 a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4@<ebx>, unsigned __int8 *a5@<edi>)
{
  int v5; // eax
  __int32 v6; // eax
  __int32 v7; // eax
  __int32 v8; // eax
  int v9; // eax
  __int32 v10; // eax

  v5 = sub_3702F(a1, a2, a4, a3, 40);
  sub_205DA(v5, a2, a4, a3);
  sub_15F84(a5, v6, a2, a3, a4, arg0_0, 0, 655360, 320, 205, 76, 74, 19, 1);
  n6_5 = 0;
  sub_135DD(v7, a2, a4, a3, 16, 4);
  v9 = sub_1366A(v8, a2, a4, a3, 54);
  sub_15F84(a5, v9, a2, a3, a4, arg0_0, 1, 655360, 320, 205, 76, 74, 19, 1);
  n6_5 = 0;
  sub_135DD(v10, a2, a4, a3, 16, 4);
  JUMPOUT(0x3310C);
}
