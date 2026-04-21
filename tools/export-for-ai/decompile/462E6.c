/*
 * func-name: sub_462E6
 * func-address: 0x462e6
 * callers: 0x461b7, 0x4629a
 * callees: none
 */

__int16 sub_462E6()
{
  __int16 n9525; // ax

  n9525 = 9525;
  __asm { int     21h; DOS - SET INTERRUPT VECTOR }
  dword_53730 |= 4u;
  dword_53730 &= ~2u;
  __asm { int     21h; DOS - }
  return n9525;
}
