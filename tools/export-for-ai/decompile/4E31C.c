/*
 * func-name: sub_4E31C
 * func-address: 0x4e31c
 * callers: 0x11aa8, 0x11cac, 0x12dac, 0x12eaa, 0x1300d, 0x13185, 0x13315, 0x16c57, 0x17898, 0x18b84, 0x19953, 0x1b1e7, 0x1e5c0, 0x24336
 * callees: 0x4e310
 */

void sub_4E31C()
{
  unsigned __int8 *v0; // esi
  int n16; // ecx
  unsigned __int8 v2; // ah
  unsigned __int8 v3; // al
  unsigned __int8 *v4; // esi
  unsigned __int8 v5; // al
  unsigned __int8 v6; // al

  if ( (unsigned __int16)(sub_4E310() - word_60000) >= 2u )
  {
    if ( ++byte_60002 == 16 )
      byte_60002 = 0;
    v0 = (unsigned __int8 *)&unk_60003 + (unsigned __int16)(3 * (unsigned __int8)byte_60002);
    n16 = 16;
    v2 = -32;
    do
    {
      __outbyte(0x3C8u, v2);
      v3 = *v0;
      v4 = v0 + 1;
      __outbyte(0x3C9u, v3);
      v5 = *v4++;
      __outbyte(0x3C9u, v5);
      v6 = *v4;
      v0 = v4 + 1;
      __outbyte(0x3C9u, v6);
      ++v2;
      --n16;
    }
    while ( n16 );
    word_60000 = sub_4E310();
  }
}
