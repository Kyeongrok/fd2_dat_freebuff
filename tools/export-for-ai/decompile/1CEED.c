/*
 * func-name: sub_1CEED
 * func-address: 0x1ceed
 * callers: 0x17aed, 0x1cff0, 0x1d51d
 * callees: 0x15f84, 0x1685c, 0x187d6, 0x1c269, 0x3702f, 0x4e866
 */

void __fastcall sub_1CEED(__int32 a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // eax
  int i; // esi
  int v9; // edx
  int v10; // ebp
  int v11; // eax
  int v12; // ebx
  int v13; // edx
  int v14; // ebp
  int n205; // eax
  _BYTE v16[32]; // [esp+0h] [ebp-34h] BYREF
  int v17; // [esp+20h] [ebp-14h]
  int v18; // [esp+30h] [ebp-4h]

  sub_3702F(a1, a2, a3, a4, 92);
  v18 = a3;
  sub_1C269((__int32)v16, a2, a3, a4, a5, (int)v16);
  v17 = v7;
  for ( i = 0; i < v17; ++i )
  {
    v12 = 100 * ((i - (__CFSHL__(i >> 31, 2) + 4 * (i >> 31))) >> 2) + 18;
    v13 = 22 * (i % 4);
    v14 = v13 + 103;
    n205 = 205;
    if ( i == a6 )
      n205 = 201;
    sub_15F84(
      (unsigned __int8 *)(v12 + a7),
      (unsigned __int8)v16[i] + 441,
      v13,
      a4,
      v12,
      arg0,
      (unsigned __int8)v16[i] + 441,
      v12 + a7 + 320 * v14,
      320,
      n205,
      76,
      0,
      0,
      0);
    v9 = v13 + 108;
    v10 = 320 * (v14 + 5);
    sub_1685C(v10 + v12 + a7 + 50, v9, v12, a4, v10 + v12 + a7 + 50, 320, dword_53A81, 92);
    v11 = sub_4E866((unsigned __int8)v16[i]);
    sub_187D6(
      *(unsigned __int8 *)(v11 + 5),
      v9,
      v12,
      a4,
      v10 + v12 + a7 + 73,
      320,
      *(unsigned __int8 *)(v11 + 5),
      42,
      2);
  }
  JUMPOUT(0x15309);
}
