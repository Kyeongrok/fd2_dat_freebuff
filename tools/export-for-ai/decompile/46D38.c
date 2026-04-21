/*
 * func-name: sub_46D38
 * func-address: 0x46d38
 * callers: 0x3ddb5
 * callees: none
 */

int sub_46D38()
{
  int result; // eax

  result = dword_52824;
  dword_52824 = 0;
  if ( !result )
  {
    __asm { int     21h; DOS - KEYBOARD INPUT }
    return 0;
  }
  return result;
}
