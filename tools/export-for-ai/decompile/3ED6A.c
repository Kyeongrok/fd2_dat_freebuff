/*
 * func-name: sub_3ED6A
 * func-address: 0x3ed6a
 * callers: 0x3fdaf
 * callees: 0x3ebb4
 */

int sub_3ED6A()
{
  unsigned int v0; // kr00_4
  int n9480; // eax
  _BOOL1 v2; // zf
  char v3; // [esp-3h] [ebp-Fh]

  v0 = __readeflags();
  v3 = BYTE1(v0);
  _disable();
  sub_3EBB4(0);
  n9480 = 9480;
  __asm { int     21h; DOS - SET INTERRUPT VECTOR }
  v2 = (v3 & 2) == 0;
  _disable();
  if ( !v2 )
    _enable();
  __writeeflags(v0);
  return n9480;
}
