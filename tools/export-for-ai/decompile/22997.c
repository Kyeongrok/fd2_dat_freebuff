/*
 * func-name: sub_22997
 * func-address: 0x22997
 * callers: 0x20c6f, 0x22960, 0x2d80d
 * callees: 0x11cac, 0x1c2da, 0x1c4cc, 0x1df58, 0x1e0db, 0x1e1dc, 0x3702f, 0x4ebe3
 */

void __fastcall sub_22997(__int32 a1, int a2, int n4, int a4, int n6, int n30, unsigned __int8 *a7)
{
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int n30_1; // ebp
  int v11; // esi
  unsigned __int8 *v12; // edi
  int v13; // eax
  int v14; // eax
  int v15; // [esp+0h] [ebp-14h]

  v7 = sub_3702F(a1, a2, n4, a4, 40);
  v8 = sub_1C4CC(v7, a2, n4, a4, n6, 19, n30, (int)a7);
  v9 = sub_1C2DA(v8, a2, n4, a4, n6, 19, n30, (int)a7);
  for ( n30_1 = 0; n30_1 < n30; ++n30_1 )
  {
    v11 = dword_53A45 + 80 * a7[n30_1];
    v15 = *(unsigned __int8 *)(v11 + 33);
    if ( *(unsigned __int8 *)(v11 + 32) > 8u && *(unsigned __int8 *)(v11 + 32) < 0x19u )
      v15 += 30;
    v12 = &a7[n30_1];
    if ( *(_BYTE *)(v11 + 36) )
    {
      a2 = *v12;
      v9 = sub_1E1DC(v9, a2, n4, a4, a2);
    }
    else
    {
      v13 = sub_4EBE3(v9);
      n4 = 4;
      *(_BYTE *)(v11 + 36) = v13 % 4 + 2;
      *(_WORD *)(v11 + 76) += 15;
      *(_WORD *)(v11 + 78) += 15;
      sub_1E0DB(v13 / 4, *v12, 4, a4, 15, 105, *v12);
      a2 = 2 * v15;
      arg4_0 += 2 * v15;
    }
  }
  v14 = sub_11CAC(v9, a2, n4, a4, 0);
  sub_1DF58(v14, a2, n4, a4);
  JUMPOUT(0x22BBE);
}
