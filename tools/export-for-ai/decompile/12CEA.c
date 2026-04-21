/*
 * func-name: sub_12CEA
 * func-address: 0x12cea
 * callers: 0x12d7b, 0x15055, 0x15311, 0x165ac, 0x16f55, 0x18890, 0x18d8c, 0x1bbdc, 0x2218a, 0x2548c, 0x25757, 0x33f78
 * callees: 0x11b48, 0x11b9b, 0x11bfa, 0x11c59, 0x11cac, 0x3702f, 0x4e381
 */

void __fastcall sub_12CEA(__int32 a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // eax
  int n77; // eax

  v6 = sub_3702F(a1, a2, a3, a4, 20);
  n77 = sub_11CAC(v6, a2, a3, a4, 0);
  while ( a5 != dword_53AB1 )
  {
    if ( a5 >= dword_53AB1 )
      sub_11BFA(n77, a2, a3, a4);
    else
      sub_11C59(n77, a2, a3, a4);
    LOWORD(n77) = sub_4E381();
  }
  while ( a6 != dword_53AB5 )
  {
    if ( a6 >= dword_53AB5 )
      sub_11B9B(n77, a2, a3, a4);
    else
      sub_11B48(n77, a2, a3, a4);
    LOWORD(n77) = sub_4E381();
  }
  JUMPOUT(0x12CE6);
}
