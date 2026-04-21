/*
 * func-name: sub_22E5C
 * func-address: 0x22e5c
 * callers: 0x25bf4
 * callees: 0x111ba, 0x17aa9, 0x1f525, 0x1f882, 0x25977, 0x2eb9f, 0x3702f, 0x37910
 */

void __fastcall sub_22E5C(int a1, int a2, int a3, int a4)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  _BYTE *_FDOTHER.DAT_; // ebx
  __int32 v8; // eax
  int v9; // eax
  __int32 v10; // eax

  sub_3702F(a1, a2, a3, a4, 28);
  v4 = sub_25977(-1, 1);
  v5 = sub_17AA9(v4, a2, a3, a4, 1);
  v6 = sub_1F882(v5, a2, a3, a4);
  _FDOTHER.DAT_ = sub_111BA(v6, a2, a3, a4, (int)aFdotherDat, 0, 79);// "FDOTHER.DAT"
  memset(655360, 0, 64000);
  LOBYTE(v8) = sub_2EB9F((int)_FDOTHER.DAT_, 0, 655360, 320, -1);
  v9 = sub_1F525(v8, a2, (int)_FDOTHER.DAT_, a4);
  sub_17AA9(v9, a2, (int)_FDOTHER.DAT_, a4, 9);
  LOBYTE(v10) = sub_2EB9F((int)_FDOTHER.DAT_, 1, 655360, 320, -1);
  sub_17AA9(v10, a2, (int)_FDOTHER.DAT_, a4, 36);
  JUMPOUT(0x15E94);
}
