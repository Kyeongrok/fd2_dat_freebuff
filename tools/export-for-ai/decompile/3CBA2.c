/*
 * func-name: sub_3CBA2
 * func-address: 0x3cba2
 * callers: none
 * callees: none
 */

void __usercall sub_3CBA2(double a1@<st1>, double a2@<st0>)
{
  _ST7 = a2 / -a1;
  __asm { fstp    st(1) }
}
