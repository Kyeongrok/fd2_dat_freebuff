/*
 * func-name: sub_1DF58
 * func-address: 0x1df58
 * callers: 0x20c6f, 0x21082, 0x2111a, 0x21548, 0x22721, 0x22997, 0x22aa8, 0x22c04
 * callees: 0x11eb0, 0x3702f, 0x3706e, 0x3771c, 0x3776e, 0x3790a, 0x4ebab
 */

void __fastcall sub_1DF58(__int32 a1, int a2, int a3, int a4)
{
  __int16 *v4; // ecx
  __int64 v5; // rax
  int n22; // ebp
  int i; // esi
  _BYTE dst_[28]; // [esp+0h] [ebp-30h] BYREF
  int v9; // [esp+1Ch] [ebp-14h]
  int v10; // [esp+2Ch] [ebp-4h]

  sub_3702F(a1, a2, a3, a4, 76);
  v10 = a3;
  qmemcpy(dst_, &src__21, 0x18u);
  v4 = 0;
  dst_[24] = unk_52044;
  if ( dword_53EC4 )
  {
    v5 = malloc((char *)&loc_2567F + 1);
    v9 = v5;
    memmove(v5, n655360_0, (char *)&loc_2567F + 1);
    for ( n22 = 0; n22 < 22; ++n22 )
    {
      memmove(n655360_0, v9, (char *)&loc_2567F + 1);
      for ( i = 0; i < dword_53EC4; ++i )
      {
        HIDWORD(v5) = (unsigned __int8)byte_53C6C[i];
        if ( byte_53C6C[i] )
        {
          LODWORD(v5) = dword_53A45 + 80 * (unsigned __int8)byte_53DFC[i];
          v4 = (__int16 *)(dword_53A81 + *(_DWORD *)(dword_53A81 + 4 * HIDWORD(v5) + 6));
          a3 = 10944 * (*(unsigned __int8 *)(v5 + 1) - dword_53AAD)
             + (unsigned __int8)byte_53D34[i]
             + n655360_0
             + 32904
             + 24 * (*(unsigned __int8 *)v5 - dword_53AA9);
          HIDWORD(v5) = i % 4;
          sub_4EBAB((_BYTE *)(a3 + 456 * ((unsigned __int8)dst_[i % 4 + n22] - 3)), v4, 456);
        }
      }
      sub_11EB0(n655360_0 + 32904, SHIDWORD(v5), a3, (int)v4, 656644, 320, n655360_0 + 32904, 456, 312, 192);
      j___delay(2);
    }
    free(v9);
    j___delay(500);
  }
  JUMPOUT(0x11452);
}
