/*
 * func-name: sub_1A7BD
 * func-address: 0x1a7bd
 * callers: 0x1a30b
 * callees: 0x111ba, 0x3702f
 */

_BYTE *__fastcall sub_1A7BD(__int32 a1, int a2, int a3, int a4)
{
  _BYTE *result; // eax

  result = (_BYTE *)sub_3702F(a1, a2, a3, a4, 16);
  if ( byte_53AF9 )
  {
    dword_53B0F = 0;
    result = sub_111BA((__int32)result, a2, a3, a4, (int)aFdotherDat, 0, 64);// "FDOTHER.DAT"
    dword_53B0F = (int)result;
  }
  return result;
}
