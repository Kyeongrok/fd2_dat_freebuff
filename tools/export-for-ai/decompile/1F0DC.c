/*
 * func-name: sub_1F0DC
 * func-address: 0x1f0dc
 * callers: 0x1548e, 0x1eb05, 0x2e2b0
 * callees: 0x1b722, 0x1b83d, 0x3702f, 0x37932, 0x4e8bc
 */

int __fastcall sub_1F0DC(__int32 a1, int a2, int a3, int a4, int a5, int a6)
{
  unsigned __int8 *v6; // esi
  unsigned __int8 *v7; // ebx
  int result; // eax
  int v9; // edi
  int v10; // ebx
  int v11; // eax

  sub_3702F(a1, a2, a3, a4, 24);
  v6 = (unsigned __int8 *)(dword_53A45 + 80 * a5);
  v7 = (unsigned __int8 *)(dword_53A45 + 80 * a6);
  if ( v7[38] )
    return -1;
  v9 = abs(*v6 - *v7);
  v10 = v7[1];
  if ( v9 + abs(v6[1] - v10) != 1 )
    return -1;
  result = sub_1B83D(1, a2, v10, a4, a6, 0);
  if ( result != -1 )
  {
    v11 = sub_1B722(result, a2, v10, a4, a6, result);
    result = (unsigned __int8)sub_4E8BC(v11)[11];
    if ( result != 1 )
      return -1;
  }
  return result;
}
