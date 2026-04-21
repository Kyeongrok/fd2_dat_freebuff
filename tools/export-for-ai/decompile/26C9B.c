/*
 * func-name: sub_26C9B
 * func-address: 0x26c9b
 * callers: 0x26a7a, 0x26b91
 * callees: 0x3702f, 0x3771c
 */

int __fastcall sub_26C9B(__int32 a1, int a2, int a3, int a4, int a5, int n320, int a7)
{
  int result; // eax
  int v9; // ebx
  int n9; // esi

  result = sub_3702F(a1, a2, a3, a4, 32);
  v9 = 6 * a7 + *(_DWORD *)(dword_53F66 + 14) + dword_53F66 + 4;
  for ( n9 = 0; n9 < 9; ++n9 )
  {
    result = memmove(a5, v9, 6);
    a5 += n320;
    v9 += 6;
  }
  return result;
}
