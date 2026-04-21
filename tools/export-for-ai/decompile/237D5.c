/*
 * func-name: sub_237D5
 * func-address: 0x237d5
 * callers: 0x15311, 0x1cff0, 0x25bf4
 * callees: 0x112a5, 0x11506, 0x1366a, 0x15f84, 0x233c6, 0x3702f
 */

void __fastcall sub_237D5(__int32 a1, int a2, int n4, int a4)
{
  __int32 v4; // eax
  __int32 v5; // eax
  int v6; // eax
  __int32 v7; // eax
  int v8; // eax
  _DWORD n4_[3]; // [esp+0h] [ebp-38h] BYREF
  __int16 v10; // [esp+Ch] [ebp-2Ch]
  unsigned __int8 v11[2]; // [esp+Eh] [ebp-2Ah] BYREF
  _DWORD v12[3]; // [esp+10h] [ebp-28h] BYREF
  __int16 v13; // [esp+1Ch] [ebp-1Ch]
  _DWORD v14[3]; // [esp+20h] [ebp-18h] BYREF
  __int16 v15; // [esp+2Ch] [ebp-Ch]

  sub_3702F(a1, a2, n4, a4, 104);
  v14[0] = unk_52129;
  v14[1] = unk_5212D;
  v14[2] = unk_52131;
  v15 = unk_52135;
  v12[0] = unk_52137;
  v12[1] = unk_5213B;
  v12[2] = unk_5213F;
  v13 = unk_52143;
  n4_[0] = unk_52145;
  n4_[1] = unk_52149;
  n4_[2] = unk_5214D;
  v10 = unk_52151;
  sub_233C6((__int32)v14, a2, n4, a4, (int)v14, (int)v12, (unsigned int)n4_, 0, 13, 14, 10, 2, 0, 4, 0);
  sub_15F84(v11, v4, a2, a4, n4, arg0_0, 3, 655360, 320, 205, 76, 74, 19, 1);
  v6 = sub_1366A(v5, a2, n4, a4, 45);
  sub_15F84(v11, v6, a2, a4, n4, arg0_0, 4, 655360, 320, 205, 76, 74, 19, 1);
  v8 = sub_112A5(v7, a2, n4, a4, 0x11u);
  sub_11506(v8, a2, n4, a4);
  JUMPOUT(0x239B1);
}
