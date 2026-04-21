/*
 * func-name: sub_21EB1
 * func-address: 0x21eb1
 * callers: 0x21ad9, 0x21b99, 0x2211c, 0x22153
 * callees: 0x11cac, 0x11eb0, 0x11eee, 0x22046, 0x3702f, 0x3706e, 0x3771c, 0x3776e, 0x3790a
 */

void __fastcall sub_21EB1(
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
        int a12)
{
  int v12; // esi
  int v13; // ebp
  int v14; // edi
  __int64 v15; // rax
  int n9; // ebx
  int v17; // esi
  int n3; // ebx
  int retaddr; // [esp+18h] [ebp+0h]

  sub_3702F(a1, a2, a3, a4, 52);
  v12 = a5;
  v13 = 24 * n2_1 + 16;
  v15 = malloc((char *)&loc_2567F + 1);
  v14 = v15;
  sub_11EEE(v15 + 32904, SHIDWORD(v15), a3, a4, v15 + 32904, 456, 13, 8, dword_53AA9, dword_53AAD);
  for ( n9 = 9; n9 > 0; --n9 )
  {
    HIDWORD(v15) = dword_53A6D;
    retaddr = dword_53A6D + *(_DWORD *)(dword_53A6D + 4 * n9 + 6);
    memmove(n655360_0, v14, (char *)&loc_2567F + 1);
    sub_22046(a5, v13, v12, 0, 192, retaddr);
    sub_11EB0(n655360_0 + 32904, SHIDWORD(v15), n9, a4, 656644, 320, n655360_0 + 32904, 456, 312, 192);
    v12 += a12;
    j___delay(5);
  }
  j___delay(200);
  v17 = v12 - a12;
  for ( n3 = 3; n3 < 10; ++n3 )
  {
    HIDWORD(v15) = dword_53A6D;
    retaddr = dword_53A6D + *(_DWORD *)(dword_53A6D + 4 * n3 + 6);
    memmove(n655360_0, v14, (char *)&loc_2567F + 1);
    sub_22046(a5, v13, v17, 0, 192, retaddr);
    sub_11EB0(n655360_0 + 32904, SHIDWORD(v15), n3, a4, 656644, 320, n655360_0 + 32904, 456, 312, 192);
    j___delay(5);
  }
  LODWORD(v15) = free(v14);
  sub_11CAC(v15, SHIDWORD(v15), n3, a4, 0);
  j___delay(200);
  JUMPOUT(0x10B43);
}
