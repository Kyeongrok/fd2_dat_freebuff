/*
 * func-name: sub_278E7
 * func-address: 0x278e7
 * callers: 0x275e6, 0x27d33, 0x27f4a, 0x2a29d, 0x2a857
 * callees: 0x3702f, 0x3771c, 0x3790a, 0x37910
 */

int __fastcall sub_278E7(__int32 a1, int a2, int a3, int a4)
{
  int result; // eax
  int n3; // esi
  int n73; // ebx
  int n6; // ebx
  int n71; // ebx
  int n8; // ebx

  result = sub_3702F(a1, a2, a3, a4, 24);
  for ( n3 = 0; n3 < 3; ++n3 )
  {
    for ( n73 = 73; n73 >= 0; --n73 )
      memmove(320 * n73 + 694090, 320 * n73 + 692170, 284);
    for ( n6 = 0; n6 < 6; ++n6 )
      memset(320 * n6 + 692170, 73, 284);
    result = j___delay(10);
  }
  for ( n71 = 71; n71 >= 0; --n71 )
    result = memmove(320 * n71 + 694730, 320 * n71 + 692170, 284);
  for ( n8 = 0; n8 < 8; ++n8 )
    result = memset(320 * n8 + 692170, 73, 284);
  return result;
}
