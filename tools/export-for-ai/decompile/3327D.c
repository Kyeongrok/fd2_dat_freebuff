/*
 * func-name: sub_3327D
 * func-address: 0x3327d
 * callers: 0x15311, 0x1cff0, 0x25bf4, 0x25ebb
 * callees: 0x12d7b, 0x134e4, 0x135dd, 0x1366a, 0x15f84, 0x205da, 0x3702f
 */

int __usercall sub_3327D@<eax>(__int32 a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4@<ebx>, unsigned __int8 *a5@<edi>)
{
  int v5; // eax
  __int32 n8; // eax
  int n11; // edx
  __int32 v8; // eax
  __int32 v9; // eax
  int v10; // eax
  __int32 v11; // eax
  __int32 v12; // eax

  v5 = sub_3702F(a1, a2, a4, a3, 44);
  sub_205DA(v5, a2, a4, a3);
  for ( n11 = 0; n11 < 11; ++n11 )
  {
    a4 = 80 * n11;
    n8 = n8_0;
    *(_BYTE *)(80 * n11 + n8_0 + 3) = 2;
  }
  sub_135DD(n8, n11, a4, a3, 6, 0);
  sub_15F84(a5, v8, n11, a3, a4, arg0_0, 0, 655360, 320, 205, 76, 74, 19, 1);
  n6_5 = 0;
  v10 = sub_1366A(v9, n11, a4, a3, 35);
  sub_15F84(a5, v10, n11, a3, a4, arg0_0, 1, 655360, 320, 205, 76, 74, 19, 1);
  sub_12D7B(v11, n11, a4, a3, 0);
  return sub_134E4(v12, n11, a4, a3);
}
