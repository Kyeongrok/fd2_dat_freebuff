/*
 * func-name: sub_15311
 * func-address: 0x15311
 * callers: 0x13a9f, 0x14ef0
 * callees: 0x11cac, 0x12cea, 0x12d7b, 0x14818, 0x1aa1d, 0x1b653, 0x1d4cb, 0x1d4f6, 0x1db65, 0x21206, 0x2134b, 0x21364, 0x2137d, 0x21396, 0x21449, 0x21462, 0x2147b, 0x21494, 0x214ad, 0x21527, 0x2185f, 0x21a9e, 0x21ad9, 0x21b99, 0x2211c, 0x22153, 0x2218a, 0x226ea, 0x2282f, 0x22960, 0x22a85, 0x22bc6, 0x22be1, 0x22c04, 0x22cbf, 0x22e41, 0x22ef6, 0x22f37, 0x230f2, 0x231bc, 0x231f9, 0x23296, 0x232e8, 0x234bb, 0x235bc, 0x235f9, 0x23790, 0x237d5, 0x2389f, 0x238dc, 0x239bd, 0x23a0a, 0x23b5f, 0x23cd5, 0x23e39, 0x23e74, 0x240fa, 0x244b6, 0x24754, 0x24c1e, 0x24df2, 0x24e80, 0x250cc, 0x25464, 0x2548c, 0x25757, 0x2ff01, 0x3231b, 0x32d18, 0x32e8c, 0x32fb2, 0x33049, 0x3314b, 0x33169, 0x33219, 0x3327d, 0x3332b, 0x33367, 0x333f5, 0x3346b, 0x3347c, 0x334d9, 0x335a0, 0x335aa, 0x335da, 0x33674, 0x3367e, 0x336a0, 0x338c4, 0x3396a, 0x33aae, 0x33af1, 0x33c9d, 0x33dba, 0x33e3c, 0x3702f, 0x3790a, 0x4df4c, 0x4e866
 */

int __fastcall sub_15311(__int32 a1, int a2, int a3, int a4, int a5, int a6)
{
  __int32 v6; // eax
  __int32 v7; // esi
  int n2; // edi
  int n30_1; // eax
  int n30; // edi
  __int32 v11; // eax
  int v12; // eax
  int v13; // eax
  __int32 v14; // esi
  int v15; // eax
  __int32 v16; // eax
  unsigned __int8 v18[32]; // [esp+0h] [ebp-3Ch] BYREF
  _BYTE v19[12]; // [esp+20h] [ebp-1Ch] BYREF
  int n30_2; // [esp+2Ch] [ebp-10h]
  int v21; // [esp+38h] [ebp-4h]

  sub_3702F(a1, a2, a3, a4, 88);
  v21 = a3;
  v6 = sub_4E866(n11);
  v7 = v6;
  if ( a6 )
  {
    n2 = *(unsigned __int8 *)(v6 + 6);
  }
  else
  {
    v6 = *(unsigned __int8 *)(v6 + 6);
    n2 = v6 == 0;
  }
  if ( n6_3 < 6 )
    return 0;
  sub_12D7B(v6, a2, a3, a4, a5);
  sub_14818((__int32)v18, a2, a3, a4, dword_53C27, dword_53C2B, (int)v18, *(unsigned __int8 *)(v7 + 4), 0, n2);
  n30 = n30_1;
  n30_2 = n30_1;
  sub_4DF4C((unsigned __int8 *)dword_53A51);
  j___delay(200);
  n6_5 = *(unsigned __int8 *)(v7 + 4) + 2;
  sub_12CEA(n6_5, a2, a3, a4, dword_53C27, dword_53C2B);
  n6_5 = 0;
  v12 = sub_11CAC(v11, a2, a3, a4, 0);
  if ( n11 >= 10 || (v12 = (unsigned __int8)byte_53AF9, byte_53AF9) )
  {
    sub_1D4CB(v12, a2, a3, a4);
    v13 = funcs_1541F[n11](a5, n30_2, (int)v18);
    sub_1D4F6(v13);
  }
  else
  {
    sub_2FF01((__int32)v18, a2, a3, a4, a5, n11, n30, v18);
  }
  v14 = sub_1B653(v19);
  v15 = sub_11CAC(v14, a2, a3, a4, 0);
  sub_1DB65(v15);
  v16 = sub_1AA1D(dword_53C4B, v14, v19);
  sub_11CAC(v16, a2, a3, a4, 0);
  dword_53EC8 = 0;
  n6_5 = 0;
  return 1;
}
