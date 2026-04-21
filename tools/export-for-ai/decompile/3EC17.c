/*
 * func-name: sub_3EC17
 * func-address: 0x3ec17
 * callers: 0x3f398
 * callees: 0x3806a, 0x3806f, 0x3ebe4
 */

int sub_3EC17()
{
  unsigned int n0xD68D_1; // eax
  unsigned int n0xD68D; // ecx
  unsigned int n16; // edi

  n0xD68D_1 = sub_3806A();
  n0xD68D = -1;
  for ( n16 = 0; n16 < 16; ++n16 )
  {
    if ( dword_52A94[n16] )
    {
      n0xD68D_1 = dword_52B14[n16];
      if ( n0xD68D_1 < n0xD68D )
        n0xD68D = dword_52B14[n16];
    }
  }
  if ( n0xD68D != ::n0xD68D )
  {
    ::n0xD68D = n0xD68D;
    sub_3EBE4(n0xD68D);
    n0xD68D_1 = 0;
    memset(buf__0, 0, 0x40u);
  }
  return sub_3806F(n0xD68D_1);
}
