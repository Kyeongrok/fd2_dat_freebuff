/*
 * func-name: sub_35191
 * func-address: 0x35191
 * callers: 0x117e7, 0x16f55, 0x190ac, 0x1a813, 0x1aa1d, 0x1d80b, 0x1d8ba
 * callees: 0x15f84, 0x344f2, 0x3702f
 */

__int32 __usercall sub_35191@<eax>(
        __int32 a1@<eax>,
        int a2@<edx>,
        int a3@<ecx>,
        int a4@<ebx>,
        unsigned __int8 *a5@<edi>)
{
  __int32 n8; // eax
  int v6; // eax

  sub_3702F(a1, a2, a4, a3, 40);
  n8 = *(unsigned __int8 *)(n8_1 + 16);
  if ( !*(_BYTE *)(n8_1 + 16) )
  {
    v6 = sub_344F2(n8, a2, a4, a3, 16, 71, *(_BYTE *)(n8_1 + 16));
    sub_15F84(a5, v6, a2, a3, a4, arg0_0, 1, 655360, 320, 205, 76, 74, 19, 1);
    n8 = n8_1;
    *(_BYTE *)(n8_1 + 16) = 1;
  }
  return n8;
}
