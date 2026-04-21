/*
 * func-name: sub_20957
 * func-address: 0x20957
 * callers: 0x117e7, 0x1a866, 0x1d80b, 0x1d8ba
 * callees: 0x15f84, 0x205be, 0x34894, 0x3702f
 */

int __usercall sub_20957@<eax>(__int32 a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4@<ebx>, unsigned __int8 *a5@<edi>)
{
  int v5; // eax
  int n38; // ebx
  int n21; // ebx
  int n46; // ebx
  int result; // eax
  char v10; // [esp+0h] [ebp-8h]
  unsigned __int8 v11; // [esp+0h] [ebp-8h]

  v5 = sub_3702F(a1, a2, a4, a3, 48);
  v10 = 0;
  sub_205BE(v5, a2, a4, a3);
  for ( n38 = 38; n38 < 46; ++n38 )
  {
    if ( !sub_34894(n38 + 15) )
      v10 = 1;
  }
  if ( !v10 )
  {
    n2_0 = 1;
    sub_15F84(a5, 0, a2, a3, n38, arg0_0, 10, 655360, 320, 205, 76, 74, 19, 1);
  }
  if ( sub_34894(0) || sub_34894(52) )
    n2_0 = 1;
  v11 = 0;
  for ( n21 = 21; n21 < 37; ++n21 )
  {
    if ( !sub_34894(n21 + 15) )
      v11 = 1;
  }
  for ( n46 = 46; n46 < 68; ++n46 )
  {
    if ( !sub_34894(n46 + 15) )
      v11 = 1;
  }
  result = v11;
  if ( !v11 )
    n2_0 = 2;
  return result;
}
