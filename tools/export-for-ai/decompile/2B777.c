/*
 * func-name: sub_2B777
 * func-address: 0x2b777
 * callers: 0x2af28
 * callees: 0x3702f, 0x3706e, 0x3771c
 */

void __fastcall sub_2B777(__int32 a1, int a2, int a3, int a4, int a5)
{
  int v5; // esi
  int v6; // edi
  int i; // ebx
  int j; // ebx

  sub_3702F(a1, a2, a3, a4, 32);
  v5 = 1;
  v6 = malloc(2560);
  memmove(v6, n5_0, 2560);
  for ( i = 0; i < n16_1 - 1; ++i )
  {
    if ( *(_BYTE *)(i + a5) )
      memmove(n5_0 + 80 * v5++, v6 + 80 * (i + 1), 80);
  }
  for ( j = 0; j < n16_1 - 1; ++j )
  {
    if ( !*(_BYTE *)(j + a5) )
      memmove(n5_0 + 80 * v5++, v6 + 80 * (j + 1), 80);
  }
  JUMPOUT(0x29862);
}
