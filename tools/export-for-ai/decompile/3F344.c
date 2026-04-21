/*
 * func-name: sub_3F344
 * func-address: 0x3f344
 * callers: 0x38ca8
 * callees: 0x3806a, 0x3806f
 */

int __cdecl sub_3F344(int a1)
{
  int v1; // eax

  v1 = sub_3806A();
  if ( a1 != -1 && *(int *)((char *)buf__1 + a1) == 2 )
    *(int *)((char *)buf__1 + a1) = 1;
  return sub_3806F(v1);
}
