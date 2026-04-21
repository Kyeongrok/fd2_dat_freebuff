/*
 * func-name: sub_1B83D
 * func-address: 0x1b83d
 * callers: 0x14237, 0x18d8c, 0x1debe, 0x1e856, 0x1e98c, 0x1ecc7, 0x1f0dc, 0x2f7b6
 * callees: 0x3702f
 */

int __fastcall sub_1B83D(__int32 a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // esi
  int n8; // edx

  sub_3702F(a1, a2, a3, a4, 12);
  for ( n8 = 0; n8 < 8; ++n8 )
  {
    v6 = 80 * a5 + dword_53A45;
    if ( (*(_BYTE *)(v6 + 2 * n8 + 10) & 0x40) != 0
      && (!a6 && *(unsigned __int8 *)(v6 + 2 * n8 + 11) < 0x80u || a6 && *(unsigned __int8 *)(v6 + 2 * n8 + 11) >= 0x80u) )
    {
      return n8;
    }
  }
  return -1;
}
