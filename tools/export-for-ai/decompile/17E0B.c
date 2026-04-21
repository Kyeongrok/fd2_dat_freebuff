/*
 * func-name: sub_17E0B
 * func-address: 0x17e0b
 * callers: 0x17aed, 0x1b932, 0x1bffe
 * callees: 0x17eef, 0x18409, 0x184c0, 0x25a96, 0x3702f, 0x3706e, 0x3771c, 0x4e381
 */

__int16 __fastcall sub_17E0B(__int32 a1, int a2, int a3, int a4, int a5)
{
  int n11; // ebx

  sub_3702F(a1, a2, a3, a4, 24);
  dword_53C5B = malloc(64000);
  dword_53C5F = malloc(64000);
  dword_53C63 = malloc(64000);
  memmove(dword_53C5F, 655360, 64000);
  memmove(dword_53C63, dword_53C5F, 64000);
  sub_17EEF(a5, dword_53C63);
  sub_184C0(a5, -1, dword_53C63);
  for ( n11 = 11; n11 >= 0; --n11 )
  {
    if ( n11 == 11 || n11 == 5 )
      sub_25A96(dword_53EEC, 5, 1);
    sub_18409(n11, dword_53C5B, dword_53C63, dword_53C5F);
  }
  return sub_4E381();
}
