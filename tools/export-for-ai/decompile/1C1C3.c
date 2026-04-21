/*
 * func-name: sub_1C1C3
 * func-address: 0x1c1c3
 * callers: 0x1bffe, 0x2872b
 * callees: 0x3702f, 0x4e88e, 0x4e8bc
 */

int __fastcall sub_1C1C3(__int32 a1, int a2, int a3, int a4, int n6, int a6)
{
  int v6; // esi
  int v7; // ebx
  int n6_1; // eax

  sub_3702F(a1, a2, a3, a4, 16);
  v6 = sub_4E88E(*(unsigned __int8 *)(80 * n6 + dword_53A45 + 32));
  v7 = (unsigned __int8)*sub_4E8BC(a6);
  for ( n6_1 = 0; n6_1 < 6; ++n6_1 )
  {
    if ( v7 == *(unsigned __int8 *)(v6 + n6_1) )
      return 1;
  }
  return 0;
}
