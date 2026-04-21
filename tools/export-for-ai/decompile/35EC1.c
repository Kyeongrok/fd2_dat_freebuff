/*
 * func-name: sub_35EC1
 * func-address: 0x35ec1
 * callers: 0x117e7, 0x16f55, 0x190ac, 0x1a813, 0x1aa1d, 0x1d80b, 0x1d8ba
 * callees: 0x15f84, 0x35f10, 0x3702f
 */

int __usercall sub_35EC1@<eax>(__int32 a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4@<ebx>, unsigned __int8 *a5@<edi>)
{
  int n8; // eax

  sub_3702F(a1, a2, a4, a3, 40);
  if ( *(_BYTE *)(n8_1 + 19) )
  {
    sub_15F84(a5, n8_1, a2, a3, a4, arg0_0, 2, 655360, 320, 205, 76, 74, 19, 1);
    sub_35F10(20);
  }
  n8 = n8_1;
  ++*(_BYTE *)(n8_1 + 19);
  return n8;
}
