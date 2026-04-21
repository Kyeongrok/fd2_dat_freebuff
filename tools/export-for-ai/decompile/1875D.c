/*
 * func-name: sub_1875D
 * func-address: 0x1875d
 * callers: 0x17fc0, 0x18c6d, 0x1acf3
 * callees: 0x187d6, 0x3702f
 */

int __fastcall sub_1875D(__int32 a1, int a2, int a3, int a4, int a5, int a6, int n999, int n999_1, int n3)
{
  int n42; // eax

  sub_3702F(a1, a2, a3, a4, 24);
  n42 = 42;
  if ( n999 == n999_1 )
    n42 = 31;
  return sub_187D6(a5, a6, n999, n42, n3);
}
