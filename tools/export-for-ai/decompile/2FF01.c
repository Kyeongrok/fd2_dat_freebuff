/*
 * func-name: sub_2FF01
 * func-address: 0x2ff01
 * callers: 0x15311, 0x1cff0
 * callees: 0x111ba, 0x11cac, 0x11eb0, 0x12e38, 0x17aa9, 0x1c75e, 0x1f183, 0x1f525, 0x1f882, 0x25a96, 0x2b996, 0x2bb33, 0x2bd6c, 0x2bfd9, 0x2c217, 0x2c441, 0x2c67d, 0x2cafc, 0x2ccf4, 0x2ce1a, 0x2cf30, 0x2d80d, 0x2e95b, 0x2e9a8, 0x2eb9f, 0x2facd, 0x30e25, 0x30e9d, 0x311e5, 0x31266, 0x3702f, 0x3706e, 0x3776e, 0x3790a, 0x37910, 0x4e8d3, 0x4e98d, 0x4ebe3
 */

void __fastcall sub_2FF01(__int32 a1, int a2, int n6, int a4, int n6a, int n28, int n30, unsigned __int8 *n2)
{
  int v8; // eax
  int v9; // ecx
  int n30_1; // edi
  unsigned __int8 *_FIGANI.DAT__5; // edx
  __int32 v12; // eax
  int v13; // ebx
  __int32 v14; // eax
  int v15; // edi
  int v16; // edx
  __int16 *_BG.DAT_; // edi
  int v18; // ebx
  __int64 arg8_4; // rax
  int arg8_3; // esi
  int v21; // edx
  int v22; // edi
  int _FIGANI.DAT__1; // ebx
  __int32 _FIGANI.DAT__2; // eax
  int n30_2; // edi
  int v26; // edi
  __int32 v27; // eax
  int v28; // eax
  int n10; // edi
  __int32 v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int i; // edi
  __int32 v35; // eax
  int v36; // eax
  int arg8; // ebx
  __int32 v38; // eax
  int v39; // edx
  int arg8_1; // ebx
  __int32 v41; // eax
  int v42; // eax
  int v43; // ebx
  int _FIGANI.DAT__4; // edx
  int v45; // eax
  int j; // edi
  int _FDOTHER.DAT__1; // edx
  int v48; // eax
  int v49; // eax
  int k; // edi
  __int32 v51; // eax
  int v52; // eax
  int arg8_2; // ebx
  __int32 v54; // eax
  int n7; // edi
  __int32 v56; // eax
  __int32 v57; // eax
  int n4; // edi
  __int32 v59; // eax
  int v60; // eax
  int v61; // eax
  __int32 v62; // eax
  int v63; // eax
  int v64; // eax
  int n30_4; // edi
  __int64 n655360; // rax
  int n640; // [esp+0h] [ebp-144h]
  unsigned __int8 *v68[30]; // [esp+4h] [ebp-140h]
  _DWORD dst__1[4]; // [esp+7Ch] [ebp-C8h] BYREF
  _DWORD dst_[4]; // [esp+8Ch] [ebp-B8h] BYREF
  _DWORD v71[2]; // [esp+9Ch] [ebp-A8h]
  __int16 v72; // [esp+A4h] [ebp-A0h]
  _BYTE v73[12]; // [esp+A8h] [ebp-9Ch] BYREF
  _DWORD v74[2]; // [esp+B4h] [ebp-90h]
  __int16 v75; // [esp+BCh] [ebp-88h]
  _DWORD v76[2]; // [esp+C0h] [ebp-84h]
  char v77; // [esp+C8h] [ebp-7Ch]
  _BYTE v78[8]; // [esp+CCh] [ebp-78h] BYREF
  int v79; // [esp+D4h] [ebp-70h]
  __int32 v80; // [esp+D8h] [ebp-6Ch]
  int v81; // [esp+DCh] [ebp-68h]
  int n11; // [esp+E0h] [ebp-64h]
  __int16 *_BG.DAT__1; // [esp+E4h] [ebp-60h]
  __int16 *_TAI.DAT_; // [esp+E8h] [ebp-5Ch]
  _BYTE *_FIGANI.DAT_; // [esp+ECh] [ebp-58h]
  int n32; // [esp+F0h] [ebp-54h]
  int v87; // [esp+F4h] [ebp-50h]
  int arg4; // [esp+F8h] [ebp-4Ch]
  int v89; // [esp+FCh] [ebp-48h]
  unsigned __int8 *_FIGANI.DAT__3; // [esp+100h] [ebp-44h]
  unsigned __int8 *n3; // [esp+104h] [ebp-40h]
  int v92; // [esp+108h] [ebp-3Ch]
  __int32 v93; // [esp+10Ch] [ebp-38h]
  int n30_3; // [esp+110h] [ebp-34h]
  int v95; // [esp+114h] [ebp-30h]
  int _FDOTHER.DAT_; // [esp+118h] [ebp-2Ch]
  int v97; // [esp+11Ch] [ebp-28h]
  int v98; // [esp+120h] [ebp-24h]
  int n8; // [esp+124h] [ebp-20h]
  int n3_1; // [esp+128h] [ebp-1Ch]
  int n19360; // [esp+12Ch] [ebp-18h]
  _BOOL1 v102; // [esp+130h] [ebp-14h]
  int n6_1; // [esp+140h] [ebp-4h]

  v8 = sub_3702F(a1, a2, n6, a4, 356);
  n6_1 = n6;
  _TAI.DAT_ = 0;
  _BG.DAT__1 = 0;
  n3 = 0;
  _FIGANI.DAT_ = 0;
  _FDOTHER.DAT_ = 0;
  n8 = 8;
  qmemcpy(dst_, &src__5, sizeof(dst_));
  qmemcpy(dst__1, &src__6, sizeof(dst__1));
  v9 = 0;
  n3_1 = 3;
  v92 = -1;
  n32 = 32;
  n11 = 11;
  v95 = 0;
  v71[0] = unk_526BC;
  v71[1] = unk_526C0;
  v72 = unk_526C4;
  v76[0] = unk_526C6;
  v76[1] = unk_526CA;
  v77 = unk_526CE;
  v74[0] = unk_526CF;
  v74[1] = unk_526D3;
  v75 = unk_526D7;
  qmemcpy(v73, "RRSTUVWXYZ", 10);
  if ( n28 < 32 )
  {
    if ( n28 == 24 || n28 > 27 )
    {
      sub_2CF30(v8, a2, n6, 0, n6a, n28, n30, n2);
    }
    else
    {
      if ( n28 == 8 )
      {
        n32 = 176;
        n11 = 19;
      }
      else if ( n28 > 3 )
      {
        n32 = 176;
        n11 = 15;
      }
      free(dword_53A61);
      free(n655360_0);
      free(::n7);
      ::n7 = 0;
      for ( n30_1 = 0; n30_1 < 30; ++n30_1 )
        v68[n30_1] = 0;
      _FIGANI.DAT__5 = (unsigned __int8 *)(80 * n6a + n8_0);
      _FIGANI.DAT__3 = _FIGANI.DAT__5;
      LOBYTE(v12) = sub_12E38(*_FIGANI.DAT__5, (int)_FIGANI.DAT__5, n6, 0, *_FIGANI.DAT__5, _FIGANI.DAT__5[1], (int)v78);
      v13 = (unsigned __int8)byte_52470[n17];
      if ( !sub_1F183(v12, (int)_FIGANI.DAT__5, v13, 0, n6a) || !v13 )
        v13 = v78[6];
      v14 = sub_30E25(n30, n2);
      v15 = v14;
      v16 = _FIGANI.DAT__3[6];
      if ( !_FIGANI.DAT__3[6] )
      {
        v15 = v13;
        v13 = v14;
      }
      _BG.DAT_ = (__int16 *)sub_111BA(v14, v16, v13, 0, (int)aBgDat, (int)_BG.DAT__1, v15);// "BG.DAT"
      _BG.DAT__1 = _BG.DAT_;
      _TAI.DAT_ = (__int16 *)sub_111BA((__int32)_BG.DAT_, v16, v13, 0, (int)aTaiDat, (int)_TAI.DAT_, v13);// "TAI.DAT"
      v18 = malloc(64000);
      v97 = v18;
      arg8_4 = malloc(&loc_2A300);
      arg8_3 = arg8_4;
      LODWORD(arg8_4) = memset(v18, 0, 64000);
      sub_2FACD(arg8_4, SHIDWORD(arg8_4), v18, 0, v18, n6a);
      sub_2FACD(*n2, SHIDWORD(arg8_4), v18, 0, v18, *n2);
      sub_4E98D(_BG.DAT_, 0, 50, v18, 320, -1);
      v80 = 80 * n6a + n8_0;
      v21 = *(unsigned __int8 *)(v80 + 7);
      v22 = 3 * v21;
      _FIGANI.DAT_ = sub_111BA(v80, v21, v18, 0, (int)aFiganiDat, (int)_FIGANI.DAT_, 3 * v21);// "FIGANI.DAT"
      _FIGANI.DAT__1 = (int)sub_111BA(v22 + 2, v21, v18, 0, (int)aFiganiDat, (int)n3, v22 + 2);// "FIGANI.DAT"
      n3 = (unsigned __int8 *)_FIGANI.DAT__1;
      FDOTHER_DAT__7 = 0;
      FDOTHER_DAT__7 = (int)sub_111BA(
                              (unsigned __int8)v73[n28],
                              v21,
                              _FIGANI.DAT__1,
                              0,
                              (int)aFdotherDat,
                              0,
                              (unsigned __int8)v73[n28]);// "FDOTHER.DAT"
      _FIGANI.DAT__2 = *(__int16 *)_FIGANI.DAT__1;
      if ( !*(_WORD *)_FIGANI.DAT__1 )
      {
        _FIGANI.DAT__2 = (__int32)sub_111BA(
                                    _FIGANI.DAT__2,
                                    v21,
                                    _FIGANI.DAT__1,
                                    0,
                                    (int)aFiganiDat,
                                    _FIGANI.DAT__1,
                                    v22 + 1);   // "FIGANI.DAT"
        n3 = (unsigned __int8 *)_FIGANI.DAT__2;
      }
      sub_1F882(_FIGANI.DAT__2, v21, _FIGANI.DAT__1, 0);
      for ( n30_2 = 0; n30_2 < n30; ++n30_2 )
      {
        v21 = *(unsigned __int8 *)(n8_0 + 80 * n2[n30_2] + 7);
        v68[n30_2] = sub_111BA(3 * v21, v21, _FIGANI.DAT__1, 0, (int)aFiganiDat, (int)v68[n30_2], 3 * v21);// "FIGANI.DAT"
      }
      if ( *(_BYTE *)(v80 + 6) )
        v26 = *((unsigned __int8 *)v76 + n28);
      else
        v26 = *((unsigned __int8 *)v74 + n28);
      _FDOTHER.DAT_ = (int)sub_111BA(
                             *(unsigned __int8 *)(v80 + 6),
                             v21,
                             _FIGANI.DAT__1,
                             0,
                             (int)aFdotherDat,
                             _FDOTHER.DAT_,
                             v26);              // "FDOTHER.DAT"
      LOBYTE(v27) = sub_2E9A8(
                      _FDOTHER.DAT_,
                      v21,
                      _FIGANI.DAT__1,
                      0,
                      n6a,
                      0,
                      (int)_FIGANI.DAT_,
                      (int)v68[0],
                      arg8_3,
                      v97,
                      _TAI.DAT_);
      v28 = sub_30E9D(v27, v21, _FIGANI.DAT__1, 0, n6a, n28, n3, v68[0], arg8_3, v97, _BG.DAT__1, _TAI.DAT_);
      if ( n28 == 9 )
      {
        for ( n10 = 0; n10 <= 10; ++n10 )
        {
          v31 = sub_11EB0(v28, v21, arg8_3 + 320, 0, arg8_3 + 320, 640, v97, 320, 320, 200);
          if ( n10 != 10 )
            LOBYTE(v31) = sub_2EB9F(
                            10 * n10,
                            v21,
                            arg8_3 + 320 - 10 * n10,
                            0,
                            (int)_FIGANI.DAT_,
                            0,
                            arg8_3 + 320 - 10 * n10,
                            640,
                            -1);
          _FIGANI.DAT__1 = arg8_3 + 320;
          LOBYTE(v30) = sub_2EB9F(v31, v21, arg8_3 + 320, 0, (int)v68[0], 0, arg8_3 + 320, 640, -1);
          v28 = sub_11EB0(v30, v21, arg8_3 + 320, 0, 655360, 320, arg8_3 + 320, 640, 320, 200);
        }
        j___delay(500);
      }
      arg4 = *n3 - 1;
      ((void (__fastcall *)(__int32, int, int, int, int, int, int, int, unsigned __int8))funcs_30469[n28])(
        n28,
        v21,
        _FIGANI.DAT__1,
        0,
        n6a,
        _FDOTHER.DAT_,
        arg8_3,
        320,
        0);
      v89 = v32;
      v33 = sub_311E5(v68[0], 0, arg8_3, 640);
      n19360 = 19360;
      for ( i = 0; i < v89; ++i )
      {
        arg8 = arg8_3 + n19360;
        sub_11EB0(v33, v21, arg8_3 + n19360, 0, arg8_3 + n19360, 640, v97, 320, 320, 200);
        ((void (__fastcall *)(__int32, int, int, int, int, int, int, int, unsigned __int8))funcs_30469[n28])(
          n28,
          v21,
          arg8,
          0,
          n6a,
          _FDOTHER.DAT_,
          arg8,
          640,
          1u);
        if ( n28 != 9 )
          sub_2EB9F(v38, v21, arg8, 0, (int)n3, arg4, arg8, 640, -1);
        _FIGANI.DAT__1 = arg8_3 + n19360;
        sub_311E5(v68[0], -1, arg8_3 + n19360, 640);
        ((void (__fastcall *)(__int32, int, int, int, int, int, int, int, unsigned __int8))funcs_30469[n28])(
          n28,
          v21,
          _FIGANI.DAT__1,
          0,
          n6a,
          _FDOTHER.DAT_,
          _FIGANI.DAT__1,
          640,
          2u);
        v36 = sub_11EB0(v35, v21, _FIGANI.DAT__1, 0, 655360, 320, _FIGANI.DAT__1, 640, 320, 200);
        v33 = sub_17AA9(v36, v21, _FIGANI.DAT__1, 0, 1);
      }
      for ( n30_3 = 0; ; ++n30_3 )
      {
        _FDOTHER.DAT__1 = n30_3;
        if ( n30_3 >= n30 )
          break;
        ((void (__fastcall *)(__int32, int, int, int, int, int, int, int, unsigned __int8))funcs_30469[n28])(
          4 * n28,
          n30_3,
          _FIGANI.DAT__1,
          v9,
          n6a,
          _FDOTHER.DAT_,
          arg8_3,
          320,
          3u);
        v89 = v48;
        sub_311E5(v68[0], 0, arg8_3, 640);
        v39 = n2[n30_3];
        _FIGANI.DAT__1 = 80 * v39 + n8_0;
        _FIGANI.DAT__3 = (unsigned __int8 *)_FIGANI.DAT__1;
        v93 = *(__int16 *)(_FIGANI.DAT__1 + 64);
        v102 = sub_1C75E(v93, v39, _FIGANI.DAT__1, v9, v39, n28) == 0;
        v87 = *(__int16 *)(_FIGANI.DAT__1 + 64);
        *(_WORD *)(_FIGANI.DAT__1 + 64) = v93;
        v98 = 1;
        for ( j = 0; j < v89; ++j )
        {
          if ( n28 == 7 || n28 == 3 || n28 == 9 )
          {
            LOBYTE(v95) = v95 ^ 1;
            v39 = v95;
            sub_11EB0(
              640 * v95,
              v95,
              arg8_3 + n19360 - 640 * v95,
              v9,
              arg8_3 + n19360 - 640 * v95,
              640,
              v97,
              320,
              320,
              200);
          }
          else
          {
            sub_11EB0(arg8_3 + n19360, v39, _FIGANI.DAT__1, v9, arg8_3 + n19360, 640, v97, 320, 320, 200);
          }
          arg8_1 = arg8_3 + n19360;
          ((void (__fastcall *)(__int32, int, int, int, int, int, int, int, unsigned __int8))funcs_30469[n28])(
            n28,
            v39,
            arg8_3 + n19360,
            v9,
            n6a,
            _FDOTHER.DAT_,
            arg8_3 + n19360,
            640,
            4u);
          if ( n28 != 9 )
            sub_2EB9F(v41, v39, arg8_1, v9, (int)n3, arg4, arg8_1, 640, -1);
          _FIGANI.DAT__1 = arg8_3 + n19360;
          v39 = 4 * n30_3;
          if ( v102 )
          {
            sub_311E5(v68[n30_3], -1, arg8_3 + n19360, 640);
            ((void (__fastcall *)(__int32, int, int, int, int, int, int, int, unsigned __int8))funcs_30469[n28])(
              n28,
              v39,
              _FIGANI.DAT__1,
              v9,
              n6a,
              _FDOTHER.DAT_,
              _FIGANI.DAT__1,
              640,
              5u);
          }
          else
          {
            v9 = v92 * dst_[n3_1];
            v81 = dst__1[n3_1];
            sub_311E5(v68[n30_3], n32 + (n8-- << 8), _FIGANI.DAT__1 + v9 + 640 * v81, 640);
            if ( n8 == 1 )
              n8 = 8;
            if ( n3_1 != 3 )
              ++n3_1;
            v39 = arg8_3 + n19360;
            ((void (__fastcall *)(__int32, int, int, int, int, int, int, int, unsigned __int8))funcs_30469[n28])(
              n28,
              arg8_3 + n19360,
              _FIGANI.DAT__1,
              v9,
              n6a,
              _FDOTHER.DAT_,
              arg8_3 + n19360,
              640,
              5u);
            if ( v42 == 1 )
            {
              v43 = *((unsigned __int8 *)v71 + n28);
              if ( v43 >= v98 )
              {
                _FIGANI.DAT__4 = (int)_FIGANI.DAT__3;
                *((_WORD *)_FIGANI.DAT__3 + 32) = v93 - v98 * (v93 - v87) / v43;
                sub_2FACD(n2[n30_3], _FIGANI.DAT__4, v43, v9, v97, n2[n30_3]);
                ++v98;
              }
              n3_1 = 0;
              _FIGANI.DAT__1 = 3;
              v39 = sub_4EBE3(v42) % 3;
              v92 = 1 - v39;
            }
          }
          v45 = sub_11EB0(arg8_3 + n19360, v39, _FIGANI.DAT__1, v9, 655360, 320, arg8_3 + n19360, 640, 320, 200);
          sub_17AA9(v45, v39, _FIGANI.DAT__1, v9, 1);
        }
        if ( n30 - 1 != n30_3 )
        {
          sub_31266(n6a, _FDOTHER.DAT_, n3, v68[n30_3], arg8_3, v97, v68[n30_3 + 1], n28);
          sub_2FACD(n2[n30_3 + 1], v39, _FIGANI.DAT__1, v9, v97, n2[n30_3 + 1]);
        }
      }
      ((void (__fastcall *)(__int32, int, int, int, int, int, int, int, unsigned __int8))funcs_30469[n28])(
        4 * n28,
        n30_3,
        _FIGANI.DAT__1,
        v9,
        n6a,
        _FDOTHER.DAT_,
        arg8_3,
        320,
        6u);
      v89 = v49;
      for ( k = 0; k < v89; ++k )
      {
        arg8_2 = arg8_3 + n19360;
        sub_11EB0(v49, _FDOTHER.DAT__1, arg8_3 + n19360, v9, arg8_3 + n19360, 640, v97, 320, 320, 200);
        ((void (__fastcall *)(__int32, int, int, int, int, int, int, int, unsigned __int8))funcs_30469[n28])(
          n28,
          _FDOTHER.DAT__1,
          arg8_2,
          v9,
          n6a,
          _FDOTHER.DAT_,
          arg8_2,
          640,
          7u);
        if ( n28 != 9 )
          sub_2EB9F(v54, _FDOTHER.DAT__1, arg8_2, v9, (int)n3, arg4, arg8_2, 640, -1);
        n640 = 640;
        _FIGANI.DAT__1 = arg8_3 + n19360;
        sub_311E5(v68[n30 - 1], -1, arg8_3 + n19360, 640);
        ((void (__fastcall *)(__int32, int, int, int, int, int, int, int, unsigned __int8))funcs_30469[n28])(
          n28,
          _FDOTHER.DAT__1,
          _FIGANI.DAT__1,
          v9,
          n6a,
          _FDOTHER.DAT_,
          _FIGANI.DAT__1,
          640,
          8u);
        v52 = sub_11EB0(v51, _FDOTHER.DAT__1, _FIGANI.DAT__1, v9, 655360, 320, _FIGANI.DAT__1, 640, 320, 200);
        v49 = sub_17AA9(v52, _FDOTHER.DAT__1, _FIGANI.DAT__1, v9, 1);
      }
      if ( n28 == 9 )
      {
        for ( n7 = 7; n7 >= 0; --n7 )
        {
          _FIGANI.DAT__1 = arg8_3 + 320;
          sub_11EB0(v49, _FDOTHER.DAT__1, arg8_3 + 320, v9, arg8_3 + 320, 640, v97, 320, 320, 200);
          _FDOTHER.DAT__1 = arg8_3 + 320 - 10 * n7;
          LOBYTE(v56) = sub_2EB9F(
                          10 * n7,
                          _FDOTHER.DAT__1,
                          _FIGANI.DAT__1,
                          v9,
                          (int)_FIGANI.DAT_,
                          0,
                          _FIGANI.DAT__1 - 10 * n7,
                          640,
                          -1);
          LOBYTE(v57) = sub_2EB9F(v56, _FDOTHER.DAT__1, arg8_3 + 320, v9, (int)v68[0], 0, arg8_3 + 320, 640, -1);
          v49 = sub_11EB0(v57, _FDOTHER.DAT__1, arg8_3 + 320, v9, 655360, 320, arg8_3 + 320, 640, 320, 200);
        }
      }
      for ( n4 = 1; n4 < 4; ++n4 )
      {
        sub_11EB0(v49, _FDOTHER.DAT__1, _FIGANI.DAT__1, v9, arg8_3, 320, v97, 320, 320, 200);
        _FDOTHER.DAT__1 = FDOTHER_DAT__3;
        v79 = FDOTHER_DAT__3 + *(_DWORD *)(FDOTHER_DAT__3 + 4 * (n4 + n11) + 6);
        sub_4E8D3(_BG.DAT__1, 0, 50, v97, 320, v79);
        LOBYTE(v59) = sub_4E8D3(_TAI.DAT_, 164, 157, v97, 320, v79);
        sub_2EB9F(v59, _FDOTHER.DAT__1, _FIGANI.DAT__1, v9, (int)n3, 0, arg8_3, 320, -1);
        v60 = sub_311E5(v68[n30 - 1], -1, arg8_3, 320);
        v61 = sub_11EB0(v60, _FDOTHER.DAT__1, _FIGANI.DAT__1, v9, 655360, 320, arg8_3, 320, 320, 200);
        v49 = sub_17AA9(v61, _FDOTHER.DAT__1, _FIGANI.DAT__1, v9, 1);
      }
      sub_11EB0(v49, _FDOTHER.DAT__1, _FIGANI.DAT__1, v9, arg8_3, 320, v97, 320, 320, 200);
      sub_4E98D(_BG.DAT__1, 0, 50, v97, 320, -1);
      LOBYTE(v62) = sub_4E98D(_TAI.DAT_, 164, 157, v97, 320, -1);
      sub_2EB9F(v62, _FDOTHER.DAT__1, _FIGANI.DAT__1, v9, (int)n3, 0, arg8_3, 320, -1);
      v63 = sub_311E5(v68[n30 - 1], -1, arg8_3, 320);
      v64 = sub_11EB0(v63, _FDOTHER.DAT__1, _FIGANI.DAT__1, v9, 655360, 320, arg8_3, 320, 320, 200);
      sub_25A96(v64, _FDOTHER.DAT__1, _FIGANI.DAT__1, v9, FDOTHER_DAT__7, -1, 1);
      free(FDOTHER_DAT__7);
      free(_FDOTHER.DAT_);
      for ( n30_4 = 0; n30_4 < n30; ++n30_4 )
        free(v68[n30_4]);
      free(v97);
      free(arg8_3);
      free(_FIGANI.DAT_);
      free(n3);
      free(_BG.DAT__1);
      free(_TAI.DAT_);
      n655360 = malloc(153216);
      n655360_0 = n655360;
      ::n7 = (int)sub_111BA(
                    n655360,
                    SHIDWORD(n655360),
                    _FIGANI.DAT__1,
                    v9,
                    (int)aFdshapDat,
                    ::n7,
                    2 * *(unsigned __int8 *)dword_53A55);// "FDSHAP.DAT"
      LODWORD(n655360) = sub_2E95B(::n7, SHIDWORD(n655360), _FIGANI.DAT__1, v9);
      LODWORD(n655360) = sub_17AA9(n655360, SHIDWORD(n655360), _FIGANI.DAT__1, v9, 8);
      sub_1F882(n655360, SHIDWORD(n655360), _FIGANI.DAT__1, v9);
      LODWORD(n655360) = memset(655360, 0, 64000);
      LODWORD(n655360) = sub_11CAC(n655360, SHIDWORD(n655360), _FIGANI.DAT__1, v9, 1);
      sub_1F525(n655360, SHIDWORD(n655360), _FIGANI.DAT__1, v9);
    }
  }
  else
  {
    sub_2D80D(v8, a2, n6, 0, n6a, n28, n30, n2);
  }
}
