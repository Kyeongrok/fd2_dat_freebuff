/*
 * func-name: sub_1C4CC
 * func-address: 0x1c4cc
 * callers: 0x20c6f, 0x21082, 0x2111a, 0x211a4, 0x21227, 0x213b7, 0x21b18, 0x22721, 0x22866, 0x22997, 0x22af6, 0x22c04, 0x22d1b
 * callees: 0x11cac, 0x11eb0, 0x17aa9, 0x25a96, 0x3702f, 0x3706e, 0x3771c, 0x3776e, 0x4ebab
 */

int __fastcall sub_1C4CC(__int32 a1, int a2, int a3, int a4, int a5, int n9, int a7, int a8)
{
  int v8; // eax
  int v9; // ecx
  __int64 v10; // rax
  int n3; // edi
  int i; // esi
  _BYTE dst__1[36]; // [esp+0h] [ebp-84h] BYREF
  _BYTE dst__2[36]; // [esp+24h] [ebp-60h] BYREF
  _BYTE dst_[36]; // [esp+48h] [ebp-3Ch] BYREF
  int v17; // [esp+6Ch] [ebp-18h]
  __int16 *v18; // [esp+70h] [ebp-14h]
  int v19; // [esp+80h] [ebp-4h]

  v8 = sub_3702F(a1, a2, a3, a4, 160);
  v19 = a3;
  qmemcpy(dst_, &src__16, 0x20u);
  dst_[32] = unk_51F53;
  qmemcpy(dst__1, &src__17, 0x20u);
  dst__1[32] = unk_51F74;
  qmemcpy(dst__2, &src__18, 0x20u);
  v9 = 0;
  dst__2[32] = unk_51F95;
  sub_11CAC(v8, a2, a3, 0, 0);
  v10 = malloc((char *)&loc_2567F + 1);
  v17 = v10;
  if ( !(_DWORD)v10 )
    JUMPOUT(0x10056);
  memmove(v17, n655360_0, (char *)&loc_2567F + 1);
  for ( n3 = 0; n3 < (unsigned __int8)dst__1[n9]; ++n3 )
  {
    HIDWORD(v10) = dword_53AD1;
    v18 = (__int16 *)(dword_53AD1 + *(_DWORD *)(dword_53AD1 + 4 * (n3 + (unsigned __int8)dst_[n9]) + 6));
    memmove(n655360_0, v17, (char *)&loc_2567F + 1);
    for ( i = 0; i < a7; ++i )
    {
      LODWORD(v10) = dword_53A45 + 80 * *(unsigned __int8 *)(i + a8);
      HIDWORD(v10) = *(unsigned __int8 *)v10;
      a3 = *(unsigned __int8 *)(v10 + 1);
      if ( SHIDWORD(v10) >= dword_53AA9 - 1
        && SHIDWORD(v10) <= dword_51A87 + dword_53AA9
        && a3 >= dword_53AAD - 1
        && a3 <= dword_51A8B + dword_53AAD + 1 )
      {
        v9 = n655360_0 + 32904 + 24 * (HIDWORD(v10) - dword_53AA9);
        HIDWORD(v10) = 1216 * (a3 - dword_53AAD);
        sub_4EBAB((_BYTE *)(v9 + 10944 * (a3 - dword_53AAD) - 2736), v18, 456);
      }
    }
    LODWORD(v10) = sub_11EB0(n655360_0 + 32904, SHIDWORD(v10), a3, v9, 656644, 320, n655360_0 + 32904, 456, 312, 192);
    if ( n3 || !dst__2[n9] )
    {
      if ( n9 == 22 && n3 == 7 )
      {
        LODWORD(v10) = sub_25A96(dword_53B13, 3, 1);
      }
      else if ( n9 == 25 )
      {
        if ( n3 == 3 || n3 == 6 )
          LODWORD(v10) = sub_25A96(dword_53B13, 5, 1);
      }
      else if ( n9 == 18 && n3 == 4 )
      {
        LODWORD(v10) = sub_25A96(dword_53B13, 7, 1);
      }
      else if ( n9 == 19 )
      {
        if ( n3 == 3 || n3 == 6 )
          LODWORD(v10) = sub_25A96(dword_53B13, 8, 1);
      }
      else if ( n9 == 8 )
      {
        if ( n3 == 3 || n3 == 6 )
          LODWORD(v10) = sub_25A96(dword_53B13, 10, 1);
      }
      else if ( n9 == 9 && (n3 == 15 || n3 == 19) )
      {
        LODWORD(v10) = sub_25A96(dword_53B13, 15, 1);
      }
    }
    else
    {
      LODWORD(v10) = sub_25A96(dword_53B13, (unsigned __int8)dst__2[n9], 1);
    }
    sub_17AA9(v10, SHIDWORD(v10), a3, v9, 1);
  }
  LODWORD(v10) = free(v17);
  LODWORD(v10) = sub_11CAC(v10, SHIDWORD(v10), a3, v9, 0);
  return v10;
}
