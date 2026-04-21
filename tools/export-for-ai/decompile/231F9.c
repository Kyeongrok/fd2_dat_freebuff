/*
 * func-name: sub_231F9
 * func-address: 0x231f9
 * callers: 0x15311, 0x1cff0, 0x25bf4
 * callees: 0x112a5, 0x11506, 0x15f84, 0x233c6, 0x3702f
 */

void __fastcall sub_231F9(__int32 a1, int a2, int a3, int a4)
{
  __int32 v4; // eax
  __int32 v5; // eax
  int v6; // eax
  int v7; // [esp+0h] [ebp-20h] BYREF
  __int16 v8; // [esp+4h] [ebp-1Ch]
  char v9; // [esp+6h] [ebp-1Ah]
  unsigned __int8 v10; // [esp+7h] [ebp-19h] BYREF
  _BYTE v11[8]; // [esp+8h] [ebp-18h] BYREF
  int v12; // [esp+10h] [ebp-10h] BYREF
  __int16 v13; // [esp+14h] [ebp-Ch]
  char v14; // [esp+16h] [ebp-Ah]

  sub_3702F(a1, a2, a3, a4, 80);
  v12 = unk_520CF;
  v13 = unk_520D3;
  v14 = unk_520D5;
  qmemcpy(v11, "\v\v\v\t\n\t\n", 7);
  v7 = unk_520DD;
  v8 = unk_520E1;
  v9 = unk_520E3;
  v4 = sub_233C6(&v12, v11, &v7, 0, 6, 41, 12, 8, 0, 6, 4);
  sub_15F84(&v10, v4, a2, a4, a3, arg0_0, 9, 655360, 320, 205, 76, 74, 19, 1);
  v6 = sub_112A5(v5, a2, a3, a4, 0xAu);
  sub_11506(v6, a2, a3, a4);
  ++n17;
}
