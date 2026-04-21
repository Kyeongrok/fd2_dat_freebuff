/*
 * func-name: sub_17FC0
 * func-address: 0x17fc0
 * callers: 0x17eef, 0x2b4fb
 * callees: 0x15f84, 0x1685c, 0x1875d, 0x18795, 0x187d6, 0x3702f
 */

void __fastcall sub_17FC0(__int32 a1, int a2, int a3, int a4, int a5, unsigned __int8 *a6)
{
  int v6; // ebx
  int v7; // esi
  int v8; // ebp
  unsigned __int8 n119; // al
  unsigned __int8 n119_1; // al
  unsigned __int8 n119_2; // al
  int n119_3; // esi
  int n53; // esi
  int n3; // esi
  int v15; // [esp+0h] [ebp-18h]
  int v16; // [esp+4h] [ebp-14h]

  sub_3702F(a1, a2, a3, a4, 64);
  v6 = 80 * a5 + dword_53A45;
  v16 = *(__int16 *)(v6 + 64);
  v7 = *(__int16 *)(v6 + 66);
  v15 = *(__int16 *)(v6 + 68);
  v8 = *(__int16 *)(v6 + 70);
  sub_18795(a6 + 10758, 320, 23, v16, v7);
  sub_18795(a6 + 16838, 320, 26, v15, v8);
  sub_1875D(a6 + 13387, 320, v16, v7, 3);
  sub_1875D(a6 + 13413, 320, v7, v7, 3);
  sub_1875D(a6 + 19147, 320, v15, v8, 3);
  sub_1875D(a6 + 19173, 320, v8, v8, 3);
  sub_187D6((int)(a6 + 10717), 320, *(unsigned __int8 *)(v6 + 33), 42, 2);
  sub_187D6((int)(a6 + 14237), 320, *(unsigned __int8 *)(v6 + 60), 42, 2);
  sub_187D6((int)(a6 + 17757), 320, *(unsigned __int8 *)(v6 + 59), 42, 2);
  if ( *(_BYTE *)(v6 + 34) )
    n119 = 119;
  else
    n119 = 42;
  sub_187D6((int)(a6 + 21597), 320, *(__int16 *)(v6 + 72), n119, 3);
  if ( *(_BYTE *)(v6 + 35) )
    n119_1 = 119;
  else
    n119_1 = 42;
  sub_187D6((int)(a6 + 25437), 320, *(__int16 *)(v6 + 74), n119_1, 3);
  sub_187D6((int)(a6 + 17717), 320, *(__int16 *)(v6 + 62), 42, 3);
  if ( *(_BYTE *)(v6 + 36) )
    n119_2 = 119;
  else
    n119_2 = 42;
  n119_3 = n119_2;
  sub_187D6((int)(a6 + 21557), 320, *(__int16 *)(v6 + 76), n119_2, 3);
  sub_187D6((int)(a6 + 25397), 320, *(__int16 *)(v6 + 78), n119_3, 3);
  sub_15F84(
    a6,
    *(unsigned __int8 *)(v6 + 8) + 1,
    a5,
    a4,
    v6,
    arg0,
    *(unsigned __int8 *)(v6 + 8) + 1,
    (int)(a6 + 4259),
    320,
    205,
    76,
    0,
    0,
    0);
  sub_15F84(
    a6,
    *(unsigned __int8 *)(v6 + 31) + 140,
    a5,
    a4,
    v6,
    arg0,
    *(unsigned __int8 *)(v6 + 31) + 140,
    (int)(a6 + 4371),
    320,
    205,
    76,
    0,
    0,
    0);
  sub_15F84(
    a6,
    *(unsigned __int8 *)(v6 + 32) + 150,
    a5,
    a4,
    v6,
    arg0,
    *(unsigned __int8 *)(v6 + 32) + 150,
    (int)(a6 + 4411),
    320,
    205,
    76,
    0,
    0,
    0);
  n53 = 53;
  if ( !*(_BYTE *)(v6 + 6) )
    n53 = 54;
  sub_1685C((__int32)(a6 + 9701), a5, v6, a4, (int)(a6 + 9701), 320, dword_53A81, n53);
  for ( n3 = 0; n3 < 3; ++n3 )
  {
    if ( *(_BYTE *)(n3 + v6 + 37) )
      sub_1685C((__int32)&a6[35 * n3 + 21954], 35 * n3, v6, a4, (int)&a6[35 * n3 + 21954], 320, dword_53A81, n3 + 55);
  }
  JUMPOUT(0x10B46);
}
