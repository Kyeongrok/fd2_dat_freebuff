/*
 * func-name: sub_233C6
 * func-address: 0x233c6
 * callers: 0x230f2, 0x231f9, 0x232e8, 0x234bb, 0x237d5, 0x238dc, 0x23a0a, 0x23b5f, 0x23cd5, 0x240fa, 0x244b6, 0x24754, 0x24e80, 0x250cc, 0x25757
 * callees: 0x11cac, 0x13536, 0x1f525, 0x1f882, 0x3702f, 0x3790a
 */

void __fastcall sub_233C6(
        __int32 a1,
        int a2,
        int n4_1,
        int a4,
        int a5,
        int a6,
        unsigned int n4,
        int a8,
        int a9,
        int a10,
        char a11,
        char a12,
        char a13,
        int a14,
        __int32 a15)
{
  int v15; // eax
  int v16; // eax
  _BYTE *v18; // eax
  _BYTE *v19; // eax
  int v20; // eax

  v15 = sub_3702F(a1, a2, n4_1, a4, 24);
  v16 = sub_1F882(v15, a2, n4_1, a4);
  sub_13536(v16, a2, n4_1, a4);
  while ( a8 <= a9 )
  {
    n4_1 = 80 * a8;
    v18 = (_BYTE *)(80 * a8 + dword_53A45);
    *v18 = *(_BYTE *)(a8 + a5);
    v18[1] = *(_BYTE *)(a8 + a6);
    if ( n4 >= 4 )
    {
      n4_1 = n4;
      LOBYTE(n4_1) = *(_BYTE *)(a8 + n4);
    }
    else
    {
      LOBYTE(n4_1) = n4;
    }
    v18[3] = n4_1;
    ++a8;
  }
  if ( a10 )
  {
    a8 = 80 * a10;
    v19 = (_BYTE *)(80 * a10 + dword_53A45);
    *v19 = a11;
    v19[1] = a12;
    LOBYTE(a8) = a13;
    v19[3] = a13;
  }
  n6_5 = 0;
  dword_53AA9 = a14;
  dword_53AAD = a15;
  dword_53AB1 = a14;
  dword_53AB5 = a15;
  n10 = 0;
  n2_1 = 0;
  v20 = sub_11CAC(a15, a8, n4_1, a4, 1);
  sub_1F525(v20, a8, n4_1, a4);
  j___delay(200);
  JUMPOUT(0x22BBE);
}
