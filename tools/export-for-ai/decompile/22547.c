/*
 * func-name: sub_22547
 * func-address: 0x22547
 * callers: 0x22253
 * callees: 0x11eb0, 0x17aa9, 0x22046, 0x3702f, 0x3771c, 0x3790a, 0x4ebab
 */

void __fastcall sub_22547(
        __int32 a1,
        int a2,
        int a3,
        int n5_1,
        int a5,
        int a6,
        int a7,
        char *a8,
        int n192,
        __int16 *a10)
{
  int v10; // edx
  _BYTE *v11; // eax
  int n5; // ebx
  int v13; // edi
  int v14; // eax

  sub_3702F(a1, a2, a3, n5_1, 44);
  v10 = 1216 * (a6 - dword_53AAD);
  v11 = (_BYTE *)(24 * (a5 - dword_53AA9) + a7 + 32904 + 10944 * (a6 - dword_53AAD) + 456);
  sub_4EBAB(v11, a10, 456);
  for ( n5 = 5; n5 >= 0; --n5 )
  {
    v13 = dword_53A6D + *(_DWORD *)(dword_53A6D + 4 * n5 + 6);
    memmove(n655360_0, a7, (char *)&loc_2567F + 1);
    n5_1 = 5;
    v10 = n192 % 5;
    sub_22046(n5 * (n192 / 5), n192 % 5, 5, n5, a7, v13, a8, n192, 11, n5 * (n192 / 5), 192, v13);
    sub_11EB0(n655360_0 + 32904, n192 % 5, n5, 5, 656644, 320, n655360_0 + 32904, 456, 312, 192);
    v11 = (_BYTE *)j___delay(10);
  }
  v14 = sub_17AA9((__int32)v11, v10, n5, n5_1, 1);
  sub_17AA9(v14, v10, n5, n5_1, 1);
  JUMPOUT(0x1E5B9);
}
