/*
 * func-name: sub_43230
 * func-address: 0x43230
 * callers: 0x43270, 0x449e0
 * callees: 0x42980
 */

void __cdecl sub_43230(int a1)
{
  int v1; // esi
  int n16; // edi
  int n6; // edx

  v1 = a1;
  for ( n16 = 0; n16 < 16; ++n16 )
  {
    n6 = *(_DWORD *)(v1 + 848);
    if ( n6 != -1 )
      sub_42980(a1, n16 | 0xB0, 7u, n6, 0);
    v1 += 4;
  }
}
