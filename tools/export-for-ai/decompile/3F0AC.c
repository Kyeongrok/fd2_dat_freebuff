/*
 * func-name: sub_3F0AC
 * func-address: 0x3f0ac
 * callers: 0x382db
 * callees: none
 */

void __cdecl sub_3F0AC(unsigned int a1)
{
  _BOOL1 v1; // zf
  _UNKNOWN *retaddr; // [esp+4h] [ebp+4h]

  v1 = (BYTE1(retaddr) & 2) == 0;
  _disable();
  if ( !v1 )
    _enable();
  __writeeflags(a1);
}
