/*
 * func-name: sub_1BB8C
 * func-address: 0x1bb8c
 * callers: 0x13a9f, 0x190ac, 0x1aa1d, 0x1bbdc, 0x1c220, 0x2872b, 0x28f65, 0x35123, 0x35854
 * callees: 0x3702f
 */

int __fastcall sub_1BB8C(__int32 a1, int a2, int a3, int a4, int a5, char a6)
{
  int n8; // edx
  char *v7; // eax

  sub_3702F(a1, a2, a3, a4, 8);
  for ( n8 = 0; n8 < 8; ++n8 )
  {
    v7 = (char *)(80 * a5 + dword_53A45 + 2 * n8 + 10);
    if ( *v7 < 0 )
    {
      *v7 = 0;
      v7[1] = a6;
      return 1;
    }
  }
  return -1;
}
