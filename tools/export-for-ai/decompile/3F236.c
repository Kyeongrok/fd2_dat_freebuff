/*
 * func-name: sub_3F236
 * func-address: 0x3f236
 * callers: 0x37d3e, 0x387bc
 * callees: 0x3806a, 0x3806f
 */

unsigned int __cdecl sub_3F236(int (*p_sub_37C30)())
{
  unsigned int n0x3C; // eax
  unsigned int n0x3C_1; // [esp-4h] [ebp-10h]

  sub_3806A();
  n0x3C = 0;
  while ( *(int *)((char *)buf__1 + n0x3C) )
  {
    n0x3C += 4;
    if ( n0x3C >= 0x3C )
    {
      n0x3C = -1;
      goto LABEL_6;
    }
  }
  *(int *)((char *)buf__1 + n0x3C) = 1;
  *(int *)((char *)dword_52A54 + n0x3C) = (int)p_sub_37C30;
LABEL_6:
  n0x3C_1 = n0x3C;
  sub_3806F(n0x3C);
  return n0x3C_1;
}
