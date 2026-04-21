/*
 * func-name: sub_1AA1D
 * func-address: 0x1aa1d
 * callers: 0x15311, 0x1548e, 0x18d8c, 0x1cff0, 0x20c6f, 0x352ca, 0x35346, 0x355f0, 0x35730
 * callees: 0x15f84, 0x16559, 0x16c57, 0x1956b, 0x196cb, 0x197e5, 0x19953, 0x1b722, 0x1b8e7, 0x1b932, 0x1bb8c, 0x34531, 0x3460b, 0x34673, 0x346cd, 0x34738, 0x34778, 0x34818, 0x348bb, 0x348ea, 0x34940, 0x34984, 0x349ec, 0x34a1e, 0x34a6c, 0x34b07, 0x34b2f, 0x34b6f, 0x34b9a, 0x34c52, 0x34c7a, 0x34cf1, 0x34d2f, 0x34d64, 0x34d92, 0x34dd0, 0x34eb3, 0x34f38, 0x34f74, 0x34fc2, 0x34fcc, 0x35009, 0x35022, 0x350be, 0x350c8, 0x35123, 0x35191, 0x351e6, 0x35258, 0x35298, 0x352ca, 0x35321, 0x35346, 0x353b5, 0x353e7, 0x353fa, 0x3540f, 0x35422, 0x35468, 0x3551c, 0x3553f, 0x355b7, 0x355f0, 0x35638, 0x35677, 0x356b3, 0x35730, 0x357dd, 0x35833, 0x35854, 0x35997, 0x359cb, 0x35a0d, 0x35bee, 0x35c1d, 0x35c40, 0x35cf1, 0x35d1e, 0x35d85, 0x35d9e, 0x35e0e, 0x35e5b, 0x35ec1, 0x35f48, 0x35f79, 0x35f88, 0x35fcf, 0x360b6, 0x36214, 0x36228, 0x3623c, 0x362b0, 0x362c5, 0x362e8, 0x363de, 0x36416, 0x3642e, 0x36439, 0x36440, 0x36447, 0x3644e, 0x3702f, 0x3790a, 0x4e381
 */

void __fastcall sub_1AA1D(__int32 a1, int a2, int a3, int a4, unsigned __int8 *a5, int a6, int a7)
{
  int v7; // esi
  int i; // ebp
  int v9; // eax
  __int32 v10; // eax
  int v11; // eax
  __int32 v12; // eax
  int v13; // eax
  __int32 v14; // eax
  __int32 v15; // eax
  int v16; // eax
  __int32 v17; // eax
  int v18; // eax
  __int32 v19; // eax
  int v20; // eax
  __int32 v21; // eax
  unsigned __int8 *v22; // eax
  int arg4_1; // ebx
  int v24; // eax
  int v25; // eax
  __int32 v26; // eax
  int v27; // eax
  __int32 v28; // [esp+0h] [ebp-14h]

  sub_3702F(a1, a2, a3, a4, 60);
  if ( !a6 )
LABEL_24:
    JUMPOUT(0x22BBE);
  v7 = 80 * (_DWORD)a5 + dword_53A45;
  for ( i = 0; ; ++i )
  {
    if ( i >= a6 )
      goto LABEL_24;
    sub_4E381();
    v22 = (unsigned __int8 *)(a7 + 3 * i);
    arg4_1 = *(unsigned __int16 *)(v22 + 1);
    v24 = *v22;
    if ( v24 )
    {
      switch ( v24 )
      {
        case 1:
          if ( *(_BYTE *)(v7 + 6) != 2 )
            goto LABEL_24;
          v18 = sub_1956B(*(unsigned __int8 *)(v7 + 7), a2, arg4_1, a4, *(unsigned __int8 *)(v7 + 7));
          arg4 = arg4_1;
          sub_15F84(a5, v18, a2, a4, arg4_1, arg0, 435, 696099, 320, 205, 76, 74, 19, 1);
          v20 = sub_16559(v19, a2, arg4_1, a4, 0);
          sub_16C57(v20, a2, arg4_1, a4, 0);
          sub_196CB(v21, a2, arg4_1, a4);
          n6_6 += arg4;
          break;
        case 2:
          j___delay(200);
          ((void (__cdecl *)(unsigned __int8 *))funcs_1199C[arg4_1])(a5);
          break;
        case 3:
          sub_15F84(a5, 3, a2, a4, arg4_1, arg0_0, arg4_1, 655360, 320, 205, 76, 74, 19, 1);
          break;
      }
    }
    else
    {
      if ( *(_BYTE *)(v7 + 6) != 2 )
        goto LABEL_24;
      dword_53AD9 = arg4_1 + 181;
      v25 = sub_1956B(*(unsigned __int8 *)(v7 + 7), a2, arg4_1, a4, *(unsigned __int8 *)(v7 + 7));
      sub_15F84(a5, v25, a2, a4, arg4_1, arg0, 432, 696099, 320, 205, 76, 74, 19, 1);
      v26 = sub_1BB8C(a5, arg4_1);
      if ( v26 == -1 )
      {
        v9 = sub_16559(-1, a2, arg4_1, a4, 0);
        sub_16C57(v9, a2, arg4_1, a4, 0);
        sub_196CB(v10, a2, arg4_1, a4);
        j___delay(100);
        v11 = sub_1956B(*(unsigned __int8 *)(v7 + 7), a2, arg4_1, a4, *(unsigned __int8 *)(v7 + 7));
        sub_15F84(a5, v11, a2, a4, arg4_1, arg0, 433, 696099, 320, 205, 76, 74, 19, 1);
        v13 = sub_16559(v12, a2, arg4_1, a4, 0);
        sub_19953(v13, a2, arg4_1, a4);
        v28 = v14;
        sub_197E5(v14, a2, arg4_1, a4);
        if ( v28 != 1 || n3_3 )
        {
          sub_15F84(a5, v15, a2, a4, arg4_1, arg0, 434, 702179, 320, 205, 76, 74, 19, 1);
        }
        else
        {
          sub_196CB(v15, a2, arg4_1, a4);
          if ( sub_1B932(a5, 0) )
          {
            sub_1B722(a5, n3_3);
            sub_1B8E7(a5, n3_3);
            sub_1BB8C(a5, arg4_1);
            continue;
          }
          j___delay(100);
          v16 = sub_1956B(*(unsigned __int8 *)(v7 + 7), a2, arg4_1, a4, *(unsigned __int8 *)(v7 + 7));
          sub_15F84(a5, v16, a2, a4, arg4_1, arg0, 434, 696099, 320, 205, 76, 74, 19, 1);
        }
        v17 = j___delay(200);
      }
      else
      {
        v27 = sub_16559(v26, a2, arg4_1, a4, 0);
        sub_16C57(v27, a2, arg4_1, a4, 0);
      }
      sub_196CB(v17, a2, arg4_1, a4);
    }
  }
}
