/*
 * func-name: sub_1F73F
 * func-address: 0x1f73f
 * callers: 0x1f894
 * callees: 0x111ba, 0x11eb0, 0x17aa9, 0x1f525, 0x1f882, 0x3702f, 0x37910, 0x4e98d
 */

int __fastcall sub_1F73F(__int32 a1, int a2, int a3, int a4, int n100, int n5, int n15, int n99)
{
  int v8; // eax
  __int32 v9; // eax
  __int16 *_FDOTHER.DAT_; // eax
  __int32 v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax

  v8 = sub_3702F(a1, a2, a3, a4, 32);
  sub_1F882(v8, a2, a3, a4);
  v9 = memset(655360, 0, 64000);
  FDOTHER_DAT = (int)sub_111BA(v9, a2, a3, a4, (int)aFdotherDat, FDOTHER_DAT, n5);// "FDOTHER.DAT"
  _FDOTHER.DAT_ = (__int16 *)sub_111BA(FDOTHER_DAT, a2, a3, a4, (int)aFdotherDat, 0, n100);// "FDOTHER.DAT"
  LOBYTE(v11) = sub_4E98D(_FDOTHER.DAT_, 0, 0, 655360, 320, -1);
  v12 = sub_1F525(v11, a2, a3, a4);
  v13 = sub_17AA9(v12, a2, a3, a4, 1);
  v14 = sub_17AA9(v13, a2, a3, a4, 6);
  v15 = sub_1F882(v14, a2, a3, a4);
  FDOTHER_DAT = (int)sub_111BA(v15, a2, a3, a4, (int)aFdotherDat, FDOTHER_DAT, 101);// "FDOTHER.DAT"
  v16 = sub_11EB0(n15 + 320 * n99, n99, a3, a4, 655360, 320, n15 + 320 * n99, 320, 320, 200);
  return sub_1F525(v16, n99, a3, a4);
}
