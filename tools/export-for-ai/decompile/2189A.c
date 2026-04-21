/*
 * func-name: sub_2189A
 * func-address: 0x2189a
 * callers: 0x15055, 0x2185f, 0x21a9e, 0x24754
 * callees: 0x11cac, 0x11eb0, 0x11eee, 0x127a9, 0x219ad, 0x3702f, 0x3706e, 0x3771c, 0x3776e
 */

void __fastcall sub_2189A(
        __int32 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13)
{
  int v14; // ebp
  __int64 v15; // rax
  int n10; // ebx
  int v17; // edi
  void *retaddr; // [esp+18h] [ebp+0h]

  sub_3702F(a1, a2, a3, a4, 56);
  v15 = malloc((char *)&loc_2567F + 1);
  v14 = v15;
  sub_11EEE(v15 + 32904, SHIDWORD(v15), a3, a4, v15 + 32904, 456, 13, 8, dword_53AA9, dword_53AAD);
  for ( n10 = 0; n10 < 10; ++n10 )
  {
    HIDWORD(v15) = dword_53A6D;
    v17 = dword_53A6D + *(_DWORD *)(dword_53A6D + 4 * n10 + 6);
    memmove(n655360_0, v14, (char *)&loc_2567F + 1);
    LODWORD(v15) = sub_219AD(retaddr, a5, a6, 12, 0, 192, v17);
    sub_127A9(v15, SHIDWORD(v15), n10, a4);
    sub_11EB0(n655360_0 + 32904, SHIDWORD(v15), n10, a4, 656644, 320, n655360_0 + 32904, 456, 312, 192);
    a6 += a13;
  }
  LODWORD(v15) = free(v14);
  sub_11CAC(v15, SHIDWORD(v15), n10, a4, 0);
  JUMPOUT(0x10B43);
}
