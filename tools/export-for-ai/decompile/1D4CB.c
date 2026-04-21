/*
 * func-name: sub_1D4CB
 * func-address: 0x1d4cb
 * callers: 0x15311, 0x1cff0, 0x20c6f, 0x24618, 0x2d80d
 * callees: 0x111ba, 0x3702f
 */

_BYTE *__fastcall sub_1D4CB(__int32 a1, int a2, int a3, int a4)
{
  int v4; // eax
  _BYTE *_FDOTHER.DAT_; // eax

  v4 = sub_3702F(a1, a2, a3, a4, 16);
  FDOTHER_DAT__0 = 0;
  _FDOTHER.DAT_ = sub_111BA(v4, a2, a3, a4, (int)aFdotherDat, 0, 80);// "FDOTHER.DAT"
  FDOTHER_DAT__0 = (int)_FDOTHER.DAT_;
  return _FDOTHER.DAT_;
}
