/*
 * func-name: sub_463DB
 * func-address: 0x463db
 * callers: 0x463f2
 * callees: none
 */

int __cdecl sub_463DB(int a1)
{
  int result; // eax

  result = a1;
  __asm { fsave   byte ptr [eax] }
  return result;
}
