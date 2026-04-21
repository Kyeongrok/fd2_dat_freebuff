/*
 * func-name: sub_351E6
 * func-address: 0x351e6
 * callers: 0x117e7, 0x16f55, 0x190ac, 0x1a813, 0x1aa1d, 0x1d80b, 0x1d8ba
 * callees: 0x15f84, 0x344f2, 0x3702f
 */

int __usercall sub_351E6@<eax>(__int32 a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4@<ebx>, unsigned __int8 *a5@<edi>)
{
  int v5; // eax
  __int32 n8; // eax
  int n64; // edx
  int v8; // eax

  v5 = sub_3702F(a1, a2, a4, a3, 44);
  sub_15F84(a5, v5, a2, a3, a4, arg0_0, 6, 655360, 320, 205, 76, 74, 19, 1);
  for ( n64 = 64; n64 <= 73; ++n64 )
  {
    a4 = 80 * n64;
    n8 = n8_0;
    *(_BYTE *)(80 * n64 + n8_0 + 53) = 0;
  }
  v8 = sub_344F2(n8, n64, a4, a3, 64, 73, 3);
  return sub_344F2(v8, n64, a4, a3, 35, 49, 0);
}
