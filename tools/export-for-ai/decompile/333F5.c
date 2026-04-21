/*
 * func-name: sub_333F5
 * func-address: 0x333f5
 * callers: 0x15311, 0x1cff0, 0x25bf4, 0x25ebb
 * callees: 0x10b4e, 0x134e4, 0x135dd, 0x1366a, 0x205da, 0x3702f
 */

void __fastcall sub_333F5(__int32 a1, int a2, int a3, int a4)
{
  int v4; // eax
  __int32 v5; // eax
  __int32 v6; // eax
  int v7; // eax
  int v8; // eax
  __int32 v9; // eax
  int v10; // eax

  v4 = sub_3702F(a1, a2, a3, a4, 40);
  sub_205DA(v4, a2, a3, a4);
  sub_135DD(v5, a2, a3, a4, 4, 4);
  byte_53AFA = 1;
  v7 = sub_10B4E(v6, a2, a3, a4, 1);
  byte_53AFA = 0;
  v8 = sub_1366A(v7, a2, a3, a4, 40);
  sub_135DD(v8, a2, a3, a4, 11, 40);
  v10 = sub_1366A(v9, a2, a3, a4, 41);
  sub_134E4(v10, a2, a3, a4);
  JUMPOUT(0x33206);
}
