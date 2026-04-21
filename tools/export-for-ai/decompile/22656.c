/*
 * func-name: sub_22656
 * func-address: 0x22656
 * callers: 0x22253
 * callees: 0x11eb0, 0x17aa9, 0x22046, 0x3702f, 0x3771c
 */

int __fastcall sub_22656(__int32 a1, int a2, int a3, int a4, int a5, int a6, int a7, char *a8, int n192)
{
  int result; // eax
  int n10; // ebx
  int v11; // esi
  __int64 v12; // rax

  result = sub_3702F(a1, a2, a3, a4, 44);
  for ( n10 = 0; n10 < 10; ++n10 )
  {
    v11 = dword_53A6D + *(_DWORD *)(dword_53A6D + 4 * n10 + 6);
    v12 = memmove(n655360_0, a7, (char *)&loc_2567F + 1);
    sub_22046(v12, SHIDWORD(v12), a4, n10, n192, a7, a8, n192, 11, 0, 192, v11);
    LODWORD(v12) = sub_11EB0(n655360_0 + 32904, SHIDWORD(v12), n10, a4, 656644, 320, n655360_0 + 32904, 456, 312, 192);
    result = sub_17AA9(v12, SHIDWORD(v12), n10, a4, 1);
  }
  return result;
}
