/*
 * func-name: sub_3F3F8
 * func-address: 0x3f3f8
 * callers: none
 * callees: 0x3806a, 0x3806f, 0x3899a
 */

int __cdecl sub_3F3F8(int n60, unsigned int a2)
{
  int n54925; // eax
  int v3; // eax

  sub_3806A();
  if ( a2 )
    n54925 = 10000 * (unsigned __int64)a2 / 0x2E9C;
  else
    n54925 = 54925;
  sub_3899A(n54925, n60, n54925);
  return sub_3806F(v3);
}
