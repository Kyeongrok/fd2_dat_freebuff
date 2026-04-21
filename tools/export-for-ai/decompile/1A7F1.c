/*
 * func-name: sub_1A7F1
 * func-address: 0x1a7f1
 * callers: 0x1a30b
 * callees: 0x3702f, 0x3776e
 */

int __fastcall sub_1A7F1(__int32 a1, int a2, int a3, int a4)
{
  int result; // eax

  result = sub_3702F(a1, a2, a3, a4, 8);
  if ( byte_53AF9 )
    return free(dword_53B0F);
  return result;
}
