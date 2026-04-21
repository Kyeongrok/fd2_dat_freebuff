/*
 * func-name: sub_117E7
 * func-address: 0x117e7
 * callers: 0x25bf4
 * callees: 0x11aa8, 0x11b48, 0x11b9b, 0x11bfa, 0x11c59, 0x11cac, 0x12c0d, 0x12d7b, 0x13565, 0x16f55, 0x17aed, 0x18890, 0x1e292, 0x2000a, 0x205b4, 0x206c5, 0x20707, 0x2073d, 0x20765, 0x20822, 0x2084a, 0x20872, 0x208cf, 0x20926, 0x20957, 0x20a51, 0x20a87, 0x20aaf, 0x20b14, 0x20b3c, 0x20b72, 0x20bf5, 0x25a96, 0x33faf, 0x34531, 0x3460b, 0x34673, 0x346cd, 0x34738, 0x34778, 0x34818, 0x348bb, 0x348ea, 0x34940, 0x34984, 0x349ec, 0x34a1e, 0x34a6c, 0x34b07, 0x34b2f, 0x34b6f, 0x34b9a, 0x34c52, 0x34c7a, 0x34cf1, 0x34d2f, 0x34d64, 0x34d92, 0x34dd0, 0x34eb3, 0x34f38, 0x34f74, 0x34fc2, 0x34fcc, 0x35009, 0x35022, 0x350be, 0x350c8, 0x35123, 0x35191, 0x351e6, 0x35258, 0x35298, 0x352ca, 0x35321, 0x35346, 0x353b5, 0x353e7, 0x353fa, 0x3540f, 0x35422, 0x35468, 0x3551c, 0x3553f, 0x355b7, 0x355f0, 0x35638, 0x35677, 0x356b3, 0x35730, 0x357dd, 0x35833, 0x35854, 0x35997, 0x359cb, 0x35a0d, 0x35bee, 0x35c1d, 0x35c40, 0x35cf1, 0x35d1e, 0x35d85, 0x35d9e, 0x35e0e, 0x35e5b, 0x35ec1, 0x35f48, 0x35f79, 0x35f88, 0x35fcf, 0x360b6, 0x36214, 0x36228, 0x3623c, 0x362b0, 0x362c5, 0x362e8, 0x363de, 0x36416, 0x3642e, 0x36439, 0x36440, 0x36447, 0x3644e, 0x3702f, 0x4e381
 */

int __usercall sub_117E7@<eax>(int a1@<esi>, __int32 a2@<eax>, int a3@<edx>, int a4@<ecx>, int a5@<ebx>)
{
  int v5; // eax
  int n44; // eax
  int v7; // ecx
  int v8; // ebx
  int n6; // esi
  int v10; // eax
  int v12; // eax
  int v13; // esi
  int v14; // eax
  int v15; // ebx
  _BYTE *v16; // eax
  int n2; // edx
  int v18; // eax
  int v19; // eax
  int v20; // edx
  int v21; // eax
  int n80; // eax
  int n75; // eax
  int n77; // eax

  v5 = sub_3702F(a2, a3, a5, a4, 24);
  n44 = sub_11AA8(v5, a3, a5, a4);
  if ( n44 == 1 || n44 == 44 || n44 == 76 )
  {
    v7 = 0;
    v8 = dword_53AE9;
    for ( n6 = 0; n6 < n6_0; ++n6 )
    {
      v10 = dword_53A45 + 80 * v8;
      if ( (*(_BYTE *)(v10 + 5) & 0x85) == 0 && *(_BYTE *)(v10 + 6) == 2 && !v7 )
      {
        sub_12D7B(v8);
        dword_53AE9 = v8 + 1;
        if ( v8 + 1 == n6_0 )
          dword_53AE9 = 0;
        v7 = 1;
      }
      if ( ++v8 == n6_0 )
        v8 = 0;
    }
LABEL_15:
    sub_4E381();
    return 0;
  }
  if ( n44 != 57 && n44 != 28 )
  {
    if ( n44 != 34 )
    {
      switch ( n44 )
      {
        case ';':
        case 'I':
          sub_2000A();
          return 0;
        case '<':
        case 'G':
          v19 = sub_12C0D();
          v20 = v19;
          if ( v19 != -1 )
          {
            v21 = 80 * v19 + dword_53A45;
            if ( *(_BYTE *)(v21 + 7) != 121 && *(_BYTE *)(v21 + 31) != 10 )
            {
              sub_17AED(v20, a1);
              return 0;
            }
          }
          break;
        case 'H':
          sub_25A96(dword_53EEC, 0, 1);
          sub_11B48();
          return 0;
        case 'P':
          n80 = sub_25A96(dword_53EEC, 0, 1);
          sub_11B9B(n80);
          return 0;
        case 'K':
          n75 = sub_25A96(dword_53EEC, 0, 1);
          sub_11C59(n75);
          return 0;
        case 'M':
          n77 = sub_25A96(dword_53EEC, 0, 1);
          sub_11BFA(n77);
          break;
      }
    }
    return 0;
  }
  if ( byte_51A42 )
    --byte_51A42;
  v12 = sub_12C0D();
  v13 = v12;
  if ( v12 != -1 )
  {
    v16 = (_BYTE *)(dword_53A45 + 80 * v12);
    n2 = (unsigned __int8)v16[6];
    dword_53EC8 = 0;
    if ( v16[7] != 121 && v16[31] != 10 )
    {
      if ( n2 == 2 && (char)v16[5] >= 0 && !v16[38] )
      {
        sub_25A96(dword_53EEC, 7, 1);
        while ( !sub_18890(v13) )
          ;
      }
      else
      {
        sub_17AED(v13, a1);
      }
      sub_11CAC(0);
      sub_1E292(v13);
      v18 = ((int (__cdecl *)(int))funcs_1197B[n17])(v13);
      sub_13565(v18);
      if ( n255 != 255 )
        ((void (__cdecl *)(int))funcs_1199C[n255])(v13);
      n255 = 255;
      goto LABEL_15;
    }
    return 0;
  }
  do
  {
    v14 = sub_16F55();
    v15 = v14;
  }
  while ( !v14 );
  if ( v14 == 1 )
    return 0;
  return v15;
}
