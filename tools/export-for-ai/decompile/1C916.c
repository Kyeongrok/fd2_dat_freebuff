/*
 * func-name: sub_1C916
 * func-address: 0x1c916
 * callers: 0x1c8ed, 0x211a4, 0x22af6
 * callees: 0x3702f, 0x4ebe3
 */

void __fastcall sub_1C916(__int32 a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // esi
  int v7; // edi
  int v8; // edi
  int v9; // ecx
  int v10; // eax
  int v11; // [esp+0h] [ebp-14h]

  sub_3702F(a1, a2, a3, a4, 24);
  v6 = dword_53A45 + 80 * a5;
  v7 = *(unsigned __int16 *)(v6 + 64);
  v11 = *(unsigned __int16 *)(v6 + 66);
  v8 = a6 * (sub_4EBE3(9 * a6 / 10) % 100) / 1000 + 9 * a6 / 10 + v7;
  if ( v8 > v11 )
    v8 = v11;
  v9 = v8 - *(unsigned __int16 *)(v6 + 64);
  *(_WORD *)(v6 + 64) = v8;
  v10 = *(unsigned __int8 *)(v6 + 33);
  if ( *(unsigned __int8 *)(v6 + 32) > 8u && *(unsigned __int8 *)(v6 + 32) < 0x19u )
    v10 += 30;
  if ( *(unsigned __int8 *)(v6 + 7) < 0x4Bu )
    dword_53EC8 += v9 * 40 * v10 / v11;
  JUMPOUT(0x22BBE);
}
