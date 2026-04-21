/*
 * func-name: sub_27F4A
 * func-address: 0x27f4a
 * callers: 0x2872b
 * callees: 0x1974c, 0x25a96, 0x26eda, 0x27816, 0x278e7, 0x2825b, 0x3702f, 0x3706e, 0x3771c, 0x4ebff
 */

void __fastcall sub_27F4A(__int32 a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // esi
  __int64 v8; // rax
  int n5; // ebx

  sub_3702F(a1, a2, a3, a4, 40);
  v7 = 0;
  dword_53C5B = malloc(64000);
  dword_53C5F = malloc(64000);
  n30 = malloc(64000);
  memmove(dword_53C5F, 655360, 64000);
  v8 = memmove(n30, dword_53C5F, 64000);
  n3_6 = 0;
  n3_3 = 0;
  sub_4EBFF(n30 + 35845, *(_DWORD *)(dword_53F66 + 70) + dword_53F66, 320);
  LODWORD(v8) = sub_2825B(a5, a6, a7, n3_3, n30);
  for ( n5 = 5; n5 >= 0; --n5 )
    sub_1974C(13 * n5 + 112, SHIDWORD(v8), n5, a4, 13 * n5 + 112, dword_53C5B, n30);
  while ( 1 )
  {
    LODWORD(v8) = sub_26EDA(v8, SHIDWORD(v8), n5, a4, 2);
    switch ( (_DWORD)v8 )
    {
      case 0x50:
        LODWORD(v8) = a5 - 1;
        if ( a5 - 1 != n3_3 )
        {
          sub_25A96(v8, SHIDWORD(v8), n5, a4, FDOTHER_DAT__1, 0, 1);
          LODWORD(v8) = ++n3_3 - n3_6;
          if ( n3_3 - n3_6 >= 3 )
          {
            ++n3_6;
            sub_27816(v8, SHIDWORD(v8), n5, a4);
          }
LABEL_8:
          LODWORD(v8) = sub_2825B(a5, a6, a7, n3_3, 655360);
        }
        break;
      case 0x48:
        if ( !n3_3 )
          break;
        sub_25A96(72, SHIDWORD(v8), n5, a4, FDOTHER_DAT__1, 0, 1);
        if ( --n3_3 < n3_6 )
        {
          --n3_6;
          sub_278E7(n3_3, SHIDWORD(v8), n5, a4);
        }
        goto LABEL_8;
      case 0x1C:
      case 0x39:
        v7 = 1;
        break;
      case 1:
        v7 = -1;
        break;
    }
    if ( v7 )
      JUMPOUT(0x26A73);
  }
}
