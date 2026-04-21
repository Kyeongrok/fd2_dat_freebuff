/*
 * func-name: sub_3553F
 * func-address: 0x3553f
 * callers: 0x117e7, 0x16f55, 0x190ac, 0x1a813, 0x1aa1d, 0x1d80b, 0x1d8ba
 * callees: 0x10b4e, 0x135dd, 0x17aa9, 0x3702f
 */

void __fastcall sub_3553F(__int32 a1, int a2, int a3, int a4)
{
  int v4; // edx
  int v5; // eax
  __int32 v6; // eax
  int v7; // eax
  __int32 v8; // eax

  sub_3702F(a1, a2, a3, a4, 40);
  v4 = n999 >> 31;
  v5 = sub_10B4E(n999 / 2, n999 >> 31, a3, a4, n999 / 2);
  sub_135DD(v5, v4, a3, a4, 32, 35);
  v7 = sub_17AA9(v6, v4, a3, a4, 8);
  sub_135DD(v7, v4, a3, a4, 0, 35);
  sub_17AA9(v8, v4, a3, a4, 8);
  if ( n999 == 3 )
    JUMPOUT(0x35D76);
  JUMPOUT(0x35D84);
}
