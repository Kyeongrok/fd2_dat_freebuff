/*
 * func-name: sub_463E7
 * func-address: 0x463e7
 * callers: 0x463f2
 * callees: none
 */

int __cdecl sub_463E7(int a1)
{
  int result; // eax

  result = a1;
  __asm { frstor  byte ptr [eax] }
  return result;
}
