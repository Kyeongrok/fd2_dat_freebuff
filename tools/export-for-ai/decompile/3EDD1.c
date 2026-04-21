/*
 * func-name: sub_3EDD1
 * func-address: 0x3edd1
 * callers: 0x3815f
 * callees: none
 */

int sub_3EDD1()
{
  int n513; // eax

  n513 = 513;
  __asm { int     31h; DPMI Services   ax=func xxxxh }
  return n513;
}
