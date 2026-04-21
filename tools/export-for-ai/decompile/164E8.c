/*
 * func-name: sub_164E8
 * func-address: 0x164e8
 * callers: 0x15f84
 * callees: 0x16559, 0x25a96, 0x3702f
 */

int __fastcall sub_164E8(__int32 a1, int a2, int a3, int a4)
{
  int n3; // eax

  sub_3702F(a1, a2, a3, a4, 16);
  if ( ++dword_53A14 == 2 )
  {
    if ( ++n3_2 == 4 )
      n3_2 = 0;
    n3 = n3_2;
    if ( n3_2 == 3 )
      n3 = 1;
    sub_16559(n3);
    dword_53A14 = 0;
  }
  return sub_25A96(dword_53EEC, 2, 1);
}
