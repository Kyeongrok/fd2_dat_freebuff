/*
 * func-name: sub_1F81E
 * func-address: 0x1f81e
 * callers: 0x1f894
 * callees: 0x111ba, 0x11d40, 0x20421, 0x3702f, 0x37910
 */

int __fastcall sub_1F81E(int a1, int a2, int a3, int a4, int n4, int n15, int n99)
{
  _BYTE *_FDOTHER.DAT_; // eax
  __int32 v8; // eax
  __int32 v9; // eax

  _FDOTHER.DAT_ = (_BYTE *)sub_3702F(a1, a2, a3, a4, 16);
  if ( n99 != -1 )
  {
    v8 = memset(655360, 0, 64000);
    _FDOTHER.DAT_ = sub_111BA(v8, a2, a3, a4, (int)aFdotherDat, FDOTHER_DAT, n99);// "FDOTHER.DAT"
    FDOTHER_DAT = (int)_FDOTHER.DAT_;           // "FDOTHER.DAT"
  }
  sub_11D40((__int32)_FDOTHER.DAT_, a2, a3, a4, 0, 255, 0);
  sub_20421(n4, n15, 0);
  return sub_1F882(v9, a2, a3, a4);
}
