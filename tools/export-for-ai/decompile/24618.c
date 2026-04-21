/*
 * func-name: sub_24618
 * func-address: 0x24618
 * callers: 0x244b6, 0x250cc, 0x25757, 0x336a0, 0x33af1, 0x33c9d
 * callees: 0x11df2, 0x11eb0, 0x11eee, 0x1d4cb, 0x22046, 0x25a96, 0x3702f, 0x3706e, 0x3771c, 0x3776e, 0x3790a
 */

void __fastcall sub_24618(
        __int32 a1,
        int a2,
        int a3,
        int a4,
        char *a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14)
{
  int v14; // eax
  int v16; // ebp
  __int64 v17; // rax
  int n9; // ebx
  int v19; // edi
  int n64; // ebx
  int n192; // [esp+18h] [ebp+0h]

  v14 = sub_3702F(a1, a2, a3, a4, 52);
  sub_1D4CB(v14, a2, a3, a4);
  v17 = malloc((char *)&loc_2567F + 1);
  v16 = v17;
  sub_11EEE(v17 + 32904, SHIDWORD(v17), a3, a4, v17 + 32904, 456, 13, 8, ::n9, n34);
  sub_25A96(FDOTHER_DAT__0, 11, 1);
  for ( n9 = 9; n9 > 0; --n9 )
  {
    v19 = dword_53A6D + *(_DWORD *)(dword_53A6D + 4 * n9 + 6);
    v17 = memmove(n655360_0, v16, (char *)&loc_2567F + 1);
    sub_22046(v17, SHIDWORD(v17), a4, n9, v16, v19, a5, n192, a7, 0, 192, v19);
    sub_11EB0(n655360_0 + 32904, SHIDWORD(v17), n9, a4, 656644, 320, n655360_0 + 32904, 456, 312, 192);
    a7 += a14;
    j___delay(5);
  }
  free(v16);
  LODWORD(v17) = j___delay(500);
  for ( n64 = 0; n64 < 64; n64 += 2 )
  {
    sub_11DF2(v17, SHIDWORD(v17), n64, a4, 0, 255, n64);
    LODWORD(v17) = j___delay(4);
  }
  sub_1D4CB(v17, SHIDWORD(v17), n64, a4);
  JUMPOUT(0x10B46);
}
