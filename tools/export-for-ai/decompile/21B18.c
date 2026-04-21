/*
 * func-name: sub_21B18
 * func-address: 0x21b18
 * callers: 0x21ad9
 * callees: 0x1c2da, 0x1c4cc, 0x1c8ed, 0x1ca89, 0x1e0db, 0x3702f
 */

void __fastcall sub_21B18(__int32 a1, int a2, int a3, int a4, int a5, int n9, int a7, int a8)
{
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int i; // esi
  int v12; // eax

  v8 = sub_3702F(a1, a2, a3, a4, 36);
  dword_53EC4 = 0;
  v9 = sub_1C4CC(v8, a2, a3, a4, a5, n9, a7, a8);
  v10 = sub_1C2DA(v9, a2, a3, a4, a5, n9, a7, a8);
  sub_1CA89(v10, a2, a3, a4, a5, n9);
  for ( i = 0; i < a7; ++i )
  {
    v12 = sub_1C8ED(*(unsigned __int8 *)(i + a8), a2, a8, a4, *(unsigned __int8 *)(i + a8), n9);
    sub_1E0DB(v12, a2, *(unsigned __int8 *)(i + a8), a4, v12, 105, *(unsigned __int8 *)(i + a8));
  }
  JUMPOUT(0x21190);
}
