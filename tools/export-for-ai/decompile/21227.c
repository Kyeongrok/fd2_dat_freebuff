/*
 * func-name: sub_21227
 * func-address: 0x21227
 * callers: 0x21206
 * callees: 0x1c4cc, 0x1c75e, 0x1ca89, 0x1cd17, 0x1e0db, 0x1e1dc, 0x3702f
 */

void __fastcall sub_21227(__int32 a1, int n950, int n11, int n4, int n6, int n9, int n30, int a8)
{
  int v8; // eax
  int v9; // eax
  __int32 v10; // eax
  int n30_1; // esi
  unsigned __int8 *v12; // ebx
  int v13; // eax

  v8 = sub_3702F(a1, n950, n11, n4, 36);
  dword_53EC4 = 0;
  v9 = sub_1C4CC(v8, n950, n11, n4, n6, n9, n30, a8);
  sub_1CD17(v9, n950, n11, n4, n6, n9, n30, a8);
  sub_1CA89(v10, n950, n11, n4, n6, n9);
  for ( n30_1 = 0; n30_1 < n30; ++n30_1 )
  {
    v12 = (unsigned __int8 *)(n30_1 + a8);
    v13 = sub_1C75E(*(unsigned __int8 *)(n30_1 + a8), n950, n30_1 + a8, n4, *(unsigned __int8 *)(n30_1 + a8), n9);
    if ( v13 )
      sub_1E0DB(v13, n950, *v12, n4, v13, 94, *v12);
    else
      sub_1E1DC(*v12, n950, (int)v12, n4, *v12);
  }
  JUMPOUT(0x21190);
}
