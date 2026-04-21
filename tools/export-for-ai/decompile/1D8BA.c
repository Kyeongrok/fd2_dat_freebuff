/*
 * func-name: sub_1D8BA
 * func-address: 0x1d8ba
 * callers: 0x1a30b
 * callees: 0x13a9f, 0x1567e, 0x1598a, 0x205b4, 0x206c5, 0x20707, 0x2073d, 0x20765, 0x20822, 0x2084a, 0x20872, 0x208cf, 0x20926, 0x20957, 0x20a51, 0x20a87, 0x20aaf, 0x20b14, 0x20b3c, 0x20b72, 0x20bf5, 0x34531, 0x3460b, 0x34673, 0x346cd, 0x34738, 0x34778, 0x34818, 0x348bb, 0x348ea, 0x34940, 0x34984, 0x349ec, 0x34a1e, 0x34a6c, 0x34b07, 0x34b2f, 0x34b6f, 0x34b9a, 0x34c52, 0x34c7a, 0x34cf1, 0x34d2f, 0x34d64, 0x34d92, 0x34dd0, 0x34eb3, 0x34f38, 0x34f74, 0x34fc2, 0x34fcc, 0x35009, 0x35022, 0x350be, 0x350c8, 0x35123, 0x35191, 0x351e6, 0x35258, 0x35298, 0x352ca, 0x35321, 0x35346, 0x353b5, 0x353e7, 0x353fa, 0x3540f, 0x35422, 0x35468, 0x3551c, 0x3553f, 0x355b7, 0x355f0, 0x35638, 0x35677, 0x356b3, 0x35730, 0x357dd, 0x35833, 0x35854, 0x35997, 0x359cb, 0x35a0d, 0x35bee, 0x35c1d, 0x35c40, 0x35cf1, 0x35d1e, 0x35d85, 0x35d9e, 0x35e0e, 0x35e5b, 0x35ec1, 0x35f48, 0x35f79, 0x35f88, 0x35fcf, 0x360b6, 0x36214, 0x36228, 0x3623c, 0x362b0, 0x362c5, 0x362e8, 0x363de, 0x36416, 0x3642e, 0x36439, 0x36440, 0x36447, 0x3644e, 0x3702f, 0x4e381
 */

int __fastcall sub_1D8BA(__int32 a1, int a2, int n2, int a4)
{
  int result; // eax
  int n6; // esi
  _BYTE *v6; // eax
  int v7; // edx
  int v8; // eax
  int n6_1; // esi
  _BYTE *v10; // eax

  result = sub_3702F(a1, a2, n2, a4, 20);
  for ( n6 = 0; n6 < n6_0; ++n6 )
  {
    n6_5 = 0;
    sub_4E381();
    v6 = (_BYTE *)(80 * n6 + dword_53A45);
    n255 = 255;
    v7 = (unsigned __int8)v6[6];
    if ( !v6[6] && (v6[5] & 0x81) == 0 && !v6[38] )
    {
      v8 = sub_1598A(0, v7, n2, a4, n6, v7);
      sub_1567E(v8, v7, n2, a4, n6, 0);
      if ( n6_3 >= 6 || n6_4 >= 6 )
        sub_13A9F(n6, 0);
    }
    if ( n255 != 255 )
      ((void (__cdecl *)(int))funcs_1199C[n255])(n6);
    result = ((int (__cdecl *)(int))funcs_1197B[n17])(n6);
    if ( n2_0 )
      return result;
  }
  for ( n6_1 = 0; n6_1 < n6_0; ++n6_1 )
  {
    sub_4E381();
    v10 = (_BYTE *)(80 * n6_1 + dword_53A45);
    n255 = 255;
    if ( !v10[6] && (v10[5] & 0x81) == 0 && !v10[38] )
      sub_13A9F(n6_1, (unsigned __int8)v10[6]);
    if ( n255 != 255 )
      ((void (__cdecl *)(int))funcs_1199C[n255])(n6_1);
    result = ((int (__cdecl *)(int))funcs_1197B[n17])(n6_1);
    if ( n2_0 )
      break;
  }
  return result;
}
