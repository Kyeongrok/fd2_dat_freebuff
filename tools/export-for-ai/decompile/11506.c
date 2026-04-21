/*
 * func-name: sub_11506
 * func-address: 0x11506
 * callers: 0x22ef6, 0x22f37, 0x230f2, 0x231bc, 0x231f9, 0x232e8, 0x235f9, 0x23790, 0x237d5, 0x238dc, 0x23a0a, 0x23b5f, 0x23cd5, 0x23e39, 0x23e74, 0x240fa, 0x24754, 0x24c1e, 0x24e80, 0x250cc, 0x2548c
 * callees: 0x1145a, 0x34894, 0x3702f, 0x3771c, 0x37910
 */

void __fastcall sub_11506(__int32 a1, int a2, int a3, int a4)
{
  int n6; // ebp
  int v5; // edi
  int i; // esi
  int v7; // ebx
  int v8; // edx
  __int32 v9; // eax

  sub_3702F(a1, a2, a3, a4, 32);
  for ( n6 = 0; n6 < n6_0; ++n6 )
  {
    v5 = 80 * n6 + dword_53A45;
    for ( i = 0; i < dword_53BFB; ++i )
    {
      v7 = dword_53BF7 + 80 * i;
      v8 = *(unsigned __int8 *)(v7 + 8);
      if ( *(unsigned __int8 *)(v5 + 8) == v8 && (*(_BYTE *)(v7 + 8) || !sub_34894(n6)) )
      {
        memmove(v7, v5, 80);
        memset(v7 + 34, 0, 6);
        *(_BYTE *)(v7 + 5) &= 1u;
        v9 = *(unsigned __int8 *)(v7 + 5);
        if ( v9 != 1 )
          *(_WORD *)(v7 + 64) = *(_WORD *)(v7 + 66);
        LOWORD(v9) = *(_WORD *)(v7 + 70);
        *(_WORD *)(v7 + 68) = v9;
        sub_1145A(v9, v8, v7, a4, i);
      }
    }
  }
  JUMPOUT(0x11455);
}
