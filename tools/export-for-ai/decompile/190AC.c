/*
 * func-name: sub_190AC
 * func-address: 0x190ac
 * callers: 0x18d8c
 * callees: 0x12263, 0x12e38, 0x15f84, 0x16559, 0x16c57, 0x1956b, 0x196cb, 0x197e5, 0x19953, 0x1b722, 0x1b8e7, 0x1b932, 0x1bb8c, 0x25b45, 0x34531, 0x3460b, 0x34673, 0x346cd, 0x34738, 0x34778, 0x34818, 0x348bb, 0x348ea, 0x34940, 0x34984, 0x349ec, 0x34a1e, 0x34a6c, 0x34b07, 0x34b2f, 0x34b6f, 0x34b9a, 0x34c52, 0x34c7a, 0x34cf1, 0x34d2f, 0x34d64, 0x34d92, 0x34dd0, 0x34eb3, 0x34f38, 0x34f74, 0x34fc2, 0x34fcc, 0x35009, 0x35022, 0x350be, 0x350c8, 0x35123, 0x35191, 0x351e6, 0x35258, 0x35298, 0x352ca, 0x35321, 0x35346, 0x353b5, 0x353e7, 0x353fa, 0x3540f, 0x35422, 0x35468, 0x3551c, 0x3553f, 0x355b7, 0x355f0, 0x35638, 0x35677, 0x356b3, 0x35730, 0x357dd, 0x35833, 0x35854, 0x35997, 0x359cb, 0x35a0d, 0x35bee, 0x35c1d, 0x35c40, 0x35cf1, 0x35d1e, 0x35d85, 0x35d9e, 0x35e0e, 0x35e5b, 0x35ec1, 0x35f48, 0x35f79, 0x35f88, 0x35fcf, 0x360b6, 0x36214, 0x36228, 0x3623c, 0x362b0, 0x362c5, 0x362e8, 0x363de, 0x36416, 0x3642e, 0x36439, 0x36440, 0x36447, 0x3644e, 0x3702f, 0x3790a, 0x4e381
 */

char __fastcall sub_190AC(__int32 a1, int a2, int a3, int a4, int n6)
{
  unsigned __int8 *v5; // edi
  char result; // al
  int v7; // esi
  __int32 v8; // eax
  __int32 v9; // eax
  int v10; // eax
  int v11; // ebx
  __int64 v12; // rax
  int v13; // edx
  int v14; // ebx
  __int32 v15; // eax
  __int32 v16; // eax
  int v17; // eax
  int v18; // eax
  __int32 v19; // eax
  int v20; // eax
  int v21; // eax
  __int32 v22; // eax
  __int32 v23; // eax
  int v24; // eax
  __int32 v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  _BYTE v29[2]; // [esp-2h] [ebp-24h] BYREF
  __int16 v30; // [esp+0h] [ebp-22h]
  unsigned __int8 v31; // [esp+2h] [ebp-20h]
  int v32; // [esp+6h] [ebp-1Ch]
  int v33; // [esp+Ah] [ebp-18h]
  int v34; // [esp+Eh] [ebp-14h]
  int v35; // [esp+1Eh] [ebp-4h]

  sub_3702F(a1, a2, a3, a4, 76);
  v35 = a3;
  sub_12E38((__int32)v29, a2, a3, a4, dword_53AB1, dword_53AB5, (int)v29);
  v5 = (unsigned __int8 *)v30;
  result = v31;
  v34 = v31;
  if ( (v31 & 0x60) != 0 )
  {
    result = *(_BYTE *)(v30 + dword_53AD5);
    if ( !result )
    {
      v7 = dword_53A45 + 80 * n6;
      sub_4E381();
      v8 = sub_1956B(*(unsigned __int8 *)(v7 + 7));
      if ( (v34 & 0x20) != 0 )
        sub_15F84(v5, v8, a2, a4, a3, arg0, 421, 696099, 320, 205, 76, 74, 19, 1);
      else
        sub_15F84(v5, v8, a2, a4, a3, arg0, 428, 696099, 320, 205, 76, 74, 19, 1);
      v10 = sub_16559(v9, a2, a3, a4, 0);
      v12 = sub_19953(v10);
      v11 = v12;
      sub_197E5(v12, HIDWORD(v12), v12);
      if ( v11 != 1 || n3_3 )
      {
        LODWORD(v12) = j___delay(100);
        sub_15F84(v5, v12, SHIDWORD(v12), a4, v11, arg0, 412, 702179, 320, 205, 76, 74, 19, 1);
        LODWORD(v12) = j___delay(200);
        return sub_196CB(v12, HIDWORD(v12));
      }
      sub_25B45(dword_53EEC, 12, 1);
      j___delay(300);
      v13 = dword_53A55;
      v14 = *(unsigned __int16 *)(dword_53A55 + 3 * (_DWORD)v5 + 84);
      if ( !*(_BYTE *)(dword_53A55 + 3 * (_DWORD)v5 + 83) )
      {
        v15 = v14 + 181;
        dword_53AD9 = v14 + 181;
        if ( (v34 & 0x20) != 0 )
          sub_15F84(v5, v15, dword_53A55, a4, v14, arg0, 422, 702179, 320, 205, 76, 74, 19, 1);
        else
          sub_15F84(v5, v15, dword_53A55, a4, v14, arg0, 429, 702179, 320, 205, 76, 74, 19, 1);
        if ( sub_1BB8C(n6, v14) != -1 )
        {
          v16 = dword_53AD5;
          v5[dword_53AD5] = 1;
          v17 = sub_16559(v16, v13, v14, a4, 0);
          sub_16C57(v17, v13, v14, a4, 0);
          v19 = sub_196CB(v18, v13);
          return sub_12263(v19, v13, v14, a4);
        }
        v20 = sub_16559(-1, v13, v14, a4, 0);
        sub_16C57(v20, v13, v14, a4, 0);
        sub_196CB(v21, v13);
        j___delay(100);
        v22 = sub_1956B(*(unsigned __int8 *)(v7 + 7));
        sub_15F84(v5, v22, v13, a4, v14, arg0, 423, 696099, 320, 205, 76, 74, 19, 1);
        v24 = sub_16559(v23, v13, v14, a4, 0);
        v12 = sub_19953(v24);
        v33 = v12;
        LODWORD(v12) = sub_197E5(v12, HIDWORD(v12), v14);
        if ( v33 != 1 || n3_3 )
        {
          sub_15F84(v5, v12, SHIDWORD(v12), a4, v14, arg0, 424, 702179, 320, 205, 76, 74, 19, 1);
        }
        else
        {
          sub_196CB(v12, HIDWORD(v12));
          if ( sub_1B932(n6, 0) )
          {
            v33 = sub_1B722(n6, n3_3);
            v32 = v33;
            sub_1B8E7(n6, n3_3);
            sub_1BB8C(n6, v14);
            HIDWORD(v12) = v32;
            *(_WORD *)(dword_53A55 + 3 * (_DWORD)v5 + 84) = v32;
            j___delay(100);
            sub_1956B(*(unsigned __int8 *)(v7 + 7));
            dword_53ADD = v33 + 181;
            sub_15F84(v5, v33 + 181, SHIDWORD(v12), a4, v14, arg0, 425, 696099, 320, 205, 76, 74, 19, 1);
            LODWORD(v12) = sub_16559(v12, SHIDWORD(v12), v14, a4, 0);
            sub_16C57(v12, SHIDWORD(v12), v14, a4, 0);
            return sub_196CB(v12, HIDWORD(v12));
          }
          j___delay(100);
          LODWORD(v12) = sub_1956B(*(unsigned __int8 *)(v7 + 7));
          sub_15F84(v5, v12, SHIDWORD(v12), a4, v14, arg0, 424, 696099, 320, 205, 76, 74, 19, 1);
        }
        LODWORD(v12) = j___delay(200);
        return sub_196CB(v12, HIDWORD(v12));
      }
      if ( *(_BYTE *)(dword_53A55 + 3 * (_DWORD)v5 + 83) == 1 )
      {
        if ( *(_WORD *)(dword_53A55 + 3 * (_DWORD)v5 + 84) )
        {
          dword_53AE1 = *(unsigned __int16 *)(dword_53A55 + 3 * (_DWORD)v5 + 84);
          if ( (v34 & 0x20) != 0 )
            sub_15F84(v5, 1, dword_53A55, a4, v14, arg0, 426, 702179, 320, 205, 76, 74, 19, 1);
          else
            sub_15F84(v5, 1, dword_53A55, a4, v14, arg0, 430, 702179, 320, 205, 76, 74, 19, 1);
        }
        else if ( (v34 & 0x20) != 0 )
        {
          sub_15F84(
            v5,
            1,
            dword_53A55,
            a4,
            0,
            arg0,
            427,
            702179,
            320,
            205,
            76,
            74,
            19,
            *(unsigned __int8 *)(dword_53A55 + 3 * (_DWORD)v5 + 83));
        }
        else
        {
          sub_15F84(
            v5,
            1,
            dword_53A55,
            a4,
            0,
            arg0,
            431,
            702179,
            320,
            205,
            76,
            74,
            19,
            *(unsigned __int8 *)(dword_53A55 + 3 * (_DWORD)v5 + 83));
        }
        v26 = sub_16559(v25, v13, v14, a4, 0);
        sub_16C57(v26, v13, v14, a4, 0);
        sub_196CB(v27, v13);
        dword_53BF3 += dword_53AE1;
        v19 = dword_53AD5;
        v5[dword_53AD5] = 1;
        return sub_12263(v19, v13, v14, a4);
      }
      v28 = j___delay(200);
      sub_196CB(v28, v13);
      return ((int (__cdecl *)(int))funcs_1199C[v14])(n6);
    }
  }
  return result;
}
