/*
 * func-name: sub_2AE0E
 * func-address: 0x2ae0e
 * callers: 0x2aa00
 * callees: 0x2aedb, 0x3702f
 */

int __fastcall sub_2AE0E(__int32 a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // esi
  int n9; // ebx
  _BYTE *v8; // esi
  int n16; // [esp+0h] [ebp-18h]
  unsigned __int8 v11; // [esp+4h] [ebp-14h]

  sub_3702F(a1, a2, a3, a4, 36);
  v11 = 0;
  for ( n16 = 0; n16 < n16_1; ++n16 )
  {
    v6 = 80 * n16 + n8_0;
    n9 = *(unsigned __int8 *)(v6 + 7);
    if ( *(unsigned __int8 *)(v6 + 33) >= 0x14u && *(unsigned __int8 *)(v6 + 7) < 0x12u && n9 != 7 )
    {
      *(_BYTE *)(v11 + a5) = n16;
      v8 = (_BYTE *)(a6 + v11);
      *v8 = n9 + 32;
      if ( sub_2AEDB(n16, (unsigned __int8)byte_523D5[n9]) != -1 )
        *v8 = n9 + 50;
      if ( n9 == 9 && sub_2AEDB(n16, 90) != -1 )
        *(_BYTE *)(a6 + v11) = 52;
      ++v11;
    }
  }
  return v11;
}
