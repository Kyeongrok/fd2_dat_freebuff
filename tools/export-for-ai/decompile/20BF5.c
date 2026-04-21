/*
 * func-name: sub_20BF5
 * func-address: 0x20bf5
 * callers: 0x117e7, 0x1a866, 0x1d80b, 0x1d8ba
 * callees: 0x15f84, 0x34894, 0x3702f
 */

void __usercall sub_20BF5(__int32 a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4@<ebx>, unsigned __int8 *a5@<edi>)
{
  __int32 v5; // eax

  sub_3702F(a1, a2, a4, a3, 40);
  if ( sub_34894(20) )
    n2_0 = 2;
  if ( sub_34894(0) )
    n2_0 = 1;
  v5 = sub_34894(1);
  if ( v5 )
  {
    sub_15F84(a5, v5, a2, a3, a4, arg0_0, 7, 655360, 320, 205, 76, 74, 19, 1);
    n2_0 = 1;
  }
}
