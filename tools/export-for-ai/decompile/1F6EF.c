/*
 * func-name: sub_1F6EF
 * func-address: 0x1f6ef
 * callers: 0x2000a
 * callees: 0x3702f, 0x37910
 */

int __fastcall sub_1F6EF(__int32 a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // ebx
  int i; // esi
  int result; // eax

  sub_3702F(a1, a2, a3, a4, 32);
  v8 = a5 + 320 * a6 + 655360;
  for ( i = 0; ; ++i )
  {
    result = a8 - 1;
    if ( i >= a8 - 1 )
      break;
    memset(v8, a7, a8 - 1);
    v8 += 320;
  }
  return result;
}
