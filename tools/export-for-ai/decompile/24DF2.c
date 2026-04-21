/*
 * func-name: sub_24DF2
 * func-address: 0x24df2
 * callers: 0x15311, 0x1cff0, 0x25bf4
 * callees: 0x10b4e, 0x112a5, 0x135dd, 0x1366a, 0x15f84, 0x3702f
 */

void __usercall sub_24DF2(__int32 a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4@<ebx>, unsigned __int8 *a5@<edi>)
{
  int v5; // eax
  __int32 v6; // eax
  __int32 v7; // eax
  int v8; // eax
  int v9; // eax
  __int32 v10; // eax
  int v11; // eax

  v5 = sub_3702F(a1, a2, a4, a3, 40);
  sub_15F84(a5, v5, a2, a3, a4, arg0_0, 6, 655360, 320, 205, 76, 74, 19, 1);
  sub_135DD(v6, a2, a4, a3, 4, 16);
  v8 = sub_10B4E(v7, a2, a4, a3, 2);
  v9 = sub_1366A(v8, a2, a4, a3, 75);
  sub_15F84(a5, v9, a2, a3, a4, arg0_0, 7, 655360, 320, 205, 76, 74, 19, 1);
  v11 = sub_112A5(v10, a2, a4, a3, 0x1Bu);
  sub_112A5(v11, a2, a4, a3, 0x1Du);
  JUMPOUT(0x237C8);
}
