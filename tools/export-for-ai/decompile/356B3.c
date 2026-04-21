/*
 * func-name: sub_356B3
 * func-address: 0x356b3
 * callers: 0x117e7, 0x16f55, 0x190ac, 0x1a813, 0x1aa1d, 0x1d80b, 0x1d8ba
 * callees: 0x10b4e, 0x135dd, 0x3702f, 0x3790a
 */

int __fastcall sub_356B3(__int32 a1, int a2, int a3, int a4)
{
  int v4; // eax
  int v5; // eax
  __int32 v6; // eax
  __int32 v7; // eax
  __int32 v8; // eax

  v4 = sub_3702F(a1, a2, a3, a4, 12);
  v5 = sub_10B4E(v4, a2, a3, a4, n999);
  sub_135DD(v5, a2, a3, a4, 0, 4);
  v6 = j___delay(400);
  sub_135DD(v6, a2, a3, a4, 0, 22);
  v7 = j___delay(400);
  sub_135DD(v7, a2, a3, a4, 26, 24);
  v8 = j___delay(400);
  sub_135DD(v8, a2, a3, a4, 26, 2);
  return j___delay(400);
}
