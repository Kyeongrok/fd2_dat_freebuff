/*
 * func-name: sub_12DAC
 * func-address: 0x12dac
 * callers: 0x115b6
 * callees: 0x10620, 0x11cac, 0x3702f, 0x370f0, 0x4e31c
 */

int __usercall sub_12DAC@<eax>(__int32 a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4@<ebx>, int a5@<esi>)
{
  sub_3702F(a1, a2, a4, a3, 24);
  while ( !sub_10620() )
  {
    sub_4E31C();
    if ( a5 != MEMORY[0x46C] )
    {
      sub_11CAC(MEMORY[0x46C], a2, a4, a3, 0);
      a5 = MEMORY[0x46C];
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
