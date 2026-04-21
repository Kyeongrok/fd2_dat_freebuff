/*
 * func-name: sub_2B843
 * func-address: 0x2b843
 * callers: 0x2af28
 * callees: 0x11019, 0x3702f, 0x3706e, 0x37324, 0x3759c, 0x3771c, 0x3776e
 */

int __fastcall sub_2B843(__int32 a1, int a2, int a3, int a4, unsigned __int8 n9)
{
  int n16; // ebx
  int v6; // esi
  __int64 v7; // rax
  int n16_1; // ebx
  int v9; // esi
  int n16_2; // ebx
  unsigned __int8 n16_3; // [esp+0h] [ebp-10h]
  unsigned __int8 n2; // [esp+4h] [ebp-Ch]

  sub_3702F(a1, a2, a3, a4, 32);
  n16_3 = 0;
  n2 = 2;
  for ( n16 = 1; n16 < ::n16_1; ++n16 )
  {
    if ( *(unsigned __int8 *)(n8_0 + 80 * n16 + 8) == n9 )
      n16_3 = n16;
  }
  v6 = malloc(2560);
  memmove(v6, n5_0, 2560);
  v7 = memmove(n5_0 + 80, 80 * (unsigned int)n16_3 + v6, 80);
  for ( n16_1 = 1; n16_1 < ::n16_1; ++n16_1 )
  {
    if ( n16_1 != n16_3 )
      v7 = memmove(80 * (unsigned int)n2++ + n5_0, v6 + 80 * n16_1, 80);
  }
  free(v6);
  free(dword_53A61);
  v9 = fopen((int)aFdiconB24_6, (int)aRb_10);   // "rb"
  dword_53BDF = 0;
  for ( n16_2 = 0; n16_2 < ::n16_1; ++n16_2 )
    sub_11019(
      *(unsigned __int8 *)(n5_0 + 80 * n16_2 + 7),
      SHIDWORD(v7),
      n16_2,
      n5_0,
      *(unsigned __int8 *)(n5_0 + 80 * n16_2 + 7),
      v9);
  return fclose(v9);
}
