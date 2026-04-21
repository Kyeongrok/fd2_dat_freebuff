/*
 * func-name: sub_44CD0
 * func-address: 0x44cd0
 * callers: 0x3bbea
 * callees: none
 */

int __cdecl sub_44CD0(int a1, int a2)
{
  int v3; // eax
  int v4; // edx

  if ( !a1 )
    return 0;
  v3 = a1;
  v4 = 0;
  do
  {
    if ( a2 - 1 == *(_DWORD *)(v3 + 1300) )
      ++v4;
    v3 += 4;
  }
  while ( v3 != a1 + 64 );
  return v4;
}
