/*
 * func-name: sub_18312
 * func-address: 0x18312
 * callers: 0x17aed, 0x18409
 * callees: 0x3702f, 0x3771c
 */

int __fastcall sub_18312(__int32 a1, int a2, int a3, int a4, int n7, int a6, int a7)
{
  int result; // eax
  int n86; // ebp
  int v9; // edi
  int n86_1; // ebx

  result = sub_3702F(a1, a2, a3, a4, 32);
  n86 = 86;
  v9 = 0;
  if ( n7 < 0 )
  {
    n86 = n7 + 86;
    v9 = -n7;
    n7 = 0;
  }
  for ( n86_1 = 0; n86_1 < n86; ++n86_1 )
    result = memmove(320 * n86_1 + a6 + 92 + 320 * n7, a7 + 2332 + 320 * v9 + 320 * n86_1, 223);
  return result;
}
