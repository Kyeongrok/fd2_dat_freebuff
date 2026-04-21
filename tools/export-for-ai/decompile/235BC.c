/*
 * func-name: sub_235BC
 * func-address: 0x235bc
 * callers: 0x15311, 0x1cff0, 0x25bf4
 * callees: 0x10b4e, 0x135dd, 0x1366a, 0x3702f
 */

void __fastcall sub_235BC(__int32 a1, int a2, int a3, int a4)
{
  __int32 v4; // eax
  __int32 v5; // eax
  int v6; // eax

  sub_3702F(a1, a2, a3, a4, 40);
  v4 = dword_53A45 + 880;
  *(_BYTE *)(dword_53A45 + 885) = 0;
  sub_135DD(v4, a2, a3, a4, 6, 1);
  v6 = sub_10B4E(v5, a2, a3, a4, 4);
  sub_1366A(v6, a2, a3, a4, 36);
  JUMPOUT(0x231C6);
}
