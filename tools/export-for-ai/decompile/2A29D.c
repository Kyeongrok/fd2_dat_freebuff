/*
 * func-name: sub_2A29D
 * func-address: 0x2a29d
 * callers: 0x2a43e
 * callees: 0x1974c, 0x26eda, 0x27816, 0x278e7, 0x2a0c2, 0x3702f, 0x3706e, 0x3771c, 0x4ebff
 */

void __fastcall sub_2A29D(__int32 a1, int a2, int n5_1, int a4, int n3, int a6)
{
  int v6; // esi
  __int64 v7; // rax
  int n5; // ebx

  sub_3702F(a1, a2, n5_1, a4, 36);
  v6 = 0;
  dword_53C5B = malloc(64000);
  dword_53C5F = malloc(64000);
  n30 = malloc(64000);
  memmove(dword_53C5F, 655360, 64000);
  v7 = memmove(n30, dword_53C5F, 64000);
  n3_6 = 0;
  n3_3 = 0;
  dword_53F62 = a6;
  n3_5 = n3;
  LODWORD(v7) = sub_4EBFF(n30 + 35845, *(_DWORD *)(dword_53F66 + 70) + dword_53F66, 320);
  sub_2A0C2(v7, SHIDWORD(v7), n5_1, a4, n3, n30, (unsigned __int8 *)n3_3, a6);
  for ( n5 = 5; n5 >= 0; --n5 )
    sub_1974C(13 * n5 + 112, SHIDWORD(v7), n5, a4, 13 * n5 + 112, dword_53C5B, n30);
  while ( 1 )
  {
    LODWORD(v7) = sub_26EDA(v7, SHIDWORD(v7), n5, a4, 2);
    switch ( (_DWORD)v7 )
    {
      case 0x48:
        if ( n3_3 )
        {
          LODWORD(v7) = --n3_3;
          if ( n3_3 < n3_6 )
          {
            --n3_6;
            LODWORD(v7) = sub_278E7(n3_3, SHIDWORD(v7), n5, a4);
          }
LABEL_8:
          sub_2A0C2(v7, SHIDWORD(v7), n5, a4, n3, 655360, (unsigned __int8 *)n3_3, a6);
        }
        break;
      case 0x50:
        LODWORD(v7) = n3 - 1;
        if ( n3 - 1 <= n3_3 )
          break;
        LODWORD(v7) = ++n3_3 - n3_6;
        if ( n3_3 - n3_6 >= 3 )
        {
          ++n3_6;
          LODWORD(v7) = sub_27816(v7, SHIDWORD(v7), n5, a4);
        }
        goto LABEL_8;
      case 0x1C:
      case 0x39:
        v6 = 1;
        break;
      case 1:
        v6 = -1;
        break;
    }
    if ( v6 )
      JUMPOUT(0x26A73);
  }
}
