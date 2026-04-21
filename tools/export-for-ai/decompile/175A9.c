/*
 * func-name: sub_175A9
 * func-address: 0x175a9
 * callers: 0x1741c
 * callees: 0x3702f, 0x3706e, 0x3771c, 0x3776e
 */

int __fastcall sub_175A9(__int32 a1, int a2, int a3, int a4)
{
  int result; // eax
  int v5; // esi
  int n72; // ebx

  sub_3702F(a1, a2, a3, a4, 24);
  if ( dword_53A71 )
    free(dword_53A71);
  dword_53A71 = malloc(5184);
  result = 10944 * (n2_1 - 1);
  v5 = result + dword_53A49 + 32904 + 24 * (n10 - 1);
  for ( n72 = 0; n72 < 72; ++n72 )
  {
    result = memmove(dword_53A71 + 72 * n72, v5, 72);
    v5 += 456;
  }
  return result;
}
