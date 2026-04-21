/*
 * func-name: sub_1AEB1
 * func-address: 0x1aeb1
 * callers: 0x1acf3
 * callees: 0x187d6, 0x3702f, 0x37932, 0x4e98d
 */

char __fastcall sub_1AEB1(__int32 a1, int a2, int a3, int a4, int a5, int n456, int n999)
{
  int n131; // ebx
  __int16 *v8; // edx

  sub_3702F(a1, a2, a3, a4, 32);
  n131 = 131;
  if ( n999 < 0 )
  {
    n131 = 132;
    n999 = abs(n999);
  }
  v8 = (__int16 *)(*(_DWORD *)(dword_53A81 + 4 * n131 + 6) + dword_53A81);
  sub_4E98D(v8, 0, 0, a5, n456, -1);
  return sub_187D6(a5 + 8, (int)v8, n131, a4, a5 + 8, n456, n999, 31, 2);
}
