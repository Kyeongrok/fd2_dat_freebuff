/*
 * func-name: sub_24B14
 * func-address: 0x24b14
 * callers: 0x24754, 0x250cc, 0x33af1
 * callees: 0x2aedb, 0x3702f
 */

int __fastcall sub_24B14(__int32 a1, int a2, int a3, int a4, int n100)
{
  int n16; // ebx

  sub_3702F(a1, a2, a3, a4, 20);
  for ( n16 = 0; n16 < 16; ++n16 )
  {
    if ( sub_2AEDB(n16, n100) != -1 )
      return 1;
  }
  return -1;
}
