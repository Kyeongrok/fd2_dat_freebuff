/*
 * func-name: sub_2AF28
 * func-address: 0x2af28
 * callers: 0x26152, 0x2670e
 * callees: 0x11019, 0x15f84, 0x16559, 0x16886, 0x18409, 0x1956b, 0x197e5, 0x19953, 0x25a96, 0x25b45, 0x26996, 0x2b439, 0x2b4fb, 0x2b67f, 0x2b749, 0x2b777, 0x2b843, 0x33499, 0x3702f, 0x3706e, 0x37324, 0x3759c, 0x3771c, 0x3776e, 0x37910, 0x4e381, 0x4ebff
 */

int __fastcall sub_2AF28(__int32 a1, int a2, int a3, int a4)
{
  int n15; // ebp
  int v5; // edi
  int n9; // esi
  __int64 n15_1; // rax
  int n11; // ebx
  int n77; // ebx
  int n7; // ebx
  __int64 v11; // rax
  int v12; // ebx
  _BYTE v14[32]; // [esp+0h] [ebp-3Ch] BYREF
  int v15; // [esp+20h] [ebp-1Ch]
  int v16; // [esp+24h] [ebp-18h]
  int v17; // [esp+28h] [ebp-14h]
  int v18; // [esp+38h] [ebp-4h]

  sub_3702F(a1, a2, a3, a4, 100);
  v18 = a3;
  n15 = 15;
  v5 = 0;
  n9 = 0;
  memset(v14, 0, 30);
  if ( n17 > 26 )
    n15 = 19;
  dword_53C5B = malloc(64000);
  dword_53C5F = malloc(64000);
  v15 = malloc(64000);
  v17 = v15;
  n30 = malloc(64000);
  memmove(dword_53C5F, 655360, 64000);
  n15_1 = memmove(v15, dword_53C5F, 64000);
  sub_4EBFF(v15 + 2332, *(_DWORD *)(FDOTHER_DAT__5 + 86) + FDOTHER_DAT__5, 320);
  sub_4EBFF(v15 + 30085, *(_DWORD *)(FDOTHER_DAT__5 + 90) + FDOTHER_DAT__5, 320);
  sub_16886(v15 + 2245, SHIDWORD(n15_1), a3, a4, v15 + 2245, 320, FDOTHER_DAT__5, 137);
  LODWORD(n15_1) = ((_DWORD (__cdecl *)(int, int, _BYTE *, _DWORD))sub_2B4FB)(v15, n15, v14, 0);
  for ( n11 = 11; n11 >= 0; --n11 )
  {
    if ( n11 == 11 || n11 == 5 )
      LODWORD(n15_1) = sub_25A96(n15_1, SHIDWORD(n15_1), n11, a4, FDOTHER_DAT__1, 5, 1);
    LODWORD(n15_1) = sub_18409(n15_1, SHIDWORD(n15_1), n11, a4, n11, dword_53C5B, n30, dword_53C5F);
  }
  sub_4E381();
  do
  {
    LODWORD(n15_1) = sub_2B67F(v17, n15, v14, n9);
    n77 = n15_1;
    if ( (_DWORD)n15_1 == 1 )
      v5 = -1;
    if ( (_DWORD)n15_1 == 28 )
    {
      sub_25B45(28, SHIDWORD(n15_1), 28, a4, FDOTHER_DAT__1, 7, 1);
      v14[n9] ^= 1u;
      n77 = 77;
      LODWORD(n15_1) = sub_2B749(v14);
      if ( (_DWORD)n15_1 == n15 )
      {
        v5 = 1;
        LODWORD(n15_1) = sub_2B777(v14);
      }
    }
    if ( n77 == 75 )
    {
      LODWORD(n15_1) = sub_25A96(n15_1, SHIDWORD(n15_1), 75, a4, FDOTHER_DAT__1, 0, 1);
      if ( --n9 == -1 )
        n9 = n16_1 - 2;
    }
    if ( n77 == 77 )
    {
      sub_25A96(n15_1, SHIDWORD(n15_1), 77, a4, FDOTHER_DAT__1, 0, 1);
      ++n9;
      LODWORD(n15_1) = n16_1 - 1;
      if ( n9 == n16_1 - 1 )
        n9 ^= n15_1;
    }
    if ( n77 == 72 && n9 > 9 )
    {
      sub_25A96(n15_1, SHIDWORD(n15_1), 72, a4, FDOTHER_DAT__1, 0, 1);
      n9 -= 10;
    }
    if ( n77 == 80 && n9 < n16_1 - 11 )
    {
      sub_25A96(n16_1 - 11, SHIDWORD(n15_1), 80, a4, FDOTHER_DAT__1, 0, 1);
      n9 += 10;
    }
    ((void (__cdecl *)(int, int, _BYTE *, int))sub_2B4FB)(v17, n15, v14, n9);
    n15_1 = memmove(655360, n30, 64000);
  }
  while ( !v5 );
  for ( n7 = 0; n7 <= 11; ++n7 )
  {
    if ( !n7 || n7 == 7 )
      LODWORD(n15_1) = sub_25A96(n15_1, SHIDWORD(n15_1), n7, a4, FDOTHER_DAT__1, 6, 1);
    LODWORD(n15_1) = sub_18409(n15_1, SHIDWORD(n15_1), n7, a4, n7, dword_53C5B, n30, dword_53C5F);
  }
  v11 = memmove(655360, dword_53C5F, 64000);
  free(dword_53C5B);
  free(dword_53C5F);
  free(v17);
  LODWORD(v11) = free(n30);
  if ( v5 == 1 )
  {
    free(dword_53A61);
    v16 = fopen((int)aFdiconB24_5, (int)aRb_9); // "rb"
    dword_53BDF = 0;
    for ( n7 = 0; n7 < n16_1; ++n7 )
    {
      HIDWORD(v11) = n5_0;
      sub_11019(*(unsigned __int8 *)(n5_0 + 80 * n7 + 7), n5_0, n7, a4, *(unsigned __int8 *)(n5_0 + 80 * n7 + 7), v16);
    }
    LODWORD(v11) = fclose(v16);
    if ( n17 == 16 && (LODWORD(v11) = sub_33499(18), (_DWORD)v11) )
    {
      LODWORD(v11) = sub_2B439(n15, 18);
    }
    else if ( n17 == 17 || n17 == 19 || n17 > 25 )
    {
      LODWORD(v11) = sub_2B439(n15, 9);
    }
    else
    {
      switch ( n17 )
      {
        case 18:
          LODWORD(v11) = sub_2B439(n15, 22);
          break;
        case 20:
          LODWORD(v11) = sub_2B439(n15, 7);
          break;
        case 21:
        case 22:
          LODWORD(v11) = sub_2B439(n15, 19);
          break;
        case 25:
          LODWORD(v11) = sub_2B439(n15, 9);
          v5 = v11;
          if ( !(_DWORD)v11 )
            goto LABEL_56;
          LODWORD(v11) = sub_2B439(n15, 26);
          break;
        default:
          goto LABEL_56;
      }
    }
    v5 = v11;
  }
LABEL_56:
  if ( v5 != 1 )
    return 0;
  if ( n17 == 17 || n17 == 19 || n17 > 25 )
  {
    LODWORD(v11) = sub_2B843(9);
  }
  else
  {
    switch ( n17 )
    {
      case 20:
        LODWORD(v11) = sub_2B843(7);
        break;
      case 21:
      case 22:
        LODWORD(v11) = sub_2B843(19);
        break;
      case 25:
        sub_2B843(9);
        LODWORD(v11) = sub_2B843(26);
        break;
    }
  }
  LODWORD(v11) = sub_1956B(v11, SHIDWORD(v11), n7, a4, 75);
  sub_15F84((unsigned __int8 *)1, v11, SHIDWORD(v11), a4, n7, arg0, 658, 693535, 320, 205, 76, 74, 19, 1);
  sub_16559(v11, SHIDWORD(v11), n7, a4, 0);
  dword_53A51 = 1;
  LOWORD(v11) = sub_4E381();
  sub_19953(v11, SHIDWORD(v11), n7, a4);
  v12 = v11;
  dword_53A51 = 0;
  sub_197E5(v11, SHIDWORD(v11), v11, a4);
  sub_26996(v11, SHIDWORD(v11), v12, a4);
  if ( v12 == -1 || n3_3 )
    return 0;
  return v5;
}
