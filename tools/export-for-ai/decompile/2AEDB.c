/*
 * func-name: sub_2AEDB
 * func-address: 0x2aedb
 * callers: 0x240fa, 0x24b14, 0x2aa00, 0x2ae0e, 0x35a0d
 * callees: 0x1b722, 0x1b8a6, 0x3702f
 */

int __fastcall sub_2AEDB(__int32 a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // eax
  int v7; // eax
  int v8; // esi
  int i; // ebx

  v6 = sub_3702F(a1, a2, a3, a4, 28);
  v7 = sub_1B8A6(v6, a2, a3, a4, a5);
  v8 = v7;
  if ( v7 )
  {
    for ( i = 0; i < v8; ++i )
    {
      v7 = sub_1B722(v7, a2, i, a4, a5, i);
      if ( v7 == a6 )
        return i;
    }
  }
  return -1;
}
