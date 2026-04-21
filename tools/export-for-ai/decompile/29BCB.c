/*
 * func-name: sub_29BCB
 * func-address: 0x29bcb
 * callers: 0x25ebb, 0x2968d, 0x2986f
 * callees: 0x16c57, 0x1974c, 0x25a96, 0x29ab2, 0x3702f, 0x3706e, 0x370f0, 0x3771c, 0x4ebff
 */

void __fastcall sub_29BCB(__int32 a1, int a2, int n5_1, int a4, int n255, int n3)
{
  int v6; // esi
  __int64 n28; // rax
  int n5; // ebx

  sub_3702F(a1, a2, n5_1, a4, 32);
  v6 = 0;
  dword_53C5B = malloc(64000);
  dword_53C5F = malloc(64000);
  n30 = malloc(64000);
  memmove(dword_53C5F, 655360, 64000);
  n28 = memmove(n30, dword_53C5F, 64000);
  LODWORD(n28) = sub_4EBFF(n30 + 35845, *(_DWORD *)(dword_53F66 + 70) + dword_53F66, 320);
  sub_29AB2(n28, SHIDWORD(n28), n5_1, a4, n3_3, n30, n255);
  LODWORD(n28) = sub_25A96(n28, SHIDWORD(n28), n5_1, a4, FDOTHER_DAT__1, 5, 1);
  for ( n5 = 5; n5 >= 0; --n5 )
    sub_1974C(13 * n5 + 112, SHIDWORD(n28), n5, a4, 13 * n5 + 112, dword_53C5B, n30);
  while ( 1 )
  {
    if ( n3 )
    {
      sub_16C57(n28, SHIDWORD(n28), n5, a4, 0);
    }
    else
    {
      HIBYTE(::n3) = 16;
      int386(22, &::n3, &::n3);
      if ( HIBYTE(::n3) == 224 || HIBYTE(::n3) == 82 )
        HIBYTE(::n3) = 28;
      if ( HIBYTE(::n3) == 83 )
        HIBYTE(::n3) = 1;
      LODWORD(n28) = HIBYTE(::n3);
    }
    if ( (_DWORD)n28 != 80 || n3_3 == 3 )
    {
      if ( (_DWORD)n28 == 72 && n3_3 )
      {
        LODWORD(n28) = sub_25A96(72, SHIDWORD(n28), n5, a4, FDOTHER_DAT__1, 7, 1);
        sub_29AB2(n28, SHIDWORD(n28), n5, a4, --n3_3, 655360, n255);
      }
      else if ( (_DWORD)n28 == 28 || (_DWORD)n28 == 57 )
      {
        v6 = 1;
      }
      else if ( (_DWORD)n28 == 1 )
      {
        v6 = -1;
      }
    }
    else
    {
      LODWORD(n28) = sub_25A96(80, SHIDWORD(n28), n5, a4, FDOTHER_DAT__1, 7, 1);
      sub_29AB2(n28, SHIDWORD(n28), n5, a4, ++n3_3, 655360, n255);
    }
    if ( v6 )
      JUMPOUT(0x26A73);
  }
}
