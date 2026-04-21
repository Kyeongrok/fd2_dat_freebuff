/*
 * func-name: sub_1B5F1
 * func-address: 0x1b5f1
 * callers: 0x1b41d
 * callees: 0x34894, 0x3702f
 */

int __fastcall sub_1B5F1(__int32 a1, int a2, int a3, int a4, int n2)
{
  int v5; // esi
  int n6; // ebx
  unsigned __int8 *v7; // eax

  sub_3702F(a1, a2, a3, a4, 20);
  v5 = 0;
  for ( n6 = 0; n6 < n6_0; ++n6 )
  {
    v7 = (unsigned __int8 *)(80 * n6 + dword_53A45);
    if ( v7[6] == n2 && v7[7] != 121 && v7[31] != 10 && !sub_34894(n6) )
      ++v5;
  }
  return v5;
}
