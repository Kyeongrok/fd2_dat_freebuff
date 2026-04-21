/*
 * func-name: sub_1F183
 * func-address: 0x1f183
 * callers: 0x115b6, 0x129ec, 0x14121, 0x14237, 0x14b78, 0x15b77, 0x18890, 0x1c75e, 0x1ecc7, 0x2f7b6, 0x2ff01, 0x30e25, 0x32230
 * callees: 0x3702f
 */

bool __fastcall sub_1F183(__int32 a1, int a2, int a3, int a4, int a5)
{
  _BYTE *v5; // eax
  int n4; // eax
  bool result; // eax

  sub_3702F(a1, a2, a3, a4, 4);
  v5 = (_BYTE *)(dword_53A45 + 80 * a5);
  result = 0;
  if ( v5[7] != 28 )
  {
    if ( v5[32] == 19 )
      return 1;
    n4 = (unsigned __int8)v5[31];
    if ( n4 == 4 || n4 == 5 )
      return 1;
  }
  return result;
}
