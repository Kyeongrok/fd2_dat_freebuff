/*
 * func-name: sub_11AA8
 * func-address: 0x11aa8
 * callers: 0x117e7
 * callees: 0x10620, 0x11cac, 0x3702f, 0x370f0, 0x4e31c
 */

int __fastcall sub_11AA8(__int32 a1, int a2, int a3, int a4)
{
  sub_3702F(a1, a2, a3, a4, 20);
  while ( !sub_10620() )
  {
    sub_4E31C();
    word_539F0 = MEMORY[0x46C];
    if ( MEMORY[0x46C] != word_539F2 )
    {
      sub_11CAC(0);
      word_539F2 = MEMORY[0x46C];
    }
  }
  HIBYTE(n3) = 16;
  int386(22, &n3, &n3);
  if ( HIBYTE(n3) == 224 || HIBYTE(n3) == 82 )
    HIBYTE(n3) = 28;
  if ( HIBYTE(n3) == 83 )
    HIBYTE(n3) = 1;
  return HIBYTE(n3);
}
