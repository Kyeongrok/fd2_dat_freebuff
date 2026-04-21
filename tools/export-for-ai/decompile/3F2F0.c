/*
 * func-name: sub_3F2F0
 * func-address: 0x3f2f0
 * callers: 0x37d3e, 0x38bd9
 * callees: 0x3806a, 0x3806f
 */

int __cdecl sub_3F2F0(int a1)
{
  int v1; // eax

  v1 = sub_3806A();
  if ( a1 != -1 && *(int *)((char *)buf__1 + a1) == 1 )
    *(int *)((char *)buf__1 + a1) = 2;
  return sub_3806F(v1);
}
