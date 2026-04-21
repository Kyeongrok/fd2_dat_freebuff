/*
 * func-name: sub_41460
 * func-address: 0x41460
 * callers: 0x392d0
 * callees: 0x3806a, 0x3806f, 0x39521
 */

int __cdecl sub_41460(int a1)
{
  int v1; // eax
  int v2; // edx
  int v4; // eax
  int v5; // esi
  int v6; // eax

  sub_3806A();
  v1 = 0;
  if ( *(int *)(a1 + 96) > 0 )
  {
    v2 = *(_DWORD *)(a1 + 92);
    do
    {
      if ( *(_DWORD *)(v2 + 4) == 1 )
        break;
      ++v1;
      v2 += 2196;
    }
    while ( v1 < *(_DWORD *)(a1 + 96) );
  }
  if ( v1 == *(_DWORD *)(a1 + 96) )
  {
    strcpy(&Corrupted__INI_file_n, "Out of sample handles\n");
    sub_3806F(v1);
    return 0;
  }
  else
  {
    v4 = 2196 * v1;
    v5 = v4 + *(_DWORD *)(a1 + 92);
    sub_39521(v4, v5);
    sub_3806F(v6);
    return v5;
  }
}
