/*
 * func-name: sub_3F320
 * func-address: 0x3f320
 * callers: none
 * callees: 0x3806a, 0x3806f, 0x38bd9
 */

int sub_3F320()
{
  int v0; // eax
  int n56; // esi
  _BOOL1 v2; // sf
  _BOOL1 v3; // of

  v0 = sub_3806A();
  n56 = 56;
  do
  {
    sub_38BD9(v0, n56);
    v3 = __OFSUB__(n56, 4);
    v2 = n56 - 4 < 0;
    n56 -= 4;
  }
  while ( v2 == v3 );
  return sub_3806F(v0);
}
