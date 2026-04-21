/*
 * func-name: sub_18C6D
 * func-address: 0x18c6d
 * callers: 0x18b84, 0x2facd
 * callees: 0x15f84, 0x1875d, 0x18795, 0x187d6, 0x3702f, 0x4ebff
 */

void __fastcall sub_18C6D(__int32 a1, int a2, int a3, int a4, int a5, int n456, int n6)
{
  int v8; // esi
  int n999; // ebp
  int n999_3; // [esp+0h] [ebp-1Ch]
  int n999_2; // [esp+4h] [ebp-18h]
  int n999_1; // [esp+8h] [ebp-14h]

  sub_3702F(a1, a2, a3, a4, 68);
  v8 = 80 * n6 + dword_53A45;
  n999 = *(__int16 *)(v8 + 64);
  n999_1 = *(__int16 *)(v8 + 66);
  n999_2 = *(__int16 *)(v8 + 68);
  n999_3 = *(__int16 *)(v8 + 70);
  sub_4EBFF(a5, *(_DWORD *)(dword_53A81 + 94) + dword_53A81, n456);
  sub_18795(a5 + 21 + 22 * n456, n6, a5 + 21, a4, (unsigned __int8 *)(a5 + 21 + 22 * n456), n456, 23, n999, n999_1);
  sub_18795(a5 + 21 + 31 * n456, n6, a5 + 21, a4, (unsigned __int8 *)(a5 + 21 + 31 * n456), n456, 26, n999_2, n999_3);
  sub_187D6(4 * n456 + a5 + 132, n6, 4 * n456, a4, 4 * n456 + a5 + 132, n456, *(unsigned __int8 *)(v8 + 33), 31, 2);
  sub_1875D(a5 + 126 + 21 * n456, n6, 4 * n456, a4, a5 + 126 + 21 * n456, n456, n999, n999_1, 3);
  sub_1875D(a5 + 126 + 30 * n456, n6, 4 * n456, a4, a5 + 126 + 30 * n456, n456, n999_2, n999_3, 3);
  sub_15F84(
    (unsigned __int8 *)n456,
    *(unsigned __int8 *)(v8 + 8) + 1,
    n6,
    a4,
    4 * n456,
    arg0,
    *(unsigned __int8 *)(v8 + 8) + 1,
    4 * n456 + a5 + 5,
    n456,
    205,
    76,
    0,
    0,
    0);
  JUMPOUT(0x1317D);
}
