/*
 * func-name: sub_2BD6C
 * func-address: 0x2bd6c
 * callers: 0x2ff01, 0x31266
 * callees: 0x25a96, 0x2bf83, 0x2eb9f, 0x3702f
 */

int __fastcall sub_2BD6C(__int32 a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, char n7)
{
  int v9; // edi
  int n8; // edx
  _BOOL1 v12; // [esp+0h] [ebp-14h]

  sub_3702F(a1, a2, a3, a4, 44);
  v9 = 0;
  n8 = n8_0;
  v12 = *(_BYTE *)(n8_0 + 80 * a5 + 6) == 0;
  switch ( n7 )
  {
    case 0:
      n16_2 = 0;
      byte_53FB3 = 0;
      byte_53FB4 = 0;
      return 29;
    case 3:
      n16_2 = 16;
      return 12;
    case 6:
      sub_25A96(6, n8_0, a8, a4, dword_54153, 3, 1);
      n16_2 = 10;
      return 10;
  }
  if ( (n7 == 1 || n7 == 7) && *(_BYTE *)(n8_0 + 80 * a5 + 6) )
  {
    if ( n16_2 == 10 && n7 == 1 )
      n16_2 = 15;
    sub_2BF83(&n16_2, &byte_53FB4, a7, a8, a6);
    return 0;
  }
  if ( n7 == 2 || n7 == 8 )
  {
    if ( n16_2 == 7 )
      sub_25A96(7, n8_0, a8, a4, dword_54153, 1, 1);
    if ( v12 )
    {
      if ( n16_2 == 10 && n7 == 2 )
        n16_2 = 15;
      sub_2BF83(&n16_2, &byte_53FB4, a7, a8, a6);
    }
    if ( n16_2 == 16 )
      sub_2EB9F(a6, 16, a7, a8, -1);
    return 0;
  }
  if ( n7 == 4 && *(_BYTE *)(n8_0 + 80 * a5 + 6) )
  {
    sub_2EB9F(a6, 15, a7 + 1 - a8, a8, -1);
    return 0;
  }
  if ( n7 != 5 )
    return 0;
  if ( !*(_BYTE *)(n8_0 + 80 * a5 + 6) )
    sub_2EB9F(a6, 15, a7 - 1 - a8, a8, -1);
  sub_2EB9F(a6, (unsigned __int8)n16_2, a7 + 1 - a8, a8, -1);
  if ( ++n16_2 == 17 )
  {
    sub_25A96(17, n8, a8, a4, dword_54153, 2, 1);
    return 1;
  }
  else if ( n16_2 == 18 )
  {
    n16_2 = 16;
  }
  return v9;
}
