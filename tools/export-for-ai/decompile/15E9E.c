/*
 * func-name: sub_15E9E
 * func-address: 0x15e9e
 * callers: 0x165ac, 0x16b43
 * callees: 0x3702f, 0x3706e, 0x4ecbf, 0x4ed34
 */

void __fastcall sub_15E9E(__int32 a1, int a2, int a3, int a4, __int16 *a5, int n655360, int n320, int a8, int a9)
{
  int v9; // ebx
  int v10; // ebp
  int v11; // esi
  int v12; // [esp+0h] [ebp-14h]

  sub_3702F(a1, a2, a3, a4, 48);
  v12 = *a5;
  v9 = a5[1];
  v10 = a8 + n320 * a9;
  v11 = malloc(v9 * v12 + 8);
  sub_4ECBF(v11, v12, v9, n655360, v10);
  sub_4ED34(n655360 + v10, a5, n320);
  JUMPOUT(0x22BBE);
}
