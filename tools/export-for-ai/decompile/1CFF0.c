/*
 * func-name: sub_1CFF0
 * func-address: 0x1cff0
 * callers: 0x18d8c
 * callees: 0x115b6, 0x11cac, 0x12d7b, 0x14818, 0x149f8, 0x17eef, 0x18409, 0x1aa1d, 0x1b6b7, 0x1c269, 0x1ceed, 0x1d4cb, 0x1d4f6, 0x1d51d, 0x1d6c8, 0x1db65, 0x21206, 0x2134b, 0x21364, 0x2137d, 0x21396, 0x21449, 0x21462, 0x2147b, 0x21494, 0x214ad, 0x21527, 0x2185f, 0x21a9e, 0x21ad9, 0x21b99, 0x2211c, 0x22153, 0x2218a, 0x226ea, 0x2282f, 0x22960, 0x22a85, 0x22bc6, 0x22be1, 0x22c04, 0x22cbf, 0x22e41, 0x22ef6, 0x22f37, 0x230f2, 0x231bc, 0x231f9, 0x23296, 0x232e8, 0x234bb, 0x235bc, 0x235f9, 0x23790, 0x237d5, 0x2389f, 0x238dc, 0x239bd, 0x23a0a, 0x23b5f, 0x23cd5, 0x23e39, 0x23e74, 0x240fa, 0x244b6, 0x24754, 0x24c1e, 0x24df2, 0x24e80, 0x250cc, 0x25464, 0x2548c, 0x25757, 0x2ff01, 0x3231b, 0x32d18, 0x32e8c, 0x32fb2, 0x33049, 0x3314b, 0x33169, 0x33219, 0x3327d, 0x3332b, 0x33367, 0x333f5, 0x3346b, 0x3347c, 0x334d9, 0x335a0, 0x335aa, 0x335da, 0x33674, 0x3367e, 0x336a0, 0x338c4, 0x3396a, 0x33aae, 0x33af1, 0x33c9d, 0x33dba, 0x33e3c, 0x3702f, 0x3706e, 0x3771c, 0x3776e, 0x4df4c, 0x4e866
 */

int __fastcall sub_1CFF0(__int32 a1, int a2, int n6_1, int a4, unsigned __int8 *n6)
{
  __int64 n30; // rax
  int n11; // ebx
  int n30_1; // edi
  int n6_2; // ebx
  unsigned __int8 *v10; // esi
  unsigned __int8 *v11; // ebp
  int n30_2; // ebp
  int n30_3; // edi
  int n30_9; // eax
  int n30_7; // esi
  int n30_4; // eax
  int v17; // esi
  int n30_6; // eax
  int n30_11; // eax
  int n30_10; // eax
  int n4; // edi
  int n30_5; // eax
  int v23; // eax
  int n30_8; // ebx
  _DWORD n2_[25]; // [esp+0h] [ebp-E8h] BYREF
  _BYTE v26[100]; // [esp+64h] [ebp-84h] BYREF
  _BYTE v27[12]; // [esp+C8h] [ebp-20h] BYREF
  int v28; // [esp+D4h] [ebp-14h]
  int n6_3; // [esp+E4h] [ebp-4h]

  sub_3702F(a1, a2, n6_1, a4, 264);
  n6_3 = n6_1;
  dword_53C5B = malloc(64000);
  dword_53C5F = malloc(64000);
  n30 = malloc(64000);
  ::n30 = n30;
  memmove(dword_53C5F, 655360, 64000);
  LODWORD(n30) = memmove(::n30, dword_53C5F, 64000);
  LODWORD(n30) = sub_17EEF(n30, SHIDWORD(n30), n6_1, a4, (int)n6, ::n30);
  sub_1CEED(n30, SHIDWORD(n30), n6_1, a4, (int)n6, -1, ::n30);
  for ( n11 = 11; n11 >= 0; --n11 )
    LODWORD(n30) = sub_18409(n30, SHIDWORD(n30), n11, a4, n11, dword_53C5B, ::n30, dword_53C5F);
  n3_3 = 0;
  do
  {
    LODWORD(n30) = sub_1D51D(n6, n2_[0], n2_[1], n2_[2], n2_[3], n2_[4], n2_[5]);
    n30_1 = n30;
  }
  while ( !(_DWORD)n30 );
  for ( n6_2 = 0; n6_2 <= 11; ++n6_2 )
    LODWORD(n30) = sub_18409(n30, SHIDWORD(n30), n6_2, a4, n6_2, dword_53C5B, ::n30, dword_53C5F);
  memmove(655360, dword_53C5F, 64000);
  free(dword_53C5B);
  free(dword_53C5F);
  free(::n30);
  if ( n30_1 == -1 )
    return -1;
  sub_1C269((__int32)v27, SHIDWORD(n30), n6_2, a4, (int)n6, (int)v27);
  v10 = (unsigned __int8 *)sub_4E866((unsigned __int8)v27[n3_3]);
  v11 = v10;
  n6_5 = v10[4] + 2;
  LODWORD(n30) = v10[3];
  if ( v10[3] && (n6_2 = (unsigned __int8)v27[n3_3], n6_2 == 23) )
  {
    sub_14818((__int32)n2_, SHIDWORD(n30), v10[6], a4, dword_53AB1, dword_53AB5, (int)n2_, n30, 1, v10[6]);
    n6_2 = (int)n2_;
    sub_115B6(v10[6], SHIDWORD(n30), (int)n2_, a4, v10[6], n30, (unsigned __int8 *)n2_);
    n30_2 = n30;
    n30_3 = n30;
    sub_4DF4C((unsigned __int8 *)dword_53A51);
    sub_14818((__int32)n2_, SHIDWORD(n30), (int)n2_, a4, dword_53AB1, dword_53AB5, (int)n2_, v10[4], 0, v10[6]);
    n30_7 = n30_9;
    sub_4DF4C((unsigned __int8 *)dword_53A51);
    if ( n30_2 != -1 )
    {
      sub_115B6(LOBYTE(n2_[0]), SHIDWORD(n30), (int)n2_, a4, 6, LOBYTE(n2_[0]), 0);
      n30_3 = n30_4;
    }
    if ( n30_3 != -1 )
    {
      dword_51CF9 = dword_53AB1;
      dword_51CFD = dword_53AB5;
      n6_5 = 0;
      sub_12D7B(dword_53AB5, SHIDWORD(n30), (int)n2_, a4, (int)n6);
      n6_5 = 1;
    }
  }
  else if ( !v10[3] || (n6_2 = (unsigned __int8)v27[n3_3], n6_2 == 23) )
  {
    LODWORD(n30) = n6_5 - 2;
    n6_5 = 1;
    sub_14818((__int32)n2_, SHIDWORD(n30), n6_2, a4, dword_53AB1, dword_53AB5, (int)n2_, n30, 0, 0);
    n30_7 = n30_10;
    n4 = 4;
    if ( !n30_10 )
      n4 = 5;
    sub_115B6((__int32)n2_, SHIDWORD(n30), n6_2, a4, n4, 0, (unsigned __int8 *)n2_);
    n30_3 = n30_5;
  }
  else
  {
    sub_14818((__int32)n2_, SHIDWORD(n30), v10[6], a4, dword_53AB1, dword_53AB5, (int)n2_, n30, 0, v10[6]);
    v17 = dword_53AB1;
    v28 = dword_53AB5;
    n6_2 = (int)n2_;
    sub_115B6(v11[6], SHIDWORD(n30), (int)n2_, a4, v11[6], n30, (unsigned __int8 *)n2_);
    n30_3 = n30_6;
    sub_4DF4C((unsigned __int8 *)dword_53A51);
    if ( v27[n3_3] == 30 )
      sub_149F8((__int32)n2_, SHIDWORD(n30), (int)n2_, a4, dword_53AB1, dword_53AB5, (int)n2_, v17, v28, v11[3] - 16, 1);
    else
      sub_14818((__int32)n2_, SHIDWORD(n30), (int)n2_, a4, dword_53AB1, dword_53AB5, (int)n2_, v11[4], 0, v11[6]);
    n30_7 = n30_11;
  }
  LOBYTE(n30) = sub_4DF4C((unsigned __int8 *)dword_53A51);
  if ( n30_3 == -1 )
  {
    n6_5 = 0;
    sub_12D7B(n30, SHIDWORD(n30), n6_2, a4, (int)n6);
    n6_5 = 1;
    return 0;
  }
  else
  {
    n6_5 = 0;
    sub_11CAC(n30, SHIDWORD(n30), n6_2, a4, 0);
    LODWORD(n30) = (unsigned __int8)v27[n3_3];
    if ( (unsigned int)n30 < 9 || (_DWORD)n30 == 24 || (unsigned __int8)v27[n3_3] > 0x1Bu )
    {
      sub_2FF01(
        (unsigned __int8)v27[n3_3],
        SHIDWORD(n30),
        n6_2,
        a4,
        (int)n6,
        (unsigned __int8)v27[n3_3],
        n30_7,
        (unsigned __int8 *)n2_);
    }
    else
    {
      sub_1D4CB(n30, SHIDWORD(n30), n6_2, a4);
      sub_1D6C8((unsigned __int8)v27[n3_3]);
      n6_2 = (int)n2_;
      v23 = funcs_1541F[(unsigned __int8)v27[n3_3]]((int)n6, n30_7, (int)n2_);
      sub_1D4F6(v23);
    }
    sub_1B6B7((__int32)v26, SHIDWORD(n30), n6_2, a4, (int)v26);
    n30_8 = n30;
    sub_1DB65(n30);
    sub_1AA1D((__int32)v26, SHIDWORD(n30), n30_8, a4, n6, n30_8, (int)v26);
    n6_5 = 1;
    return 1;
  }
}
