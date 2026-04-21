/*
 * func-name: sub_232E8
 * func-address: 0x232e8
 * callers: 0x15311, 0x1cff0, 0x25bf4
 * callees: 0x112a5, 0x11506, 0x15f84, 0x233c6, 0x34894, 0x3702f
 */

void __fastcall sub_232E8(__int32 a1, int a2, int a3, int a4)
{
  int v4; // eax
  __int32 v5; // eax
  __int32 v6; // eax
  __int32 v7; // eax
  _DWORD v8[2]; // [esp+0h] [ebp-2Ch] BYREF
  char v9; // [esp+8h] [ebp-24h]
  unsigned __int8 v10[3]; // [esp+9h] [ebp-23h] BYREF
  _DWORD v11[2]; // [esp+Ch] [ebp-20h] BYREF
  char v12; // [esp+14h] [ebp-18h]
  _DWORD v13[2]; // [esp+18h] [ebp-14h] BYREF
  char v14; // [esp+20h] [ebp-Ch]

  v4 = sub_3702F(a1, a2, a3, a4, 92);
  v13[0] = unk_520E4;
  v13[1] = unk_520E8;
  v14 = unk_520EC;
  v11[0] = unk_520ED;
  v11[1] = unk_520F1;
  v12 = unk_520F5;
  v8[0] = unk_520F6;
  v8[1] = unk_520FA;
  v9 = unk_520FE;
  sub_11506(v4, a2, a3, a4);
  v5 = *(unsigned __int8 *)(dword_53AD5 + 17);
  if ( v5 == 1 )
  {
    v5 = sub_34894(43);
    if ( !v5 )
    {
      v6 = sub_233C6(v13, v11, v8, 0, 8, 43, 12, 7, 2, 6, 2);
      sub_15F84(v10, v6, a2, a4, a3, arg0_0, 4, 655360, 320, 205, 76, 74, 19, 1);
      sub_112A5(v7, a2, a3, a4, 0xCu);
      JUMPOUT(0x2483B);
    }
  }
  sub_15F84(v10, v5, a2, a4, a3, arg0_0, 5, 655360, 320, 205, 76, 74, 19, 1);
  ++n17;
}
