/*
 * func-name: sub_35BEE
 * func-address: 0x35bee
 * callers: 0x117e7, 0x16f55, 0x190ac, 0x1a813, 0x1aa1d, 0x1d80b, 0x1d8ba
 * callees: 0x3702f
 */

int __fastcall sub_35BEE(__int32 a1, int a2, int a3, int a4)
{
  int n8; // eax

  sub_3702F(a1, a2, a3, a4, 4);
  n8 = n8_1;
  if ( !*(_BYTE *)(n8_1 + 17) )
  {
    *(_BYTE *)(dword_53A55 + 3) = n999 + 1;
    n8 = n8_1;
    *(_BYTE *)(n8_1 + 17) = 1;
  }
  return n8;
}
