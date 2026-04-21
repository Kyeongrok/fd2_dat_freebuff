/*
 * func-name: sub_35E0E
 * func-address: 0x35e0e
 * callers: 0x117e7, 0x16f55, 0x190ac, 0x1a813, 0x1aa1d, 0x1d80b, 0x1d8ba
 * callees: 0x3702f
 */

int __fastcall sub_35E0E(__int32 a1, int a2, int a3, int a4, int a5)
{
  int n8; // eax

  sub_3702F(a1, a2, a3, a4, 4);
  n8 = n8_0;
  if ( *(_BYTE *)(80 * a5 + n8_0 + 6) )
  {
    n8 = n8_1;
    if ( !*(_BYTE *)(n8_1 + 17) )
    {
      if ( *(_BYTE *)(n8_1 + 18) )
      {
        *(_BYTE *)(dword_53A55 + 9) = n999;
        n8 = n8_1;
        *(_BYTE *)(n8_1 + 17) = 1;
      }
    }
  }
  return n8;
}
