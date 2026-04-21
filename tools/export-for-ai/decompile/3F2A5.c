/*
 * func-name: sub_3F2A5
 * func-address: 0x3f2a5
 * callers: 0x38d77
 * callees: 0x3806a, 0x3806f
 */

int __cdecl sub_3F2A5(int a1)
{
  sub_3806A();
  if ( a1 != -1 )
    *(int *)((char *)buf__1 + a1) = 0;
  return sub_3806F(a1);
}
