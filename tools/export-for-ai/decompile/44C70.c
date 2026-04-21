/*
 * func-name: sub_44C70
 * func-address: 0x44c70
 * callers: 0x3ba0c
 * callees: none
 */

int __cdecl sub_44C70(int a1)
{
  int v1; // ebx
  int v2; // eax
  int v3; // edx

  v1 = 0;
  v2 = 0;
  if ( *(int *)(a1 + 28) > 0 )
  {
    v3 = *(_DWORD *)(a1 + 24);
    do
    {
      if ( *(_DWORD *)(v3 + 4) == 4 )
        ++v1;
      ++v2;
      v3 += 1748;
    }
    while ( v2 < *(_DWORD *)(a1 + 28) );
  }
  return v1;
}
