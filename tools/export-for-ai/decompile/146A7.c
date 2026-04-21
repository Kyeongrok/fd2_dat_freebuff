/*
 * func-name: sub_146A7
 * func-address: 0x146a7
 * callers: 0x14625
 * callees: 0x3702f
 */

_BYTE *__fastcall sub_146A7(__int32 a1, int a2, int a3, int a4, int a5, int a6)
{
  _BYTE *result; // eax

  sub_3702F(a1, a2, a3, a4, 4);
  result = (_BYTE *)(4 * (a5 + dword_53AC1 * a6) + dword_53A51 + 6);
  *result |= 0x80u;
  return result;
}
