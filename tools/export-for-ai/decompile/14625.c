/*
 * func-name: sub_14625
 * func-address: 0x14625
 * callers: 0x145cd
 * callees: 0x146a7, 0x3702f
 */

_BYTE *__fastcall sub_14625(__int32 a1, int a2, int a3, int a4, int a5, int a6)
{
  _BYTE *result; // eax

  sub_3702F(a1, a2, a3, a4, 20);
  if ( a5 )
    sub_146A7(a5 - 1, a6);
  if ( a6 )
    sub_146A7(a5, a6 - 1);
  if ( a5 < dword_53AC1 - 1 )
    sub_146A7(a5 + 1, a6);
  if ( a6 < dword_53AC5 - 1 )
    sub_146A7(a5, a6 + 1);
  result = (_BYTE *)(dword_53A51 + 4 * (a5 + dword_53AC1 * a6) + 6);
  *result |= 0x40u;
  return result;
}
