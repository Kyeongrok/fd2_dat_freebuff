/*
 * func-name: sub_3FDAF
 * func-address: 0x3fdaf
 * callers: 0x37ed8
 * callees: 0x38de4, 0x3901e, 0x3ed6a
 */

int __fastcall sub_3FDAF(int a1)
{
  int n15; // esi

  for ( n15 = 15; n15 >= 0; --n15 )
  {
    a1 = dword_541B4[n15];
    if ( a1 )
      sub_3901E(a1, dword_541B4[n15]);
  }
  sub_38DE4(a1);
  return sub_3ED6A();
}
