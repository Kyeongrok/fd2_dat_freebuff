/*
 * func-name: sub_1B932
 * func-address: 0x1b932
 * callers: 0x190ac, 0x1aa1d, 0x1bbdc
 * callees: 0x17e0b, 0x18409, 0x1b9de, 0x3702f, 0x3771c, 0x3776e
 */

bool __fastcall sub_1B932(__int32 a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // eax
  int v7; // eax
  int v8; // esi
  int n6; // ebx

  v6 = sub_3702F(a1, a2, a3, a4, 32);
  sub_17E0B(v6, a2, a5, a4, a5);
  n3_3 = 0;
  do
  {
    v7 = sub_1B9DE(a5, a6);
    v8 = v7;
  }
  while ( !v7 );
  for ( n6 = 0; n6 <= 11; ++n6 )
    v7 = sub_18409(v7, a2, n6, a4, n6, dword_53C5B, n30, dword_53C5F);
  memmove(655360, dword_53C5F, 64000);
  free(dword_53C5B);
  free(dword_53C5F);
  free(n30);
  return v8 != -1;
}
