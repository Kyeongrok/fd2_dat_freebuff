/*
 * func-name: sub_17898
 * func-address: 0x17898
 * callers: 0x177fc
 * callees: 0x10620, 0x11eb0, 0x11eee, 0x127a9, 0x1297d, 0x179d5, 0x1acf3, 0x3702f, 0x370f0, 0x4e31c
 */

int __fastcall sub_17898(__int32 a1, int a2, int a3, int a4, int a5, int a6)
{
  unsigned __int32 n4; // eax
  __int32 v7; // eax

  sub_3702F(a1, a2, a3, a4, 40);
  while ( !sub_10620() )
  {
    sub_4E31C();
    n4 = MEMORY[0x46C] - dword_53C17;
    if ( n4 >= 4 )
    {
      if ( ++dword_53C13 == 2 )
        dword_53C13 = 0;
      n4 = MEMORY[0x46C];
      dword_53C17 = MEMORY[0x46C];
    }
    sub_1297D(n4, a2, a3, a4);
    sub_11EEE(dword_53A49 + 32904, a2, a3, a4, dword_53A49 + 32904, 456, 13, 8, dword_53AA9, dword_53AAD);
    sub_127A9(v7, a2, a3, a4);
    sub_1ACF3(dword_53A49 + 32904, 456);
    sub_179D5(a5, a6);
    sub_11EB0(dword_53A49 + 32904, a2, a3, a4, 656644, 320, dword_53A49 + 32904, 456, 312, 192);
  }
  HIBYTE(n3) = 16;
  int386(22, &n3, &n3);
  if ( HIBYTE(n3) == 224 || HIBYTE(n3) == 82 )
    HIBYTE(n3) = 28;
  if ( HIBYTE(n3) == 83 )
    HIBYTE(n3) = 1;
  return HIBYTE(n3);
}
