/*
 * func-name: sub_34A6C
 * func-address: 0x34a6c
 * callers: 0x117e7, 0x16f55, 0x190ac, 0x1a813, 0x1aa1d, 0x1d80b, 0x1d8ba
 * callees: 0x15f84, 0x344f2, 0x34894, 0x3702f
 */

void __usercall sub_34A6C(__int32 a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4@<ebx>, unsigned __int8 *a5@<edi>)
{
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int n7; // ebx
  char v9; // [esp+0h] [ebp-8h]

  v5 = sub_3702F(a1, a2, a4, a3, 48);
  v9 = 0;
  v6 = sub_344F2(v5, a2, a4, a3, 7, 36, 7);
  sub_15F84(a5, v6, a2, a3, a4, arg0_0, 8, 655360, 320, 205, 76, 74, 19, 1);
  for ( n7 = 7; n7 < 37; ++n7 )
  {
    v7 = sub_34894(v7, a2, n7, a3, n7);
    if ( !v7 )
      v9 = 1;
  }
  if ( v9 == 1 )
    sub_15F84(a5, 1, a2, a3, n7, arg0_0, 11, 655360, 320, 205, 76, 74, 19, 1);
}
