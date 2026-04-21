/*
 * func-name: sub_2A07A
 * func-address: 0x2a07a
 * callers: 0x2a43e
 * callees: 0x34894, 0x3702f
 */

int __fastcall sub_2A07A(__int32 a1, int a2, int a3, int a4, int a5)
{
  int n16; // ebx
  unsigned __int8 v7; // [esp+0h] [ebp-Ch]

  sub_3702F(a1, a2, a3, a4, 20);
  v7 = 0;
  for ( n16 = 0; n16 < n16_1; ++n16 )
  {
    if ( sub_34894(n16) == 1 )
      *(_BYTE *)(a5 + v7++) = n16;
  }
  return v7;
}
