/*
 * func-name: sub_3F063
 * func-address: 0x3f063
 * callers: 0x38262
 * callees: none
 */

int __cdecl sub_3F063(int a1)
{
  int n517; // eax

  if ( a1 != -1 && a1 == dword_52BF0 )
  {
    n517 = 517;
    __asm { int     31h; DPMI Services   ax=func xxxxh }
    dword_52BF0 = -1;
  }
  return n517;
}
