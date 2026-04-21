/*
 * func-name: sub_17643
 * func-address: 0x17643
 * callers: 0x1741c, 0x176b4
 * callees: 0x3702f, 0x3771c
 */

int __fastcall sub_17643(__int32 a1, int a2, int a3, int a4)
{
  int result; // eax
  int v5; // esi
  int n72; // ebx

  sub_3702F(a1, a2, a3, a4, 24);
  result = 10944 * (n2_1 - 1);
  v5 = result + dword_53A49 + 32904 + 24 * (n10 - 1);
  for ( n72 = 0; n72 < 72; ++n72 )
  {
    result = memmove(v5, 72 * n72 + dword_53A71, 72);
    v5 += 456;
  }
  return result;
}
