/*
 * func-name: sub_1C2DA
 * func-address: 0x1c2da
 * callers: 0x20c6f, 0x21082, 0x211a4, 0x21b18, 0x22721, 0x22866, 0x22997, 0x22af6, 0x22c04, 0x22d1b, 0x250cc
 * callees: 0x11eb0, 0x17aa9, 0x25a96, 0x3702f, 0x3706e, 0x3771c, 0x3776e, 0x4e127
 */

int __fastcall sub_1C2DA(__int32 a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // ecx
  __int64 v9; // rax
  int i; // esi
  int v11; // ebx
  int n5; // esi
  _BYTE dst_[28]; // [esp+0h] [ebp-38h] BYREF
  __int16 v15; // [esp+1Ch] [ebp-1Ch]
  int v16; // [esp+20h] [ebp-18h]
  int v17; // [esp+24h] [ebp-14h]
  int v18; // [esp+34h] [ebp-4h]

  sub_3702F(a1, a2, a3, a4, 84);
  v18 = a3;
  qmemcpy(dst_, &src__15, sizeof(dst_));
  v8 = 0;
  v15 = unk_51F31;
  sub_25A96(dword_53B13, 1, 1);
  v9 = malloc((char *)&loc_2567F + 1);
  v17 = v9;
  memmove(v9, n655360_0, (char *)&loc_2567F + 1);
  for ( i = 0; i < a7; ++i )
  {
    LODWORD(v9) = dword_53A45 + 80 * *(unsigned __int8 *)(i + a8);
    HIDWORD(v9) = *(unsigned __int8 *)v9;
    v8 = *(unsigned __int8 *)(v9 + 1);
    a3 = *(unsigned __int8 *)(v9 + 2);
    if ( SHIDWORD(v9) >= dword_53AA9 - 1
      && SHIDWORD(v9) <= dword_51A87 + dword_53AA9
      && v8 >= dword_53AAD - 1
      && v8 <= dword_51A8B + dword_53AAD + 1 )
    {
      v16 = 24 * (HIDWORD(v9) - dword_53AA9) + n655360_0 + 32904;
      v8 = 10944 * (v8 - dword_53AAD) + v16 - 2736;
      v11 = 12 * a3;
      if ( n3_1 == 3 )
        a3 = v11 + 2;
      else
        a3 = n3_1 + v11;
      HIDWORD(v9) = *(_DWORD *)(dword_53A61 + 4 * a3) + dword_53A61;
      sub_4E127(HIDWORD(v9), v8, 456);
    }
  }
  for ( n5 = 0; ; ++n5 )
  {
    LODWORD(v9) = v17 + 32904;
    if ( n5 >= 5 )
      break;
    LODWORD(v9) = sub_11EB0(v9, SHIDWORD(v9), a3, v8, 656644, 320, v17 + 32904, 456, 312, 192);
    sub_17AA9(v9, SHIDWORD(v9), a3, v8, 1);
    LODWORD(v9) = sub_11EB0(n655360_0 + 32904, SHIDWORD(v9), a3, v8, 656644, 320, n655360_0 + 32904, 456, 312, 192);
    sub_17AA9(v9, SHIDWORD(v9), a3, v8, 1);
  }
  sub_11EB0(v9, SHIDWORD(v9), a3, v8, 656644, 320, v17 + 32904, 456, 312, 192);
  return free(v17);
}
