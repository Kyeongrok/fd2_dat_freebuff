/*
 * func-name: sub_182AD
 * func-address: 0x182ad
 * callers: 0x17aed, 0x18409
 * callees: 0x3702f, 0x3771c
 */

int __fastcall sub_182AD(__int32 a1, int a2, int a3, int a4, int n5, int a6, int a7)
{
  int result; // eax
  int n5_1; // ebp
  int n86; // edi
  int v10; // esi
  int n86_1; // ebx

  result = sub_3702F(a1, a2, a3, a4, 32);
  n5_1 = n5;
  n86 = 86;
  v10 = 0;
  if ( n5 < 0 )
  {
    n86 = n5 + 86;
    v10 = -n5;
    n5_1 = 0;
  }
  for ( n86_1 = 0; n86_1 < 86; ++n86_1 )
    result = memmove(n5_1 + a6 + 2240 + 320 * n86_1, 320 * n86_1 + a7 + 2245 + v10, n86);
  return result;
}
