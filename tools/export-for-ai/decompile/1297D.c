/*
 * func-name: sub_1297D
 * func-address: 0x1297d
 * callers: 0x11cac, 0x12eaa, 0x1300d, 0x13185, 0x13315, 0x1741c, 0x17898, 0x18b84, 0x197e5, 0x19953, 0x1b1e7, 0x2b4fb
 * callees: 0x3702f
 */

int __fastcall sub_1297D(__int32 a1, int a2, int a3, int a4)
{
  int result; // eax

  sub_3702F(a1, a2, a3, a4, 4);
  if ( MEMORY[0x46C] - dword_53C0F > 4 || (result = MEMORY[0x46C] - dword_53C0F, result < 0) )
  {
    if ( ++n3_1 == 4 )
      n3_1 = 0;
    result = MEMORY[0x46C];
    dword_53C0F = MEMORY[0x46C];
  }
  if ( ++n3_0 == 4 )
    n3_0 = 0;
  return result;
}
