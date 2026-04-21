/*
 * func-name: sub_1B653
 * func-address: 0x1b653
 * callers: 0x15311
 * callees: 0x3702f, 0x3771c
 */

void __fastcall sub_1B653(__int32 a1, int a2, int a3, int a4, int a5)
{
  int v5; // esi
  int n6; // ebx
  int v7; // eax

  sub_3702F(a1, a2, a3, a4, 28);
  v5 = 0;
  for ( n6 = 0; n6 < n6_0; ++n6 )
  {
    v7 = dword_53A45 + 80 * n6;
    if ( (*(_BYTE *)(v7 + 5) & 1) == 0 && *(_BYTE *)(v7 + 49) == 3 && !*(_WORD *)(v7 + 64) )
      memmove(a5 + 3 * v5++, v7 + 49, 3);
  }
  JUMPOUT(0x1B64D);
}
