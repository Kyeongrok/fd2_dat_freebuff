/*
 * func-name: sub_34B9A
 * func-address: 0x34b9a
 * callers: 0x117e7, 0x16f55, 0x190ac, 0x1a813, 0x1aa1d, 0x1d80b, 0x1d8ba
 * callees: 0x10b4e, 0x135dd, 0x1366a, 0x15f84, 0x32975, 0x344f2, 0x3702f
 */

void __usercall sub_34B9A(__int32 a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4@<ebx>, unsigned __int8 *a5@<edi>)
{
  int v5; // eax
  int v6; // eax
  __int32 v7; // eax
  int v8; // eax
  __int32 v9; // eax
  int v10; // eax
  __int32 v11; // eax
  __int32 v12; // eax
  int v13; // eax

  v5 = sub_3702F(a1, a2, a4, a3, 40);
  v6 = sub_344F2(v5, a2, a4, a3, 8, 28, 0);
  sub_15F84(a5, v6, a2, a3, a4, arg0_0, 4, 655360, 320, 205, 76, 74, 19, 1);
  if ( n999 < 15 )
  {
    v8 = sub_10B4E(v7, a2, a4, a3, 2);
    sub_135DD(v8, a2, a4, a3, 5, 17);
    v10 = sub_1366A(v9, a2, a4, a3, 25);
    sub_15F84(a5, v10, a2, a3, a4, arg0_0, 5, 655360, 320, 205, 76, 74, 19, 1);
    sub_135DD(v11, a2, a4, a3, 5, 17);
    v13 = sub_1366A(v12, a2, a4, a3, 26);
    sub_32975(v13, a2, a4, a3, 33);
    JUMPOUT(0x35F6E);
  }
  JUMPOUT(0x35F78);
}
