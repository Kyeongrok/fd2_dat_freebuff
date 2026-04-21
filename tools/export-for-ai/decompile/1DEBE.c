/*
 * func-name: sub_1DEBE
 * func-address: 0x1debe
 * callers: 0x14237
 * callees: 0x1b722, 0x1b83d, 0x3702f, 0x37932, 0x4e8bc
 */

int __fastcall sub_1DEBE(__int32 a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  unsigned __int8 *v7; // ebx
  int result; // eax
  int v9; // esi
  int v10; // ebx
  int v11; // eax

  sub_3702F(a1, a2, a3, a4, 20);
  v7 = (unsigned __int8 *)(80 * a5 + dword_53A45);
  if ( v7[38] )
    return -1;
  v9 = abs(a6 - *v7);
  v10 = a7 - v7[1];
  if ( v9 + abs(v10) != 1 )
    return -1;
  result = sub_1B83D(1, a2, v10, a4, a5, 0);
  if ( result == -1 )
    return result;
  v11 = sub_1B722(result, a2, v10, a4, a5, result);
  if ( (unsigned __int8)sub_4E8BC(v11)[11] > 1u )
    return -1;
  return 1;
}
