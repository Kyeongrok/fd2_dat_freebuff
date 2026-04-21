/*
 * func-name: sub_22AF6
 * func-address: 0x22af6
 * callers: 0x20c6f, 0x22aa8
 * callees: 0x11cac, 0x1c2da, 0x1c4cc, 0x1c916, 0x1e0db, 0x1e1dc, 0x3702f
 */

int __fastcall sub_22AF6(
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
  int v10; // eax
  int v11; // eax
  int n30_1; // edi
  int v13; // ebx
  int v14; // ebp
  _BYTE *v15; // esi
  int v16; // eax
  __int32 v17; // eax

  v9 = sub_3702F(a1, a2, a3, a4, 36);
  v10 = sub_1C4CC(v9, a2, a3, a4, (int)n6, n20, n30, (int)a8);
  v11 = sub_1C2DA(v10, a2, a3, a4, (int)n6, n20, n30, (int)a8);
  for ( n30_1 = 0; n30_1 < n30; ++n30_1 )
  {
    v13 = dword_53A45 + 80 * a8[n30_1];
    v14 = *(unsigned __int8 *)(v13 + 33);
    if ( *(unsigned __int8 *)(v13 + 32) > 8u && *(unsigned __int8 *)(v13 + 32) < 0x19u )
      v14 += 30;
    v15 = (_BYTE *)(v13 + n37);
    v16 = *(unsigned __int8 *)(v13 + n37);
    a3 = (int)&a8[n30_1];
    if ( v16 )
    {
      sub_1C916(*(unsigned __int8 *)a3, a2, a3, a4, *(unsigned __int8 *)a3, 10);
      a3 = *(unsigned __int8 *)a3;
      sub_1E0DB(v17, a2, a3, a4, v17, 105, a3);
      *v15 = 0;
      arg4_0 += 4 * v14;
    }
    else
    {
      v11 = sub_1E1DC(*(unsigned __int8 *)a3, a2, a3, a4, *(unsigned __int8 *)a3);
    }
  }
  return sub_11CAC(v11, a2, a3, a4, 0);
}
