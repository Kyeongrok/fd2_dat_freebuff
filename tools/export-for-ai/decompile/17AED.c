/*
 * func-name: sub_17AED
 * func-address: 0x17aed
 * callers: 0x117e7, 0x29620
 * callees: 0x16c57, 0x17e0b, 0x182ad, 0x18312, 0x1839b, 0x18409, 0x1c269, 0x1ceed, 0x25a96, 0x3702f, 0x3771c, 0x3776e, 0x4ebff
 */

void __fastcall sub_17AED(__int32 a1, int a2, int a3, int a4, int a5, int a6)
{
  __int32 v6; // eax
  int n6; // ebx
  int v8; // eax
  int n6_1; // ebx
  int n7; // ebx

  sub_3702F(a1, a2, a3, a4, 24);
  v6 = sub_17E0B(a5);
  sub_16C57(v6, a2, a3, a4, 0);
  if ( sub_1C269(a5, 0) )
  {
    sub_25A96(dword_53EEC, 6, 1);
    for ( n6 = 0; n6 <= 6; ++n6 )
    {
      memmove(dword_53C5B, dword_53C5F, 64000);
      sub_182AD(5, dword_53C5B, dword_53C63);
      sub_18312(7, dword_53C5B, dword_53C63);
      sub_1839B(16 * n6 + 94, dword_53C5B, dword_53C63);
      memmove(655360, dword_53C5B, 64000);
    }
    memmove(dword_53C5B, dword_53C5F, 64000);
    sub_182AD(5, dword_53C5B, dword_53C63);
    sub_18312(7, dword_53C5B, dword_53C63);
    memmove(655360, dword_53C5B, 64000);
    sub_4EBFF(dword_53C63 + 30085, *(_DWORD *)(dword_53A81 + 90) + dword_53A81, 320);
    sub_1CEED(a6, -1, dword_53C63);
    v8 = sub_25A96(dword_53EEC, 5, 1);
    for ( n6_1 = 6; n6_1 >= 0; --n6_1 )
    {
      memmove(dword_53C5B, dword_53C5F, 64000);
      sub_182AD(5, dword_53C5B, dword_53C63);
      sub_18312(7, dword_53C5B, dword_53C63);
      sub_1839B(16 * n6_1 + 94, dword_53C5B, dword_53C63);
      v8 = memmove(655360, dword_53C5B, 64000);
    }
    sub_16C57(v8, a2, n6_1, a4, 0);
  }
  for ( n7 = 0; n7 <= 11; ++n7 )
  {
    if ( !n7 || n7 == 7 )
      sub_25A96(dword_53EEC, 6, 1);
    sub_18409(n7, dword_53C5B, dword_53C63, dword_53C5F);
  }
  memmove(655360, dword_53C5F, 64000);
  free(dword_53C5B);
  free(dword_53C5F);
  JUMPOUT(0x15E94);
}
