/*
 * func-name: sub_20765
 * func-address: 0x20765
 * callers: 0x117e7, 0x1a866, 0x1d80b, 0x1d8ba
 * callees: 0x15f84, 0x205be, 0x34894, 0x3702f
 */

void __usercall sub_20765(__int32 a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4@<ebx>, unsigned __int8 *a5@<edi>)
{
  int v5; // eax
  int n12; // ebx
  __int32 v7; // eax
  char v8; // [esp+0h] [ebp-8h]

  v5 = sub_3702F(a1, a2, a4, a3, 48);
  v8 = 0;
  sub_205BE(v5, a2, a4, a3);
  for ( n12 = 0; n12 < 12; ++n12 )
  {
    if ( !sub_34894(n12 + 15) )
      v8 = 1;
  }
  if ( !v8 )
  {
    n2_0 = 1;
    sub_15F84(a5, 0, a2, a3, n12, arg0_0, 10, 655360, 320, 205, 76, 74, 19, 1);
  }
  if ( n999 > 5 )
  {
    v7 = sub_34894(59);
    if ( v7 )
    {
      n2_0 = 1;
      sub_15F84(a5, v7, a2, a3, n12, arg0_0, 2, 655360, 320, 205, 76, 74, 19, 1);
    }
  }
}
