/*
 * func-name: sub_34B2F
 * func-address: 0x34b2f
 * callers: 0x117e7, 0x16f55, 0x190ac, 0x1a813, 0x1aa1d, 0x1d80b, 0x1d8ba
 * callees: 0x15f84, 0x34894, 0x3702f
 */

void __usercall sub_34B2F(__int32 a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4@<ebx>, unsigned __int8 *a5@<edi>)
{
  int v5; // eax

  v5 = sub_3702F(a1, a2, a4, a3, 40);
  if ( !sub_34894(v5, a2, a4, a3, 8) )
    sub_15F84(a5, 0, a2, a3, a4, arg0_0, 2, 655360, 320, 205, 76, 74, 19, 1);
}
