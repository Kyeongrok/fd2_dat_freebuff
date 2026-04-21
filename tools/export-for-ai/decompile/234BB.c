/*
 * func-name: sub_234BB
 * func-address: 0x234bb
 * callers: 0x15311, 0x1cff0, 0x25bf4
 * callees: 0x11d40, 0x1366a, 0x15f84, 0x233c6, 0x3702f, 0x37910
 */

void __fastcall sub_234BB(__int32 a1, int a2, int n4, int a4)
{
  __int32 v4; // eax
  __int32 v5; // eax
  int v6; // eax
  __int32 v7; // eax
  int v8; // eax
  _DWORD v9[2]; // [esp+0h] [ebp-20h] BYREF
  __int16 v10; // [esp+8h] [ebp-18h]
  unsigned __int8 v11[2]; // [esp+Ah] [ebp-16h] BYREF
  _DWORD v12[2]; // [esp+Ch] [ebp-14h] BYREF
  __int16 v13; // [esp+14h] [ebp-Ch]
  int n5; // [esp+1Ch] [ebp-4h]

  sub_3702F(a1, a2, n4, a4, 80);
  v12[0] = unk_520FF;
  v12[1] = unk_52103;
  v13 = unk_52107;
  v9[0] = unk_52109;
  v9[1] = unk_5210D;
  v10 = unk_52111;
  sub_233C6((__int32)v12, a2, n4, a4, (int)v12, (int)v9, 2u, 0, 9, 28, 14, 16, 0, 8, 14);
  sub_15F84(v11, v4, a2, a4, n4, arg0_0, 3, 655360, 320, 205, 76, 74, 19, 1);
  n6_5 = 0;
  v6 = sub_1366A(v5, a2, n4, a4, 33);
  sub_15F84(v11, v6, a2, a4, n4, arg0_0, 4, 655360, 320, 205, 76, 74, 19, 1);
  n64 = 1;
  n6_5 = 0;
  v8 = sub_1366A(v7, a2, n4, a4, 34);
  n64 = 0;
  sub_11D40(v8, a2, n4, a4, 0, 255, 64);
  memset(655360, 0, 64000);
  n5 = 5;
  JUMPOUT(0x2327D);
}
