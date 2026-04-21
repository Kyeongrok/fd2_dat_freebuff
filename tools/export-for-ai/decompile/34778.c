/*
 * func-name: sub_34778
 * func-address: 0x34778
 * callers: 0x117e7, 0x16f55, 0x190ac, 0x1a813, 0x1aa1d, 0x1d80b, 0x1d8ba
 * callees: 0x10b4e, 0x135dd, 0x1366a, 0x15f84, 0x3702f, 0x3790a
 */

int __usercall sub_34778@<eax>(__int32 a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4@<ebx>, unsigned __int8 *a5@<edi>)
{
  int v5; // eax
  __int32 v6; // eax
  int v7; // eax
  __int32 v8; // eax
  int n8; // eax
  int n5; // edx
  int v11; // ebx

  v5 = sub_3702F(a1, a2, a4, a3, 44);
  sub_135DD(v5, a2, a4, a3, 9, 1);
  v6 = j___delay(100);
  byte_53AFA = 1;
  v7 = sub_10B4E(v6, a2, a4, a3, 3);
  byte_53AFA = 0;
  sub_1366A(v7, a2, a4, a3, 13);
  v8 = j___delay(200);
  sub_15F84(a5, v8, a2, a3, a4, arg0_0, 4, 655360, 320, 205, 76, 74, 19, 1);
  for ( n5 = 5; n5 < 11; ++n5 )
  {
    v11 = 80 * n5;
    n8 = n8_0;
    *(_BYTE *)(v11 + n8_0 + 53) = 26;
    *(_BYTE *)(v11 + n8 + 54) = 15;
  }
  return n8;
}
