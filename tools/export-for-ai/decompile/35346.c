/*
 * func-name: sub_35346
 * func-address: 0x35346
 * callers: 0x117e7, 0x16f55, 0x190ac, 0x1a813, 0x1aa1d, 0x1d80b, 0x1d8ba
 * callees: 0x15f84, 0x1aa1d, 0x3702f
 */

void __fastcall sub_35346(__int32 a1, int a2, int a3, int a4, unsigned __int8 *a5)
{
  int v5; // eax
  _DWORD v6[3]; // [esp-Ch] [ebp-Ch] BYREF

  v5 = sub_3702F(a1, a2, a3, a4, 52);
  LOWORD(v6[0]) = unk_52745;
  BYTE2(v6[0]) = unk_52747;
  sub_15F84((unsigned __int8 *)v6 + 3, v5, a2, a4, a3, arg0_0, 3, 655360, 320, 205, 76, 74, 19, 1);
  sub_1AA1D((__int32)v6, a2, a3, a4, a5, 1, (int)v6);
  v6[2] = 1;
  v6[1] = 19;
  v6[0] = 74;
  JUMPOUT(0x3530D);
}
