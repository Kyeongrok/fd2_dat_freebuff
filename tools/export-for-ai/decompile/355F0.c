/*
 * func-name: sub_355F0
 * func-address: 0x355f0
 * callers: 0x117e7, 0x16f55, 0x190ac, 0x1a813, 0x1aa1d, 0x1d80b, 0x1d8ba
 * callees: 0x1aa1d, 0x3702f
 */

void __fastcall sub_355F0(__int32 a1, int a2, int a3, int a4, unsigned __int8 *a5)
{
  _DWORD v5[3]; // [esp-Ch] [ebp-Ch] BYREF

  sub_3702F(a1, a2, a3, a4, 52);
  LOWORD(v5[0]) = unk_52748;
  BYTE2(v5[0]) = unk_5274A;
  sub_1AA1D((__int32)v5, a2, a3, a4, a5, 1, (int)v5);
  v5[2] = 1;
  v5[1] = 19;
  v5[0] = 74;
  JUMPOUT(0x3530D);
}
