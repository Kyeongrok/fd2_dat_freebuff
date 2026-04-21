/*
 * func-name: sub_463BA
 * func-address: 0x463ba
 * callers: 0x46306, 0x46380
 * callees: none
 */

__int16 sub_463BA()
{
  __int16 n9525; // ax

  n9525 = 9525;
  __asm { int     21h; DOS - SET INTERRUPT VECTOR }
  dword_53730 = (unsigned __int16)word_53776;
  __asm { int     21h; DOS - }
  return n9525;
}
