/*
 * func-name: sub_1B9DE
 * func-address: 0x1b9de
 * callers: 0x1b932, 0x1bffe
 * callees: 0x16c57, 0x184c0, 0x25a96, 0x3702f, 0x4e8bc
 */

int __fastcall sub_1B9DE(__int32 a1, int a2, int a3, int a4, int n8_2, int a6)
{
  int v6; // eax
  int v7; // ebx
  int n8_1; // edx
  int v9; // esi
  __int32 n8; // eax
  int n28; // eax
  int result; // eax

  v6 = sub_3702F(a1, a2, a3, a4, 28);
  v7 = 0;
  sub_184C0(v6, a2, 0, a4, n8_2, n3_3, 655360);
  n8_1 = n8_2;
  v9 = 80 * n8_2 + dword_53A45;
  for ( n8 = 0; n8 < 8; ++n8 )
  {
    n8_1 = n8;
    if ( *(char *)(v9 + 2 * n8 + 10) >= 0 )
      ++v7;
  }
  sub_16C57(n8, n8_1, v7, a4, 0);
  switch ( n28 )
  {
    case 'H':
      if ( n3_3 )
      {
        sub_25A96(dword_53EEC, 0, 1);
        result = 0;
        --n3_3;
        return result;
      }
      sub_25A96(dword_53EEC, 0, 1);
      n3_3 = v7 - 1;
      return 0;
    case 'P':
      if ( v7 - 1 != n3_3 )
      {
        sub_25A96(dword_53EEC, 0, 1);
        result = 0;
        ++n3_3;
        return result;
      }
      sub_25A96(dword_53EEC, 0, 1);
      n3_3 = 0;
      return 0;
    case 'K':
      if ( n3_3 >= 4 )
      {
        sub_25A96(dword_53EEC, 0, 1);
        result = 0;
        n3_3 -= 4;
        return result;
      }
      return 0;
    case 'M':
      if ( n3_3 <= 3 && v7 - 4 > n3_3 )
      {
        sub_25A96(dword_53EEC, 0, 1);
        result = 0;
        n3_3 += 4;
        return result;
      }
      return 0;
  }
  if ( n28 != 28 && n28 != 57 )
  {
    if ( n28 == 1 )
      return -1;
    return 0;
  }
  if ( !a6 )
    return 1;
  result = (unsigned __int8)sub_4E8BC(*(unsigned __int8 *)(v9 + 2 * n3_3 + 11))[13];
  if ( result )
    return 1;
  return result;
}
