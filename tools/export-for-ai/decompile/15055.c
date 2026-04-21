/*
 * func-name: sub_15055
 * func-address: 0x15055
 * callers: 0x14ef0
 * callees: 0x11cac, 0x11df2, 0x12cea, 0x12d7b, 0x134e4, 0x14818, 0x149f8, 0x17aa9, 0x1b722, 0x1f04a, 0x20c6f, 0x2189a, 0x2dfc8, 0x3702f, 0x3790a, 0x4df4c, 0x4e8bc
 */

int __fastcall sub_15055(__int32 a1, int a2, int a3, int a4, int a5, int a6)
{
  unsigned __int8 *v6; // edi
  __int32 v7; // eax
  __int32 v8; // esi
  int n2; // ebx
  int n30_1; // eax
  int n30; // edi
  __int32 v12; // eax
  int v13; // eax
  int v14; // eax
  __int32 v15; // eax
  int n64; // ebx
  int v17; // eax
  int v18; // ebx
  __int32 v19; // eax
  int v20; // eax
  int v21; // eax
  __int32 v22; // eax
  __int32 v23; // eax
  _DWORD v25[8]; // [esp+0h] [ebp-34h] BYREF
  unsigned __int8 n0xF; // [esp+20h] [ebp-14h]
  int v27; // [esp+30h] [ebp-4h]

  sub_3702F(a1, a2, a3, a4, 84);
  v27 = a3;
  v6 = (unsigned __int8 *)(80 * a5 + dword_53A45);
  dword_53C57 = sub_1B722(a5, dword_53C3F);
  v7 = (__int32)sub_4E8BC(dword_53C57);
  v8 = v7;
  if ( a6 )
  {
    n2 = *(unsigned __int8 *)(v7 + 17);
  }
  else
  {
    v7 = *(unsigned __int8 *)(v7 + 17);
    n2 = v7 == 0;
  }
  sub_12D7B(v7, a2, n2, a4, a5);
  n0xF = *(_BYTE *)(v8 + 16);
  if ( n0xF <= 0xFu )
    sub_14818((__int32)v25, a2, n2, a4, dword_53C37, dword_53C3B, (int)v25, *(unsigned __int8 *)(v8 + 18), 0, n2);
  else
    sub_149F8((__int32)v25, a2, n2, a4, dword_53C37, dword_53C3B, (int)v25, *v6, v6[1], n0xF - 16, 0);
  n30 = n30_1;
  sub_4DF4C((unsigned __int8 *)dword_53A51);
  j___delay(200);
  n6_5 = *(unsigned __int8 *)(v8 + 18) + 2;
  if ( n0xF >= 0x10u )
  {
    v12 = sub_1F04A(a5, LOBYTE(v25[0]));
    v13 = sub_11CAC(v12, a2, n2, a4, 1);
    v14 = sub_17AA9(v13, a2, n2, a4, 1);
    sub_17AA9(v14, a2, n2, a4, 2);
    sub_2DFC8(a5);
    sub_2189A(a5, 80, -4, v25[0], v25[1], v25[2], v25[3], v25[4], v25[5]);
    v15 = j___delay(200);
    for ( n64 = 64; n64 >= 0; --n64 )
    {
      sub_11DF2(v15, a2, n64, a4, 0, 255, n64);
      v15 = j___delay(4);
    }
    n6_5 = 6;
    n0xF -= 16;
    v17 = (dword_53C37 - dword_53AB1) * n0xF + dword_53AB1;
    dword_53C37 = v17;
    if ( v17 < dword_53AC1 )
    {
      if ( v17 < 0 )
        dword_53C37 = 0;
    }
    else
    {
      dword_53C37 = dword_53AC1 - 1;
    }
    v18 = n0xF * (dword_53C3B - dword_53AB5);
    v19 = v18 + dword_53AB5;
    dword_53C3B = v18 + dword_53AB5;
    if ( v18 + dword_53AB5 < dword_53AC5 )
    {
      if ( v19 < 0 )
        dword_53C3B = 0;
    }
    else
    {
      v19 = dword_53AC5 - 1;
      dword_53C3B = dword_53AC5 - 1;
    }
    n2_2 = 0;
    sub_12CEA(v19, a2, v18, a4, dword_53C37, dword_53C3B);
    n6_5 = 0;
    for ( n2 = 1; n2 < 9; ++n2 )
    {
      n2_2 = n2;
      v21 = sub_11CAC(v20, a2, n2, a4, 1);
      v20 = sub_17AA9(v21, a2, n2, a4, 1);
    }
    LOBYTE(v22) = sub_4DF4C((unsigned __int8 *)dword_53A51);
    sub_17AA9(v22, a2, n2, a4, 2);
    sub_12D7B(LOBYTE(v25[0]), a2, n2, a4, LOBYTE(v25[0]));
  }
  else
  {
    sub_12CEA(n0xF, a2, n2, a4, dword_53C37, dword_53C3B);
  }
  v23 = sub_20C6F(a5, dword_53C3F, n30, (unsigned __int8 *)v25);
  sub_134E4(v23, a2, n2, a4);
  dword_53EC8 = 0;
  return 0;
}
