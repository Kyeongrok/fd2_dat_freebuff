/*
 * func-name: sub_3F398
 * func-address: 0x3f398
 * callers: 0x3899a
 * callees: 0x3806a, 0x3806f, 0x3ec17
 */

int __cdecl sub_3F398(int a1, int a2)
{
  int v2; // eax

  sub_3806A();
  *(int *)((char *)buf__2 + a1) = a2;
  *(int *)((char *)buf__0 + a1) = 0;
  v2 = sub_3EC17();
  return sub_3806F(v2);
}
