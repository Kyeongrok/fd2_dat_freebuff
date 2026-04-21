/*
 * func-name: sub_27816
 * func-address: 0x27816
 * callers: 0x275e6, 0x27d33, 0x27f4a, 0x2a29d, 0x2a857
 * callees: 0x3702f, 0x3771c, 0x3790a, 0x37910
 */

int __fastcall sub_27816(__int32 a1, int a2, int a3, int a4)
{
  int result; // eax
  int n3; // esi
  int n74; // ebx
  int n6; // ebx
  int n72; // ebx
  int n8; // ebx

  result = sub_3702F(a1, a2, a3, a4, 24);
  for ( n3 = 0; n3 < 3; ++n3 )
  {
    for ( n74 = 0; n74 < 74; ++n74 )
      memmove(320 * n74 + 692170, 320 * n74 + 694090, 284);
    for ( n6 = 0; n6 < 6; ++n6 )
      memset(320 * n6 + 715850, 73, 284);
    result = j___delay(10);
  }
  for ( n72 = 0; n72 < 72; ++n72 )
    result = memmove(320 * n72 + 692170, 320 * n72 + 694730, 284);
  for ( n8 = 0; n8 < 8; ++n8 )
    result = memset(320 * n8 + 715210, 73, 284);
  return result;
}
