/*
 * func-name: sub_211A4
 * func-address: 0x211a4
 * callers: 0x20c6f, 0x2d80d
 * callees: 0x1c2da, 0x1c4cc, 0x1c916, 0x1e0db, 0x3702f
 */

void __fastcall sub_211A4(__int32 a1, int a2, int a3, int a4, int n6, int n30, unsigned __int8 *a7, int n950)
{
  int v8; // eax
  int v9; // eax
  int n30_1; // esi
  __int32 v11; // eax

  v8 = sub_3702F(a1, a2, a3, a4, 36);
  v9 = sub_1C4CC(v8, a2, a3, a4, n6, 13, n30, (int)a7);
  sub_1C2DA(v9, a2, a3, a4, n6, 13, n30, (int)a7);
  for ( n30_1 = 0; n30_1 < n30; ++n30_1 )
  {
    sub_1C916(a7[n30_1], a2, a3, a4, a7[n30_1], n950);
    a3 = a7[n30_1];
    sub_1E0DB(v11, a2, a3, a4, v11, 105, a3);
  }
  JUMPOUT(0x21190);
}
