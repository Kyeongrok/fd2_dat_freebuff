/*
 * func-name: sub_2B439
 * func-address: 0x2b439
 * callers: 0x2af28
 * callees: 0x15f84, 0x16559, 0x16c57, 0x1956b, 0x26996, 0x3702f
 */

int __usercall sub_2B439@<eax>(
        __int32 a1@<eax>,
        int a2@<edx>,
        int a3@<ecx>,
        int n18_1@<ebx>,
        unsigned __int8 *a5@<edi>,
        int n15,
        unsigned __int8 n18)
{
  int n15_1; // edx
  __int32 v8; // eax
  int v9; // eax
  __int32 v10; // eax
  unsigned __int8 v12; // [esp+0h] [ebp-8h]

  sub_3702F(a1, a2, n18_1, a3, 48);
  v12 = 0;
  for ( n15_1 = 0; n15_1 < n15; ++n15_1 )
  {
    n18_1 = *(unsigned __int8 *)(80 * (n15_1 + 1) + n8_0 + 8);
    if ( n18_1 == n18 )
      v12 = 1;
  }
  if ( !v12 )
  {
    sub_1956B(0, n15_1, n18_1, n15, 75);
    dword_53AD9 = n18 + 1;
    sub_15F84(a5, n18 + 1, n15_1, n15, n18_1, arg0, 657, 693535, 320, 205, 76, 74, 19, 1);
    v9 = sub_16559(v8, n15_1, n18_1, n15, 0);
    dword_53A51 = 1;
    sub_16C57(v9, n15_1, n18_1, n15, 0);
    dword_53A51 = 0;
    sub_26996(v10, n15_1, n18_1, n15);
  }
  return v12;
}
