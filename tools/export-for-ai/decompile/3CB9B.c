/*
 * func-name: sub_3CB9B
 * func-address: 0x3cb9b
 * callers: none
 * callees: none
 */

void sub_3CB9B()
{
  __asm
  {
    fchs
    fstp    st(1)
    fdivp   st(1), st
  }
}
