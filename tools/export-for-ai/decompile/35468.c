/*
 * func-name: sub_35468
 * func-address: 0x35468
 * callers: 0x117e7, 0x16f55, 0x190ac, 0x1a813, 0x1aa1d, 0x1d80b, 0x1d8ba
 * callees: 0x10b4e, 0x135dd, 0x15f84, 0x17aa9, 0x3702f
 */

void __usercall sub_35468(__int32 a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4@<ebx>, unsigned __int8 *a5@<edi>)
{
  int v5; // edx
  int v6; // eax
  int v7; // eax
  __int32 v8; // eax
  int v9; // eax
  __int32 v10; // eax
  int v11; // eax
  __int32 v12; // eax
  int v13; // eax
  __int32 v14; // eax
  int v15; // eax

  sub_3702F(a1, a2, a4, a3, 40);
  v5 = n999 >> 31;
  v6 = sub_10B4E(n999 / 2, n999 >> 31, a4, a3, n999 / 2);
  v7 = sub_17AA9(v6, v5, a4, a3, 1);
  sub_135DD(v7, v5, a4, a3, 0, 0);
  v9 = sub_17AA9(v8, v5, a4, a3, 8);
  sub_135DD(v9, v5, a4, a3, 28, 0);
  v11 = sub_17AA9(v10, v5, a4, a3, 8);
  sub_135DD(v11, v5, a4, a3, 28, 32);
  v13 = sub_17AA9(v12, v5, a4, a3, 8);
  sub_135DD(v13, v5, a4, a3, 0, 32);
  v15 = sub_17AA9(v14, v5, a4, a3, 8);
  if ( n999 == 2 )
    sub_15F84(a5, v15, v5, a3, a4, arg0_0, 3, 655360, 320, 205, 76, 74, 19, 1);
}
