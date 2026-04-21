/*
 * func-name: sub_12C0D
 * func-address: 0x12c0d
 * callers: 0x117e7, 0x149f8, 0x1741c, 0x176b4, 0x179d5, 0x18d8c, 0x1acf3, 0x1bbdc
 * callees: 0x34894, 0x3702f
 */

int __fastcall sub_12C0D(__int32 a1, int a2, int a3, int a4)
{
  unsigned __int8 *v4; // ebx
  int n6; // esi

  sub_3702F(a1, a2, a3, a4, 16);
  v4 = (unsigned __int8 *)dword_53A45;
  for ( n6 = 0; n6 < n6_0; ++n6 )
  {
    if ( *v4 == dword_53AB1 && v4[1] == dword_53AB5 && !sub_34894(n6) )
      return n6;
    v4 += 80;
  }
  return -1;
}
