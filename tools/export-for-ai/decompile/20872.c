/*
 * func-name: sub_20872
 * func-address: 0x20872
 * callers: 0x117e7, 0x1a866, 0x1d80b, 0x1d8ba
 * callees: 0x15f84, 0x205be, 0x33499, 0x34894, 0x3702f
 */

void __usercall sub_20872(__int32 a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4@<ebx>, unsigned __int8 *a5@<edi>)
{
  int v5; // eax
  __int32 v6; // eax

  v5 = sub_3702F(a1, a2, a4, a3, 40);
  sub_205BE(v5, a2, a4, a3);
  if ( !sub_33499(18) )
  {
    v6 = sub_34894(52);
    if ( v6 )
    {
      sub_15F84(a5, v6, a2, a3, a4, arg0_0, 2, 655360, 320, 205, 76, 74, 19, 1);
      n2_0 = 1;
    }
  }
}
