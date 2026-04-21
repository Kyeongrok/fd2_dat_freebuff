/*
 * func-name: sub_3F2CC
 * func-address: 0x3f2cc
 * callers: 0x38de4
 * callees: 0x3806a, 0x3806f, 0x38d77
 */

int sub_3F2CC()
{
  int v0; // eax
  int n56; // esi
  _BOOL1 v2; // sf
  _BOOL1 v3; // of

  v0 = sub_3806A();
  n56 = 56;
  do
  {
    sub_38D77(v0, n56);
    v3 = __OFSUB__(n56, 4);
    v2 = n56 - 4 < 0;
    n56 -= 4;
  }
  while ( v2 == v3 );
  return sub_3806F(v0);
}
