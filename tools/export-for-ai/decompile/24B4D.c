/*
 * func-name: sub_24B4D
 * func-address: 0x24b4d
 * callers: 0x24754, 0x2548c, 0x3396a
 * callees: 0x11cac, 0x11eb0, 0x11eee, 0x3702f, 0x3790a
 */

int __fastcall sub_24B4D(__int32 a1, int a2, int a3, int a4, int a5)
{
  __int32 v5; // eax
  int result; // eax
  int i; // ebx

  sub_3702F(a1, a2, a3, a4, 36);
  sub_11EEE(n655360_0 + 32904, a2, a3, a4, n655360_0 + 32904, 456, 13, 9, n9, n34);
  result = sub_11CAC(v5, a2, a3, a4, 0);
  for ( i = 0; i < a5; ++i )
  {
    sub_11EB0(
      456 * (i & 1) + n655360_0 + 32904,
      456 * (i & 1),
      i,
      a4,
      656644,
      320,
      456 * (i & 1) + n655360_0 + 32904,
      456,
      312,
      192);
    result = j___delay(20);
  }
  return result;
}
