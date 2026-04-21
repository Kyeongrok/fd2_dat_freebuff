/*
 * func-name: sub_19953
 * func-address: 0x19953
 * callers: 0x16f55, 0x190ac, 0x19df7, 0x1aa1d, 0x26152, 0x2670e, 0x2872b, 0x28cbd, 0x29300, 0x2a43e, 0x2aa00, 0x2af28
 * callees: 0x10620, 0x11eb0, 0x11eee, 0x127a9, 0x1297d, 0x3702f, 0x370f0, 0x3771c, 0x4e31c, 0x4ebe3, 0x4ebff, 0x4ec31, 0x4ed34
 */

void __fastcall sub_19953(__int32 a1, int a2, int a3, int a4)
{
  int v4; // eax
  int n30; // ebx
  int v6; // edx
  int v7; // ebp
  char *v8; // edi
  __int32 v9; // eax
  int n200; // esi
  __int32 v11; // eax
  int n86; // esi
  int n2; // esi
  __int32 v14; // eax
  int v15; // edx
  int v16; // eax
  int v18; // eax
  int n86_1; // esi
  int n200_1; // esi
  int n3; // esi
  int v22; // eax
  int v23; // ebx
  _DWORD v24[2]; // [esp+0h] [ebp-28h]
  int v25; // [esp+8h] [ebp-20h]
  int v26; // [esp+Ch] [ebp-1Ch]
  int n4; // [esp+10h] [ebp-18h]
  char v28; // [esp+14h] [ebp-14h]
  int v29; // [esp+24h] [ebp-4h]

  v4 = sub_3702F(a1, a2, a3, a4, 68);
  v29 = a3;
  v24[0] = unk_51EED;
  v24[1] = unk_51EF1;
  v28 = 0;
  n3_3 = 0;
  n30 = 30;
  v6 = sub_4EBE3(v4) % 30;
  v7 = v6 + 2;
  v8 = (char *)&loc_1A599 + dword_53A49 + 3;
  v9 = memmove(::n30, 655360, 64000);
  v25 = 0;
  v26 = 0;
  for ( n200 = 0; n200 < 200; ++n200 )
  {
    v6 = dword_53A49 + 32900;
    v9 = memmove(dword_53A49 + 32900 + 456 * (n200 - 4), ::n30 + 320 * n200, 320);
  }
  if ( (unsigned int)dword_53A51 > 1 )
  {
    sub_1297D(v9, v6, 30, a4);
    sub_11EEE(dword_53A49 + 32904, v6, 30, a4, dword_53A49 + 32904, 456, 13, 8, dword_53AA9, dword_53AAD);
    sub_127A9(v11, v6, 30, a4);
  }
  for ( n4 = 0; n4 < 4; ++n4 )
  {
    n86 = 0;
    v25 -= 4;
    v26 += 4;
    while ( n86 < 86 )
    {
      n30 = ::n30;
      v6 = 456 * (n86 + 108);
      memmove(v6 + dword_53A49 + 32905, 320 * n86++ + ::n30 + 35845, 310);
    }
    for ( n2 = 0; n2 < 2; ++n2 )
    {
      n30 = n30_0;
      v6 = n30_0 + *(_DWORD *)(12 * v24[n2] + n30_0);
      sub_4ED34(&v8[*(&v25 + n2)], v6, 456);
    }
    sub_11EB0(dword_53A49 + 32904, v6, n30, a4, 656644, 320, dword_53A49 + 32904, 456, 312, 192);
  }
  while ( 1 )
  {
    while ( !sub_10620() )
    {
      sub_4E31C();
      if ( (unsigned int)(MEMORY[0x46C] - dword_53C17) >= 2 )
      {
        if ( ++dword_53C13 == 4 )
          dword_53C13 = 0;
        dword_53C17 = MEMORY[0x46C];
        if ( (unsigned int)dword_53A51 > 1 )
        {
          sub_1297D(MEMORY[0x46C], v6, n30, a4);
          sub_11EEE(dword_53A49 + 32904, v6, n30, a4, dword_53A49 + 32904, 456, 13, 8, dword_53AA9, dword_53AAD);
          sub_127A9(v14, v6, n30, a4);
        }
        if ( v28 )
        {
          v15 = *(unsigned __int8 *)DATO_DAT;
          if ( dword_53A51 )
            v16 = sub_4EC31(n1832 + ::n30, v15 + DATO_DAT, 320);
          else
            v16 = sub_4EBFF(n1832 + ::n30, v15 + DATO_DAT, 320);
          n30 = 30;
          v6 = sub_4EBE3(v16) % 30;
          v7 = v6 + 10;
          v28 = 0;
        }
        else if ( !v7-- )
        {
          v18 = *(_DWORD *)(DATO_DAT + 12) + DATO_DAT;
          if ( dword_53A51 )
            sub_4EC31(n1832 + ::n30, v18, 320);
          else
            sub_4EBFF(n1832 + ::n30, v18, 320);
          v28 = 1;
        }
        if ( (unsigned int)dword_53A51 <= 1 )
        {
          for ( n200_1 = 0; n200_1 < 200; ++n200_1 )
          {
            v6 = 456 * (n200_1 - 4);
            memmove(v6 + dword_53A49 + 32900, 320 * n200_1 + ::n30, 320);
          }
        }
        else
        {
          for ( n86_1 = 0; n86_1 < 86; ++n86_1 )
          {
            v6 = 456 * (n86_1 + 108);
            memmove(v6 + dword_53A49 + 32905, ::n30 + 35845 + 320 * n86_1, 310);
          }
        }
        for ( n3 = 0; n3 < 2; ++n3 )
        {
          v23 = 3 * v24[n3];
          if ( n3 == n3_3 )
          {
            v6 = dword_53C13 >> 31;
            v23 += dword_53C13 / 2;
          }
          v22 = v23;
          n30 = n30_0;
          sub_4ED34(&v8[*(&v25 + n3)], n30_0 + *(_DWORD *)(n30_0 + 4 * v22), 456);
        }
        sub_11EB0(dword_53A49 + 32904, v6, n30, a4, 656644, 320, dword_53A49 + 32904, 456, 312, 192);
      }
    }
    HIBYTE(::n3) = 16;
    int386(22, &::n3, &::n3);
    if ( HIBYTE(::n3) == 224 || HIBYTE(::n3) == 82 || HIBYTE(::n3) == 28 || HIBYTE(::n3) == 57 )
      break;
    switch ( HIBYTE(::n3) )
    {
      case 1u:
      case 0x53u:
        dword_53C13 = 0;
LABEL_57:
        JUMPOUT(0x13FCC);
      case 0x4Bu:
        n3_3 = 0;
        break;
      case 0x4Du:
        n3_3 = 1;
        break;
    }
  }
  dword_53C13 = 0;
  goto LABEL_57;
}
