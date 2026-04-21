/*
 * func-name: sub_352CA
 * func-address: 0x352ca
 * callers: 0x117e7, 0x16f55, 0x190ac, 0x1a813, 0x1aa1d, 0x1d80b, 0x1d8ba
 * callees: 0x15f84, 0x1aa1d, 0x3702f
 */

void __fastcall sub_352CA(__int32 a1, int a2, int a3, int a4, unsigned __int8 *a5)
{
  __int32 v5; // eax
  __int16 v6; // [esp-Ch] [ebp-Ch] BYREF
  char v7; // [esp-Ah] [ebp-Ah]
  unsigned __int8 v8; // [esp-9h] [ebp-9h] BYREF

  sub_3702F(a1, a2, a3, a4, 52);
  v6 = unk_52742;
  v7 = unk_52744;
  sub_1AA1D((__int32)&v6, a2, a3, a4, a5, 1, (int)&v6);
  sub_15F84(&v8, v5, a2, a4, a3, arg0_0, 11, 655360, 320, 205, 76, 74, 19, 1);
}
