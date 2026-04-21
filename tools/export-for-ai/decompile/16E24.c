/*
 * func-name: sub_16E24
 * func-address: 0x16e24
 * callers: 0x15f84, 0x1e529
 * callees: 0x3702f, 0x3771c, 0x37910
 */

int __fastcall sub_16E24(__int32 a1, int a2, int a3, int a4)
{
  int result; // eax
  int n658255; // esi
  int n5; // edi
  int n72; // ebx
  int n72_1; // ebx

  result = sub_3702F(a1, a2, a3, a4, 28);
  if ( n1832 == 1832 || n1832 == 36887 )
  {
    if ( n1832 == 1832 )
      n658255 = 658255;
    else
      n658255 = 693535;
    for ( n5 = 0; n5 < 5; ++n5 )
    {
      for ( n72 = 0; n72 < 72; ++n72 )
        memmove(n658255 + 320 * n72 - 1, n658255 + 320 * (n72 + 3) - 1, 208);
      memset(n658255 + 23040, 74, 208);
    }
    for ( n72_1 = 0; n72_1 < 72; ++n72_1 )
      memmove(n658255 + 320 * n72_1 - 1, n658255 + 320 * (n72_1 + 4) - 1, 208);
    return memset(n658255 + 23040, 74, 208);
  }
  return result;
}
