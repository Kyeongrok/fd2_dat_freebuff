/*
 * func-name: sub_1E5C0
 * func-address: 0x1e5c0
 * callers: 0x1a866, 0x1e292
 * callees: 0x10620, 0x3702f, 0x4e31c, 0x4e381
 */

__int16 __fastcall sub_1E5C0(__int32 a1, int a2, int a3, int a4, int n10)
{
  int v5; // esi
  _BOOL1 v6; // dl

  sub_3702F(a1, a2, a3, a4, 16);
  v5 = MEMORY[0x46C];
  do
  {
    sub_4E31C();
    v6 = sub_10620();
    if ( MEMORY[0x46C] - v5 >= n10 || MEMORY[0x46C] < v5 )
      v6 = 1;
  }
  while ( !v6 );
  return sub_4E381();
}
