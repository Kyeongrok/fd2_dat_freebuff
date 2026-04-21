/*
 * func-name: sub_145CD
 * func-address: 0x145cd
 * callers: 0x10c50, 0x14121, 0x14237, 0x14b78, 0x18890
 * callees: 0x14625, 0x3702f
 */

void __fastcall sub_145CD(__int32 a1, int a2, int a3, int a4, int a5)
{
  unsigned __int8 *v5; // ebx
  int n6; // esi

  sub_3702F(a1, a2, a3, a4, 24);
  v5 = (unsigned __int8 *)dword_53A45;
  for ( n6 = 0; n6 < n6_0; ++n6 )
  {
    if ( (v5[5] & 1) == 0 && (!a5 && v5[6] || a5 && !v5[6]) )
      sub_14625(*v5, v5[1]);
    v5 += 80;
  }
  JUMPOUT(0x145C9);
}
