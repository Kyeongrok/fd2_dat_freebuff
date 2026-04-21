/*
 * func-name: sub_34366
 * func-address: 0x34366
 * callers: 0x33faf
 * callees: 0x344b4, 0x3702f, 0x3706e, 0x3771c, 0x3776e, 0x37b29
 */

int __fastcall sub_34366(
        __int32 a1,
        int a2,
        int a3,
        int a4,
        _BYTE *a5,
        int a6,
        int a7,
        _BYTE *a8,
        int n100,
        _BYTE *a10,
        int n2)
{
  int v11; // ebx
  unsigned __int8 v13; // [esp+0h] [ebp-18h] BYREF
  unsigned __int8 v14; // [esp+1h] [ebp-17h]
  unsigned __int8 n6; // [esp+4h] [ebp-14h]
  int v16; // [esp+14h] [ebp-4h]

  sub_3702F(a1, a2, a3, a4, 52);
  v16 = a3;
  v11 = malloc(64000);
  memmove(v11, a6, 64000);
  sprintf(&v13, "%02d", a7);
  v13 -= 48;
  v14 -= 48;
  sub_344B4(a5, v13 + 64, v11, 320, 150, 75);
  sub_344B4(a5, v14 + 64, v11, 320, 162, 75);
  for ( n6 = 0; n6 < 6u; ++n6 )
    sub_344B4(a5, (unsigned __int8)a8[n6], v11, 320, 25 * n6 + 86, 132);
  for ( n6 = 0; n6 < n100; ++n6 )
    sub_344B4(a5, (unsigned __int8)a10[n6], v11, 320, 32 * n6 + 116, 97);
  sub_344B4(FDOTHER_DAT__2, 0, v11, 320, 25 * n2 + 86, 132);
  memmove(655360, v11, 64000);
  return free(v11);
}
