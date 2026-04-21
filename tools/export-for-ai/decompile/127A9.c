/*
 * func-name: sub_127A9
 * func-address: 0x127a9
 * callers: 0x11cac, 0x12eaa, 0x1300d, 0x13185, 0x13315, 0x1741c, 0x17898, 0x18b84, 0x197e5, 0x19953, 0x1b1e7, 0x1db65, 0x1e611, 0x1f30a, 0x2189a, 0x22046, 0x22470, 0x32999
 * callees: 0x127e0, 0x129ec, 0x34894, 0x3702f
 */

int __fastcall sub_127A9(__int32 a1, int a2, int a3, int a4)
{
  int v4; // eax
  int n6; // ebx

  v4 = sub_3702F(a1, a2, a3, a4, 12);
  for ( n6 = 0; n6 < n6_0; ++n6 )
  {
    v4 = sub_34894(n6);
    if ( !v4 )
      v4 = sub_127E0(n6);
  }
  return sub_129EC(v4);
}
