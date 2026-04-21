/*
 * func-name: sub_1C8ED
 * func-address: 0x1c8ed
 * callers: 0x21b18
 * callees: 0x1c916, 0x3702f, 0x4e866
 */

int __fastcall sub_1C8ED(__int32 a1, int a2, int a3, int a4, int a5, int a6)
{
  __int16 *v6; // eax

  sub_3702F(a1, a2, a3, a4, 16);
  v6 = (__int16 *)sub_4E866(a6);
  return sub_1C916(a5, *v6);
}
