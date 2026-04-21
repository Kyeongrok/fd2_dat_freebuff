/*
 * func-name: sub_41430
 * func-address: 0x41430
 * callers: 0x3a98d
 * callees: none
 */

int __cdecl sub_41430(int a1)
{
  int v1; // ebx
  int v2; // eax
  int v3; // edx

  v1 = 0;
  v2 = 0;
  if ( *(int *)(a1 + 96) > 0 )
  {
    v3 = *(_DWORD *)(a1 + 92);
    do
    {
      if ( *(_DWORD *)(v3 + 4) == 4 )
        ++v1;
      ++v2;
      v3 += 2196;
    }
    while ( v2 < *(_DWORD *)(a1 + 96) );
  }
  return v1;
}
