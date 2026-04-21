/*
 * func-name: sub_22470
 * func-address: 0x22470
 * callers: 0x22253
 * callees: 0x11eb0, 0x127a9, 0x17aa9, 0x3702f, 0x3771c, 0x4ebab
 */

int __fastcall sub_22470(__int32 a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int result; // eax
  int n11; // esi
  __int16 *v9; // edi
  int v10; // ebx
  int v11; // edx
  _BYTE *v12; // eax
  int v13; // eax

  result = sub_3702F(a1, a2, a3, a4, 44);
  for ( n11 = 0; n11 < 11; ++n11 )
  {
    v9 = (__int16 *)(dword_53AD1 + *(_DWORD *)(dword_53AD1 + 4 * (n11 + 114) + 6));
    memmove(n655360_0, a7, (char *)&loc_2567F + 1);
    v10 = n655360_0 + 32904 + 24 * (a5 - dword_53AA9);
    v11 = 1216 * (a6 - dword_53AAD);
    v12 = (_BYTE *)(v10 + 10944 * (a6 - dword_53AAD) + 456);
    sub_4EBAB(v12, v9, 456);
    sub_127A9((__int32)v12, v11, v10, a4);
    v13 = sub_11EB0(n655360_0 + 32904, v11, v10, a4, 656644, 320, n655360_0 + 32904, 456, 312, 192);
    result = sub_17AA9(v13, v11, v10, a4, 1);
  }
  return result;
}
