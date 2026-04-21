/*
 * func-name: sub_2EB9F
 * func-address: 0x2eb9f
 * callers: 0x22e5c, 0x24336, 0x2b996, 0x2bb33, 0x2bd6c, 0x2bf83, 0x2bfd9, 0x2c217, 0x2c441, 0x2c67d, 0x2cafc, 0x2ccf4, 0x2ce1a, 0x2cf30, 0x2d80d, 0x2dfc8, 0x2e2b0, 0x2e9a8, 0x2ebe1, 0x2f4d4, 0x2f631, 0x2fb2c, 0x2fe14, 0x2ff01, 0x30e9d, 0x311e5, 0x31266, 0x31529, 0x31c49, 0x35a0d
 * callees: 0x3702f, 0x4e98d
 */

char __fastcall sub_2EB9F(__int32 a1, int a2, int a3, int a4, int arg0, int arg4, int arg8, int argC, int value)
{
  unsigned __int16 *v9; // eax

  sub_3702F(a1, a2, a3, a4, 32);
  v9 = (unsigned __int16 *)(*(_DWORD *)(arg0 + 4 * arg4 + 8) + arg0);
  return sub_4E98D((__int16 *)((char *)v9 + 9), *v9, v9[1], arg8, argC, value);
}
