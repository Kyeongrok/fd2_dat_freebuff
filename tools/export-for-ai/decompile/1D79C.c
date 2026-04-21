/*
 * func-name: sub_1D79C
 * func-address: 0x1d79c
 * callers: 0x1e292
 * callees: 0x3702f
 */

void __fastcall sub_1D79C(__int32 a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // ecx
  _DWORD v7[2]; // [esp+0h] [ebp-1Ch]
  int v8; // [esp+8h] [ebp-14h]
  int n8; // [esp+Ch] [ebp-10h]
  int v10; // [esp+18h] [ebp-4h]

  sub_3702F(a1, a2, a3, a4, 32);
  v10 = a3;
  v7[0] = unk_52024;
  v7[1] = unk_52028;
  v8 = 80 * a5 + dword_53A45;
  v6 = (a6 - (__CFSHL__(a6 >> 31, 3) + 8 * (a6 >> 31))) >> 3;
  n8 = 8;
  *(_BYTE *)(v6 + v8 + 26) |= *((_BYTE *)v7 + a6 % 8);
  JUMPOUT(0x114FF);
}
