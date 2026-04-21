/*
 * func-name: sub_34738
 * func-address: 0x34738
 * callers: 0x117e7, 0x16f55, 0x190ac, 0x1a813, 0x1aa1d, 0x1d80b, 0x1d8ba
 * callees: 0x15f84, 0x3702f
 */

void __usercall sub_34738(__int32 a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4@<ebx>, unsigned __int8 *a5@<edi>)
{
  __int32 v5; // eax

  sub_3702F(a1, a2, a4, a3, 40);
  v5 = n8_0 + 1040;
  *(_BYTE *)(n8_0 + 1046) = 1;
  sub_15F84(a5, v5, a2, a3, a4, arg0_0, 7, 655360, 320, 205, 76, 74, 19, 1);
}
