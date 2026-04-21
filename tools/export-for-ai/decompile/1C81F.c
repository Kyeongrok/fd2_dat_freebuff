/*
 * func-name: sub_1C81F
 * func-address: 0x1c81f
 * callers: 0x1c75e, 0x22d1b, 0x2cf30
 * callees: 0x3702f, 0x4e84f, 0x4ebe3
 */

void __fastcall sub_1C81F(__int32 a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // esi
  int v7; // edi
  int v8; // ebp
  int v9; // edi
  int v10; // edx
  int v11; // [esp+0h] [ebp-18h]
  int v12; // [esp+20h] [ebp+8h]

  sub_3702F(a1, a2, a3, a4, 32);
  v6 = dword_53A45 + 80 * a5;
  v7 = *(unsigned __int16 *)(v6 + 64);
  v11 = *(unsigned __int16 *)(v6 + 66);
  v8 = a6 * (sub_4EBE3(9 * a6 / 10) % 100) / 1000 + 9 * a6 / 10;
  v9 = v7 - v8;
  if ( v9 < 0 )
    v9 = 0;
  *(_WORD *)(v6 + 64) = v9;
  if ( *(unsigned __int8 *)(v6 + 7) >= 0x44u )
  {
    v10 = *(unsigned __int8 *)(v6 + 33) * (unsigned __int8)sub_4E84F(*(unsigned __int8 *)(v6 + 7) - 68)[9];
    v12 = v10;
    if ( v9 )
      v12 = v8 * v10 / v11;
    dword_53EC8 += v12;
  }
  JUMPOUT(0x14230);
}
