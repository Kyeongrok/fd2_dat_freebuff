/*
 * func-name: sub_34D2F
 * func-address: 0x34d2f
 * callers: 0x117e7, 0x16f55, 0x190ac, 0x1a813, 0x1aa1d, 0x1d80b, 0x1d8ba
 * callees: 0x10b4e, 0x135dd, 0x3702f, 0x3790a
 */

void __fastcall sub_34D2F(__int32 a1, int a2, int a3, int a4)
{
  int v4; // eax
  __int32 v5; // eax

  v4 = sub_3702F(a1, a2, a3, a4, 12);
  sub_135DD(v4, a2, a3, a4, 8, 2);
  v5 = j___delay(100);
  sub_10B4E(v5, a2, a3, a4, n999);
  JUMPOUT(0x35727);
}
