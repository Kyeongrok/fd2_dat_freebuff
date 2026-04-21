/*
 * func-name: sub_22C04
 * func-address: 0x22c04
 * callers: 0x15311, 0x1cff0
 * callees: 0x11cac, 0x1c2da, 0x1c4cc, 0x1ca89, 0x1df58, 0x1e1dc, 0x3702f
 */

void __fastcall sub_22C04(__int32 a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int n8; // eax
  int i; // ebx
  _BYTE *v12; // eax
  int v13; // edx
  int v14; // eax

  v7 = sub_3702F(a1, a2, a3, a4, 32);
  dword_53EC4 = 0;
  v8 = sub_1CA89(v7, a2, a3, a4, a5, 25);
  v9 = sub_1C4CC(v8, a2, a3, a4, a5, 25, a6, a7);
  n8 = sub_1C2DA(v9, a2, a3, a4, a5, 25, a6, a7);
  for ( i = 0; i < a6; ++i )
  {
    a4 = *(unsigned __int8 *)(a7 + i);
    a2 = 80 * a4;
    v12 = (_BYTE *)(80 * a4 + dword_53A45);
    if ( (char)v12[5] >= 0 )
    {
      n8 = sub_1E1DC((__int32)v12, a2, i, a4, *(unsigned __int8 *)(a7 + i));
    }
    else
    {
      v12[5] &= ~0x80u;
      v13 = (unsigned __int8)v12[33];
      n8 = (unsigned __int8)v12[32];
      if ( n8 > 8 && n8 < 25 )
        v13 += 30;
      a2 = 8 * v13;
      arg4_0 += a2;
    }
  }
  v14 = sub_11CAC(n8, a2, i, a4, 0);
  if ( dword_53EC4 )
    sub_1DF58(v14, a2, i, a4);
}
