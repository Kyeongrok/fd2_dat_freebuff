/*
 * func-name: sub_1CD17
 * func-address: 0x1cd17
 * callers: 0x20c6f, 0x21227
 * callees: 0x11eb0, 0x17aa9, 0x3702f, 0x3706e, 0x3771c, 0x4df84
 */

void __fastcall sub_1CD17(__int32 a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int n8; // ecx
  __int64 v9; // rax
  int n10; // esi
  int i; // edi
  int v12; // ebx
  int v13; // ebx
  _BYTE dst_[28]; // [esp+0h] [ebp-38h] BYREF
  __int16 v15; // [esp+1Ch] [ebp-1Ch]
  int v16; // [esp+20h] [ebp-18h]
  int v17; // [esp+24h] [ebp-14h]
  int v18; // [esp+34h] [ebp-4h]

  sub_3702F(a1, a2, a3, a4, 84);
  v18 = a3;
  qmemcpy(dst_, &src__20, sizeof(dst_));
  n8 = 0;
  v15 = unk_52022;
  v9 = malloc((char *)&loc_2567F + 1);
  v16 = v9;
  memmove(v9, n655360_0, (char *)&loc_2567F + 1);
  for ( n10 = 0; n10 < 10; ++n10 )
  {
    memmove(n655360_0, v16, (char *)&loc_2567F + 1);
    for ( i = 0; i < a7; ++i )
    {
      LODWORD(v9) = dword_53A45 + 80 * *(unsigned __int8 *)(i + a8);
      n8 = *(unsigned __int8 *)v9;
      HIDWORD(v9) = *(unsigned __int8 *)(v9 + 1);
      a3 = *(unsigned __int8 *)(v9 + 2);
      if ( n8 >= dword_53AA9 - 1
        && n8 <= dword_51A87 + dword_53AA9
        && SHIDWORD(v9) >= dword_53AAD - 1
        && SHIDWORD(v9) <= dword_51A8B + dword_53AAD + 1 )
      {
        v17 = 10944 * (HIDWORD(v9) - dword_53AAD) + n655360_0 + 32904 + 24 * (n8 - dword_53AA9) - 2736;
        v13 = 12 * a3;
        if ( n3_1 == 3 )
          v12 = v13 + 2;
        else
          v12 = n3_1 + v13;
        a3 = dword_53A61 + *(_DWORD *)(dword_53A61 + 4 * v12);
        n8 = 8;
        HIDWORD(v9) = n10 % 8;
        sub_4DF84(a3, v17, 456, (unsigned __int8)dst_[a6], 7 - n10 % 8);
      }
    }
    LODWORD(v9) = sub_11EB0(n655360_0 + 32904, SHIDWORD(v9), a3, n8, 656644, 320, n655360_0 + 32904, 456, 312, 192);
    sub_17AA9(v9, SHIDWORD(v9), a3, n8, 1);
  }
  sub_11EB0(v16 + 32904, SHIDWORD(v9), a3, n8, 656644, 320, v16 + 32904, 456, 312, 192);
  JUMPOUT(0x1C4BC);
}
