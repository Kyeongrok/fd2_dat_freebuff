/*
 * func-name: sub_2921A
 * func-address: 0x2921a
 * callers: 0x2670e, 0x279bc, 0x29300, 0x29daa
 * callees: 0x3702f, 0x37910
 */

int __fastcall sub_2921A(__int32 a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int n655360; // edi
  int result; // eax
  int n0xA000; // ebx
  int n320; // ecx
  int n200; // [esp+4h] [ebp-14h]
  int n0x6400; // [esp+8h] [ebp-10h]

  sub_3702F(a1, a2, a3, a4, 40);
  n0x6400 = a6 - 100 * a8;
  n655360 = n655360_0;
  result = memset(n655360_0, 0, 64000);
  for ( n200 = 0; n200 < 200; ++n200 )
  {
    if ( (unsigned int)n0x6400 < 0x6400 )
    {
      n0xA000 = a5 - 160 * a8;
      for ( n320 = 0; n320 < 320; ++n320 )
      {
        if ( (unsigned int)n0xA000 < 0xA000 )
          *(_BYTE *)(n320 + n655360) = *(_BYTE *)(((n0xA000 - (__CFSHL__(n0xA000 >> 31, 7) + (n0xA000 >> 31 << 7))) >> 7)
                                                + 320
                                                * ((n0x6400 - (__CFSHL__(n0x6400 >> 31, 7) + (n0x6400 >> 31 << 7))) >> 7)
                                                + a7);
        n0xA000 += a8;
      }
    }
    result = a8;
    n0x6400 += a8;
    n655360 += 320;
  }
  return result;
}
