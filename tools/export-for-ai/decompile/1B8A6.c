/*
 * func-name: sub_1B8A6
 * func-address: 0x1b8a6
 * callers: 0x1567e, 0x18d8c, 0x1bbdc, 0x1bffe, 0x2872b, 0x28f65, 0x2aedb, 0x35123, 0x35854
 * callees: 0x3702f
 */

int __fastcall sub_1B8A6(__int32 a1, int a2, int a3, int a4, int a5)
{
  int v5; // ebx
  int n8; // eax

  sub_3702F(a1, a2, a3, a4, 8);
  v5 = 0;
  for ( n8 = 0; n8 < 8; ++n8 )
  {
    if ( *(char *)(80 * a5 + dword_53A45 + 2 * n8 + 10) >= 0 )
      ++v5;
  }
  return v5;
}
