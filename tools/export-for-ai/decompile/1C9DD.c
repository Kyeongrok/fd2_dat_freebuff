/*
 * func-name: sub_1C9DD
 * func-address: 0x1c9dd
 * callers: 0x20c6f
 * callees: 0x3702f, 0x4ebe3
 */

void __fastcall sub_1C9DD(__int32 a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // esi
  int v7; // edi
  int v8; // edi
  int v9; // [esp+0h] [ebp-14h]

  sub_3702F(a1, a2, a3, a4, 24);
  v6 = 80 * a5 + dword_53A45;
  v7 = *(unsigned __int16 *)(v6 + 68);
  v9 = *(unsigned __int16 *)(v6 + 70);
  v8 = a6 * (sub_4EBE3(9 * a6 / 10) % 100) / 1000 + 9 * a6 / 10 + v7;
  if ( v8 > v9 )
    LOWORD(v8) = v9;
  *(_WORD *)(v6 + 68) = v8;
  if ( *(unsigned __int8 *)(v6 + 7) < 0x4Bu )
    JUMPOUT(0x1C9C7);
  JUMPOUT(0x1C9D5);
}
