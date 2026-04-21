/*
 * func-name: sub_1E611
 * func-address: 0x1e611
 * callers: 0x1548e
 * callees: 0x11eee, 0x127a9, 0x15f0e, 0x1e739, 0x1e7f6, 0x3702f
 */

void __fastcall sub_1E611(__int32 a1, int a2, int a3, int a4, _DWORD *a5, int a6, int a7, int a8)
{
  __int32 v8; // eax
  int v9; // edx

  sub_3702F(a1, a2, a3, a4, 32);
  sub_11EEE(n655360_0 + 32904, a2, (int)a5, a4, n655360_0 + 32904, 456, 13, 8, dword_53AA9, dword_53AAD);
  sub_127A9(v8, a2, (int)a5, a4);
  sub_15F0E(n655360_0 + 32904, a2, (int)a5, a4, dword_53AD1, n655360_0 + 32904, 456, *a5 - 4, a5[1] - 4, 48);
  v9 = 456 * (a5[1] + 2);
  sub_1E739(*a5 + v9 + n655360_0 + 32904 + 3, 456, 55);
  sub_1E7F6(n655360_0 + 31076, 456, a8, a5);
  if ( a5[2] != -1 )
  {
    sub_15F0E(n655360_0 + 32904, v9, (int)a5, a4, dword_53AD1, n655360_0 + 32904, 456, a5[2] - 4, a5[3] - 4, 48);
    sub_1E7F6(n655360_0 + 31076, 456, a7, a5 + 2);
  }
  JUMPOUT(0x11D2C);
}
