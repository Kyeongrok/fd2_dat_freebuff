/*
 * func-name: sub_2B749
 * func-address: 0x2b749
 * callers: 0x2af28, 0x2b4fb
 * callees: 0x3702f
 */

void __fastcall sub_2B749(__int32 a1, int a2, int a3, int a4, int a5)
{
  int v5; // ebx
  int i; // eax

  sub_3702F(a1, a2, a3, a4, 8);
  v5 = 0;
  for ( i = 0; i < n16_1 - 1; ++i )
  {
    if ( *(_BYTE *)(a5 + i) )
      ++v5;
  }
  JUMPOUT(0x26ED6);
}
