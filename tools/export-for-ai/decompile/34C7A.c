/*
 * func-name: sub_34C7A
 * func-address: 0x34c7a
 * callers: 0x117e7, 0x16f55, 0x190ac, 0x1a813, 0x1aa1d, 0x1d80b, 0x1d8ba
 * callees: 0x10b4e, 0x135dd, 0x1366a, 0x15f84, 0x3702f
 */

int __usercall sub_34C7A@<eax>(__int32 a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4@<ebx>, unsigned __int8 *a5@<edi>)
{
  int result; // eax
  int v6; // eax
  __int32 v7; // eax
  int v8; // eax

  sub_3702F(a1, a2, a4, a3, 40);
  result = *(unsigned __int8 *)(dword_53AD5 + 16);
  if ( result == 1 )
  {
    byte_53AFA = 1;
    v6 = sub_10B4E(1, a2, a4, a3, 2);
    byte_53AFA = 0;
    sub_135DD(v6, a2, a4, a3, 16, 10);
    v8 = sub_1366A(v7, a2, a4, a3, 30);
    sub_15F84(a5, v8, a2, a3, a4, arg0_0, 2, 655360, 320, 205, 76, 74, 19, 1);
    result = dword_53AD5;
    *(_BYTE *)(dword_53AD5 + 17) = 1;
  }
  return result;
}
