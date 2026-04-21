/*
 * func-name: sub_362E8
 * func-address: 0x362e8
 * callers: 0x117e7, 0x16f55, 0x190ac, 0x1a813, 0x1aa1d, 0x1d80b, 0x1d8ba
 * callees: 0x10b4e, 0x135dd, 0x15f84, 0x33f78, 0x344f2, 0x3702f
 */

void __usercall sub_362E8(__int32 a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4@<ebx>, unsigned __int8 *a5@<edi>)
{
  int v5; // eax
  __int32 v6; // eax
  int v7; // edx
  __int32 n4; // eax

  v5 = sub_3702F(a1, a2, a4, a3, 40);
  sub_135DD(v5, a2, a4, a3, 16, 1);
  sub_15F84(
    a5,
    *(unsigned __int8 *)(n8_1 + 16) + 2,
    a2,
    a3,
    a4,
    arg0_0,
    *(unsigned __int8 *)(n8_1 + 16) + 2,
    655360,
    320,
    205,
    76,
    74,
    19,
    1);
  n6_5 = 0;
  sub_135DD(v6, a2, a4, a3, 16, 14);
  v7 = 24 - *(unsigned __int8 *)(n8_1 + 16);
  sub_33F78(v7, 22, 18);
  n4 = *(unsigned __int8 *)(n8_1 + 16);
  if ( n4 != 4 )
  {
    sub_10B4E(n4, v7, a4, a3, *(unsigned __int8 *)(n8_1 + 16));
    sub_344F2(
      *(unsigned __int8 *)(n8_1 + 16),
      24 - *(unsigned __int8 *)(n8_1 + 16),
      a4,
      a3,
      24 - *(unsigned __int8 *)(n8_1 + 16),
      24 - *(unsigned __int8 *)(n8_1 + 16),
      0);
    JUMPOUT(0x214F8);
  }
  sub_344F2(4, v7, a4, a3, 20, 20, 11);
  JUMPOUT(0x214E9);
}
