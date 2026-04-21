/*
 * func-name: sub_23E74
 * func-address: 0x23e74
 * callers: 0x15311, 0x1cff0, 0x25bf4
 * callees: 0x10b4e, 0x112a5, 0x11506, 0x11cac, 0x13536, 0x1366a, 0x15f84, 0x1f525, 0x1f882, 0x3702f, 0x3790a
 */

void __fastcall sub_23E74(__int32 a1, _BYTE *a2, int a3, int a4)
{
  int v4; // eax
  int v5; // eax
  int n16; // eax
  __int32 n9; // eax
  int v8; // eax
  __int32 v9; // eax
  __int32 v10; // eax
  int v11; // eax
  __int32 v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  __int32 v17; // eax
  int v18; // eax
  __int32 v19; // eax
  int v20; // eax
  __int32 v21; // eax
  _BYTE dst_[32]; // [esp+0h] [ebp-44h] BYREF
  _DWORD v23[2]; // [esp+20h] [ebp-24h]
  char v24; // [esp+28h] [ebp-1Ch]
  _BYTE v25[9]; // [esp+2Ch] [ebp-18h] BYREF
  unsigned __int8 v26[11]; // [esp+35h] [ebp-Fh] BYREF
  int v27; // [esp+40h] [ebp-4h]

  v4 = sub_3702F(a1, (int)a2, a3, a4, 108);
  v27 = a3;
  qmemcpy(dst_, "!!!\"\"\"#####$$$$$#$\"\"#$!\"#$%!\"#$%", sizeof(dst_));
  v23[0] = unk_52216;
  v23[1] = unk_5221A;
  v24 = unk_5221E;
  qmemcpy(v25, "#%$#\"!$#\"", sizeof(v25));
  v5 = sub_1F882(v4, (int)a2, a3, 0);
  sub_13536(v5, (int)a2, a3, 0);
  for ( n16 = 0; n16 < 16; ++n16 )
  {
    a3 = 80 * n16;
    a2 = (_BYTE *)(80 * n16 + dword_53A45);
    *a2 = dst_[n16];
    LOBYTE(a3) = dst_[n16 + 16];
    a2[1] = a3;
    a2[3] = 1;
  }
  for ( n9 = 0; n9 < 9; ++n9 )
  {
    a3 = 80 * (n9 + 52);
    a2 = (_BYTE *)(a3 + dword_53A45);
    *a2 = *((_BYTE *)v23 + n9);
    LOBYTE(a3) = v25[n9];
    a2[1] = a3;
    a2[3] = 3;
  }
  n6_5 = 0;
  ::n9 = 26;
  n34 = 31;
  n9_0 = 26;
  n34_0 = 31;
  n10 = 0;
  n2_1 = 0;
  v8 = sub_11CAC(n9, (int)a2, a3, 0, 1);
  sub_1F525(v8, (int)a2, a3, 0);
  v9 = j___delay(200);
  sub_15F84(v26, v9, (int)a2, 0, a3, arg0_0, 11, 655360, 320, 205, 76, 74, 19, 1);
  n6_5 = 0;
  v11 = sub_1366A(v10, (int)a2, a3, 0, 59);
  sub_15F84(v26, v11, (int)a2, 0, a3, arg0_0, 12, 655360, 320, 205, 76, 74, 19, 1);
  n6_5 = 0;
  v13 = sub_112A5(v12, (int)a2, a3, 0, 0x1Au);
  sub_11506(v13, (int)a2, a3, 0);
  if ( n999 <= 25 )
  {
    v15 = sub_10B4E(v14, (int)a2, a3, 0, 1);
    v16 = sub_1366A(v15, (int)a2, a3, 0, 60);
    sub_15F84(v26, v16, (int)a2, 0, a3, arg0_0, 14, 655360, 320, 205, 76, 74, 19, 1);
    n6_5 = 0;
    v18 = sub_1366A(v17, (int)a2, a3, 0, 61);
    sub_15F84(v26, v18, (int)a2, 0, a3, arg0_0, 15, 655360, 320, 205, 76, 74, 19, 1);
    n6_5 = 0;
    v20 = sub_1366A(v19, (int)a2, a3, 0, 62);
    sub_15F84(v26, v20, (int)a2, 0, a3, arg0_0, 16, 655360, 320, 205, 76, 74, 19, 1);
    v14 = sub_112A5(v21, (int)a2, a3, 0, 0x1Cu);
  }
  sub_15F84(v26, v14, (int)a2, 0, a3, arg0_0, 13, 655360, 320, 205, 76, 74, 19, 1);
  ++n17;
}
