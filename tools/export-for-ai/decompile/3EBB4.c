/*
 * func-name: sub_3EBB4
 * func-address: 0x3ebb4
 * callers: 0x3ebe4, 0x3ed6a
 * callees: none
 */

char __cdecl sub_3EBB4(int a1)
{
  unsigned int v1; // kr00_4
  unsigned __int8 v2; // ah
  char result; // al
  _BOOL1 v4; // zf
  _UNKNOWN *retaddr; // [esp+10h] [ebp+4h]

  v1 = __readeflags();
  _disable();
  __outbyte(0x43u, 0x36u);
  v2 = BYTE1(a1);
  dword_52BDE = a1;
  __outbyte(0x40u, a1);
  result = BYTE1(a1);
  __outbyte(0x40u, v2);
  v4 = (BYTE1(retaddr) & 2) == 0;
  _disable();
  if ( !v4 )
    _enable();
  __writeeflags(v1);
  return result;
}
