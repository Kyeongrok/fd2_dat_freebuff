/*
 * func-name: sub_37B71
 * func-address: 0x37b71
 * callers: none
 * callees: none
 */

int sub_37B71()
{
  int result; // eax

  result = dword_52824;
  dword_52824 = 0;
  if ( !result )
  {
    __asm { int     21h; DOS - KEYBOARD INPUT, NO ECHO }
    return 0;
  }
  return result;
}
