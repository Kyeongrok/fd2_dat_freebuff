/*
 * func-name: sub_112A5
 * func-address: 0x112a5
 * callers: 0x22f37, 0x230f2, 0x231f9, 0x23296, 0x232e8, 0x235f9, 0x23790, 0x237d5, 0x2389f, 0x239bd, 0x23a0a, 0x23b5f, 0x23cd5, 0x23e74, 0x240fa, 0x24754, 0x24df2, 0x3231b, 0x34531, 0x35422, 0x355b7, 0x35a0d
 * callees: 0x1145a, 0x3702f, 0x3771c, 0x37910, 0x4e821, 0x4e838
 */

int __fastcall sub_112A5(__int32 a1, int a2, int a3, int a4, unsigned int n0x44)
{
  int v5; // esi
  char *v6; // edi
  int n4; // eax
  int v8; // edx
  int result; // eax
  __int16 v10; // [esp+4h] [ebp-2Ch]
  __int16 v11; // [esp+8h] [ebp-28h]
  __int16 v12; // [esp+Ch] [ebp-24h]
  __int16 v13; // [esp+10h] [ebp-20h]
  __int16 v14; // [esp+14h] [ebp-1Ch]
  __int16 v15; // [esp+18h] [ebp-18h]
  unsigned __int8 *v16; // [esp+1Ch] [ebp-14h]

  sub_3702F(a1, a2, a3, a4, 64);
  v5 = 80 * dword_53BFB + dword_53BF7;
  v6 = sub_4E838(n0x44);
  v16 = (unsigned __int8 *)sub_4E821(n0x44);
  v14 = (unsigned __int8)v6[2];
  v10 = *(_WORD *)(v6 + 3) + (v14 - 1) * v16[6];
  v15 = v16[8] * (v14 - 1) + *(_WORD *)(v6 + 5);
  v11 = *((_WORD *)v6 + 9);
  v13 = *((_WORD *)v6 + 10);
  v12 = *((_WORD *)v6 + 11);
  *(_BYTE *)(v5 + 5) = 0;
  *(_BYTE *)(v5 + 6) = 2;
  *(_BYTE *)(v5 + 7) = n0x44;
  *(_BYTE *)(v5 + 8) = n0x44;
  *(_BYTE *)(v5 + 9) = 0;
  *(_BYTE *)(v5 + 10) = 64;
  *(_BYTE *)(v5 + 11) = v6[12];
  *(_BYTE *)(v5 + 12) = 64;
  *(_BYTE *)(v5 + 13) = v6[13];
  for ( n4 = 0; n4 < 4; ++n4 )
  {
    v8 = v5 + 2 * n4;
    if ( (unsigned __int8)v6[n4 + 14] == 255 )
      *(_BYTE *)(v8 + 14) = 0x80;
    else
      *(_BYTE *)(v8 + 14) = 0;
    *(_BYTE *)(v5 + 2 * n4 + 15) = v6[n4 + 14];
  }
  *(_BYTE *)(v5 + 22) = 0x80;
  *(_BYTE *)(v5 + 24) = 0x80;
  memmove(v5 + 26, v6 + 8, 4);
  *(_BYTE *)(v5 + 30) = 0;
  *(_BYTE *)(v5 + 31) = *v6;
  *(_BYTE *)(v5 + 32) = v6[1];
  *(_BYTE *)(v5 + 33) = v14;
  memset(v5 + 34, 0, 6);
  *(_BYTE *)(v5 + 49) = -1;
  *(_WORD *)(v5 + 55) = v14 * *v16 + v11;
  *(_WORD *)(v5 + 57) = v14 * v16[2] + v13;
  *(_BYTE *)(v5 + 59) = v6[7];
  *(_BYTE *)(v5 + 60) = 0;
  *(_WORD *)(v5 + 62) = v14 * v16[4] + v12;
  *(_WORD *)(v5 + 64) = v10;
  *(_WORD *)(v5 + 66) = v10;
  *(_WORD *)(v5 + 68) = v15;
  *(_WORD *)(v5 + 70) = v15;
  result = sub_1145A(dword_53BFB);
  ++dword_53BFB;
  return result;
}
