/*
 * func-name: sub_11EEE
 * func-address: 0x11eee
 * callers: 0x11cac, 0x12eaa, 0x1300d, 0x13185, 0x13315, 0x1366a, 0x1741c, 0x17898, 0x18b84, 0x197e5, 0x19953, 0x1b1e7, 0x1cb94, 0x1db65, 0x1e611, 0x1f30a, 0x2189a, 0x21eb1, 0x22253, 0x24618, 0x24b4d, 0x32999
 * callees: 0x11eb0, 0x24d22, 0x3702f, 0x4e016, 0x4e22a, 0x4eee0
 */

void __fastcall sub_11EEE(__int32 a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int n462; // ebx
  int v11; // esi
  char *dst; // edi
  int i; // ebp
  int v14; // eax
  int v15; // ebx
  char *src; // eax
  char v17; // al
  int v18; // [esp+0h] [ebp-18h]
  int v19; // [esp+4h] [ebp-14h]

  sub_3702F(a1, a2, a3, a4, 52);
  if ( MEMORY[0x46C] != dword_53A00 )
  {
    LOBYTE(dword_53A40) = dword_53A40 ^ 1;
    dword_53A00 = MEMORY[0x46C];
  }
  switch ( n17 )
  {
    case 9:
    case 24:
    case 25:
    case 28:
    case 29:
      if ( MEMORY[0x46C] != dword_539F8 )
      {
        sub_4EEE0(dword_53AFF, dword_53B03, dword_539FC);
        dword_539F8 = MEMORY[0x46C];
        if ( ++dword_539FC == 16 )
          dword_539FC = 0;
      }
      sub_11EB0(
        dword_53AED + a5 + dword_53AF5 + 456 * dword_53AF1,
        dword_53AED + a5 + dword_53AF5,
        a3,
        a4,
        dword_53AED + a5 + dword_53AF5 + 456 * dword_53AF1,
        a6,
        dword_53B03,
        320,
        312,
        192);
      break;
    case 17:
    case 21:
    case 22:
    case 27:
      if ( n17 == 17 || n17 == 27 )
        n462 = 462;
      else
        n462 = 408;
      sub_11EB0(
        456 * dword_53AF1 + dword_53AF5 + dword_53AED + a5,
        456 * dword_53AF1,
        n462,
        a4,
        456 * dword_53AF1 + dword_53AF5 + dword_53AED + a5,
        a6,
        3 * a9 + dword_53AFF + 2 * n462 * a10 + dword_53B07 / 2 + n462 * (dword_53B0B / 3),
        n462,
        312,
        192);
      break;
    case 23:
      if ( MEMORY[0x46C] != dword_539F8 )
      {
        sub_24D22(0);
        dword_539F8 = MEMORY[0x46C];
      }
      sub_11EB0(
        dword_53AED + a5 + dword_53AF5 + 456 * dword_53AF1,
        dword_53AED + a5 + dword_53AF5,
        a3,
        a4,
        dword_53AED + a5 + dword_53AF5 + 456 * dword_53AF1,
        a6,
        dword_53AFF,
        312,
        312,
        192);
      break;
  }
  if ( dword_51A93 == -1 )
  {
    if ( MEMORY[0x46C] - dword_539F4 > 2 || MEMORY[0x46C] < dword_539F4 )
    {
      if ( ++dword_53C1F == 20 )
        dword_53C1F = 0;
      dword_539F4 = MEMORY[0x46C];
    }
  }
  else
  {
    dword_53C1F = dword_51A93;
  }
  v19 = dword_53A6D + *(_DWORD *)(dword_53A6D + 4 * (unsigned __int8)byte_51A97[dword_53C1F] + 6);
  v18 = 0;
LABEL_34:
  if ( v18 >= a8 )
    JUMPOUT(0x10B46);
  v11 = dword_53A51 + 4 * (a9 + dword_53AC1 * (a10 + v18)) + 4;
  dst = (char *)(24 * a6 * v18 + a5);
  for ( i = 0; ; ++i )
  {
    if ( i >= a7 )
    {
      ++v18;
      goto LABEL_34;
    }
    v15 = *(_WORD *)v11 & 0x3FF;
    v17 = *(_BYTE *)(4 * v15 + dword_53A69);
    if ( (v17 & 8) != 0 )
      break;
    if ( (v17 & 0x10) != 0 )
    {
      v14 = dword_53C0B / 2;
LABEL_47:
      v15 += v14;
      goto LABEL_40;
    }
    if ( (v17 & 4) != 0 )
      v15 += dword_53A40;
LABEL_40:
    src = (char *)(dword_53A5D + *(_DWORD *)(dword_53A5D + 4 * v15 + 6));
    if ( *(unsigned __int8 *)(v11 + 3) == 255 )
      sub_4E22A(src, dst, a6);
    else
      sub_4E016(src, dst, a6, v19);
    v11 += 4;
    dst += 24;
  }
  v14 = 2 * dword_53A40;
  goto LABEL_47;
}
