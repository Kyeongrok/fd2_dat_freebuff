/*
 * func-name: sub_25A96
 * func-address: 0x25a96
 * callers: 0x115b6, 0x117e7, 0x13fd4, 0x164e8, 0x1741c, 0x176b4, 0x17aed, 0x17e0b, 0x1a30b, 0x1b9de, 0x1c2da, 0x1c4cc, 0x1d4f6, 0x1d51d, 0x1d6c8, 0x1db65, 0x1e98c, 0x1f894, 0x20421, 0x21548, 0x2185f, 0x21a9e, 0x21ad9, 0x21b99, 0x2211c, 0x22153, 0x22253, 0x24618, 0x26152, 0x26e38, 0x275e6, 0x27d33, 0x27f4a, 0x29bcb, 0x2af28, 0x2b996, 0x2bb33, 0x2bd6c, 0x2bfd9, 0x2c217, 0x2c441, 0x2c67d, 0x2cafc, 0x2ccf4, 0x2ce1a, 0x2cf30, 0x2d80d, 0x2dfc8, 0x2e2b0, 0x2ebe1, 0x2ff01, 0x30e9d, 0x32230, 0x32999, 0x3396a, 0x33faf
 * callees: 0x3702f, 0x39521, 0x39694, 0x39798, 0x39805, 0x39aae
 */

int __fastcall sub_25A96(__int32 a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int result; // eax
  int v8; // eax
  int v9; // [esp+0h] [ebp-Ch]
  int v10; // [esp+4h] [ebp-8h]

  result = sub_3702F(a1, a2, a3, a4, 28);
  if ( byte_53EF1 && byte_51E62 && !dword_54133 )
  {
    result = sub_39805(dword_53EE4);
    if ( a6 != -1 )
    {
      v8 = a5 + 4 * a6;
      v10 = *(_DWORD *)(v8 + 6) + a5;
      v9 = *(_DWORD *)(v8 + 10) - *(_DWORD *)(v8 + 6);
      sub_39521(dword_53EE4);
      sub_39694(dword_53EE4, v10, v9);
      sub_39AAE(dword_53EE4, a7);
      return sub_39798(dword_53EE4);
    }
  }
  return result;
}
