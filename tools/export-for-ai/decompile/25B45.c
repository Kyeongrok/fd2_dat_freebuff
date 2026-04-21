/*
 * func-name: sub_25B45
 * func-address: 0x25b45
 * callers: 0x13a9f, 0x190ac, 0x1f894, 0x2af28, 0x2bfd9, 0x2c441, 0x2c67d, 0x2cafc, 0x2ccf4, 0x2ce1a, 0x2d80d
 * callees: 0x3702f, 0x39521, 0x39694, 0x39798, 0x39805, 0x39aae
 */

int __fastcall sub_25B45(__int32 a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int result; // eax
  int v8; // eax
  int v9; // [esp+0h] [ebp-Ch]
  int v10; // [esp+4h] [ebp-8h]

  result = sub_3702F(a1, a2, a3, a4, 28);
  if ( byte_53EF1 && byte_51E62 && !dword_54133 )
  {
    result = sub_39805(dword_53EE8);
    if ( a6 != -1 )
    {
      v8 = a5 + 4 * a6;
      v10 = *(_DWORD *)(v8 + 6) + a5;
      v9 = *(_DWORD *)(v8 + 10) - *(_DWORD *)(v8 + 6);
      sub_39521(dword_53EE8);
      sub_39694(dword_53EE8, v10, v9);
      sub_39AAE(dword_53EE8, a7);
      return sub_39798(dword_53EE8);
    }
  }
  return result;
}
