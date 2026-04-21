/*
 * func-name: sub_21DB2
 * func-address: 0x21db2
 * callers: none
 * callees: 0x3702f, 0x37af4, 0x3cbd5, 0x3cbe8, 0x4ebe3
 */

int __fastcall sub_21DB2(__int32 a1, int a2, int a3, int a4, int a5, unsigned __int8 a6, int a7, int a8, int a9)
{
  int v9; // eax
  double v10; // st7
  int v11; // eax
  int v12; // et2
  int result; // eax
  double v14; // [esp+0h] [ebp-2Ch]
  int v15; // [esp+18h] [ebp-14h]

  v9 = sub_3702F(a1, a2, a3, a4, 56);
  v15 = a5 * (sub_4EBE3(v9) % 64) / 64 - 1;
  v10 = (double)(sub_4EBE3(v15) % 360) * dbl_501F8;
  cos(v10);
  _CHP(LODWORD(v10), HIDWORD(*(unsigned __int64 *)&v10), v10);
  *(_WORD *)(a7 + 2 * a6) = (int)v10;
  sin(v14);
  _CHP(LODWORD(v14), HIDWORD(v14), v10);
  *(_WORD *)(a8 + 2 * a6) = (int)v10;
  v11 = sub_4EBE3((int)v10);
  v12 = v11 % 8;
  result = v11 / 8;
  LOBYTE(result) = v12 + 1;
  *(_BYTE *)(a9 + a6) = v12 + 1;
  return result;
}
