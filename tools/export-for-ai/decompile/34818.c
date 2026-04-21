/*
 * func-name: sub_34818
 * func-address: 0x34818
 * callers: 0x117e7, 0x16f55, 0x190ac, 0x1a813, 0x1aa1d, 0x1d80b, 0x1d8ba
 * callees: 0x10b4e, 0x135dd, 0x15f84, 0x34894, 0x3702f, 0x3790a
 */

void __usercall sub_34818(__int32 a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4@<ebx>, unsigned __int8 *a5@<edi>)
{
  int v5; // eax
  __int32 v6; // eax
  __int32 v7; // eax

  sub_3702F(a1, a2, a4, a3, 40);
  if ( !sub_34894(6) )
  {
    v5 = sub_10B4E(0, a2, a4, a3, 2);
    sub_135DD(v5, a2, a4, a3, 3, 0);
    v6 = j___delay(800);
    sub_135DD(v6, a2, a4, a3, 3, 17);
    v7 = j___delay(200);
    sub_15F84(a5, v7, a2, a3, a4, arg0_0, 4, 655360, 320, 205, 76, 74, 19, 1);
  }
}
