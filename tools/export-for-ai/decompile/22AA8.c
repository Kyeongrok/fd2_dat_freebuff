/*
 * func-name: sub_22AA8
 * func-address: 0x22aa8
 * callers: 0x22a85
 * callees: 0x1ca89, 0x22af6, 0x3702f
 */

void __fastcall sub_22AA8(
        __int32 a1,
        int a2,
        int a3,
        int a4,
        unsigned __int8 *n6,
        int n20,
        int n30,
        unsigned __int8 *a8,
        int n37)
{
  int v9; // eax
  __int32 v10; // eax

  v9 = sub_3702F(a1, a2, a3, a4, 24);
  dword_53EC4 = 0;
  sub_1CA89(v9, a2, a3, a4, (int)n6, n20);
  v10 = sub_22AF6(n6, n20, n30, a8, n37);
  if ( dword_53EC4 )
    sub_1DF58(v10, a2, a3, a4);
}
