/*
 * func-name: sub_1974C
 * func-address: 0x1974c
 * callers: 0x1956b, 0x196cb, 0x26996, 0x27738, 0x27d33, 0x27f4a, 0x29bcb, 0x2a29d, 0x2a857
 * callees: 0x3702f, 0x3771c
 */

void __fastcall sub_1974C(__int32 a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int n86; // esi
  int n86_1; // ebx

  sub_3702F(a1, a2, a3, a4, 28);
  n86 = 86;
  memmove(a6, dword_53C5F, 64000);
  if ( a5 + 86 >= 200 )
    n86 = 200 - a5;
  for ( n86_1 = 0; n86_1 < n86; ++n86_1 )
    memmove(320 * n86_1 + a6 + 5 + 320 * a5, 320 * n86_1 + a7 + 35845, 310);
  memmove(655360, a6, 64000);
  JUMPOUT(0x16F04);
}
