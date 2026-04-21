/*
 * func-name: sub_235F9
 * func-address: 0x235f9
 * callers: 0x15311, 0x1cff0, 0x25bf4
 * callees: 0x112a5, 0x11506, 0x11cac, 0x13536, 0x1366a, 0x15f84, 0x1f525, 0x1f882, 0x3702f, 0x3790a
 */

void __fastcall sub_235F9(__int32 a1, _BYTE *a2, int a3, int a4)
{
  int v4; // eax
  int v5; // eax
  int n11; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  __int32 v10; // eax
  int v11; // eax
  __int32 v12; // eax
  __int32 v13; // eax
  int v14; // eax
  __int32 v15; // eax
  int v16; // eax
  int v17; // eax
  _DWORD v18[2]; // [esp+0h] [ebp-24h]
  __int16 v19; // [esp+8h] [ebp-1Ch]
  char v20; // [esp+Ah] [ebp-1Ah]
  _BYTE v21[11]; // [esp+Ch] [ebp-18h] BYREF
  unsigned __int8 v22[9]; // [esp+17h] [ebp-Dh] BYREF
  int v23; // [esp+20h] [ebp-4h]

  v4 = sub_3702F(a1, (int)a2, a3, a4, 76);
  v23 = a3;
  v18[0] = unk_52113;
  v18[1] = unk_52117;
  v19 = unk_5211B;
  v20 = unk_5211D;
  qmemcpy(v21, "&'&&'&''(((", sizeof(v21));
  v5 = sub_1F882(v4, (int)a2, a3, a4);
  sub_13536(v5, (int)a2, a3, a4);
  for ( n11 = 0; n11 < 11; ++n11 )
  {
    a3 = dword_53A45;
    a2 = (_BYTE *)(dword_53A45 + 80 * n11);
    *a2 = *((_BYTE *)v18 + n11);
    LOBYTE(a3) = v21[n11];
    a2[1] = a3;
    a2[3] = 2;
  }
  v7 = dword_53A45 + 4000;
  *(_BYTE *)(dword_53A45 + 4000) = 15;
  *(_BYTE *)(v7 + 1) = 35;
  *(_BYTE *)(v7 + 38) = 0;
  v8 = dword_53A45 + 4080;
  *(_BYTE *)(dword_53A45 + 4080) = 14;
  *(_BYTE *)(v8 + 1) = 35;
  *(_BYTE *)(v8 + 38) = 0;
  v9 = dword_53A45 + 4160;
  *(_BYTE *)(dword_53A45 + 4160) = 16;
  *(_BYTE *)(v9 + 1) = 35;
  *(_BYTE *)(v9 + 5) = 0;
  v10 = dword_53A45 + 400;
  *(_BYTE *)(dword_53A45 + 405) = 0;
  n6_5 = 0;
  n9 = 9;
  n34 = 34;
  n9_0 = 9;
  n34_0 = 34;
  n10 = 0;
  n2_1 = 0;
  v11 = sub_11CAC(v10, (int)a2, a3, a4, 1);
  sub_1F525(v11, (int)a2, a3, a4);
  v12 = j___delay(200);
  sub_15F84(v22, v12, (int)a2, a4, a3, arg0_0, 4, 655360, 320, 205, 76, 74, 19, 1);
  n6_5 = 0;
  v14 = sub_1366A(v13, (int)a2, a3, a4, 37);
  sub_15F84(v22, v14, (int)a2, a4, a3, arg0_0, 5, 655360, 320, 205, 76, 74, 19, 1);
  v16 = sub_112A5(v15, (int)a2, a3, a4, 0xBu);
  v17 = sub_112A5(v16, (int)a2, a3, a4, 6u);
  sub_11506(v17, (int)a2, a3, a4);
  ++n17;
}
