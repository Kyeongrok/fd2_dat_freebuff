/*
 * func-name: sub_44330
 * func-address: 0x44330
 * callers: 0x3aca3
 * callees: 0x3806a, 0x3806f, 0x43160
 */

_DWORD *__cdecl sub_44330(int a1)
{
  int v1; // eax
  int v2; // edx
  _DWORD *v4; // esi
  _DWORD *v5; // eax

  sub_3806A();
  v1 = 0;
  if ( *(int *)(a1 + 28) > 0 )
  {
    v2 = *(_DWORD *)(a1 + 24);
    do
    {
      if ( *(_DWORD *)(v2 + 4) == 1 )
        break;
      ++v1;
      v2 += 1748;
    }
    while ( v1 < *(_DWORD *)(a1 + 28) );
  }
  if ( v1 == *(_DWORD *)(a1 + 28) )
  {
    strcpy(&Corrupted__INI_file_n, "Out of sequence handles\n");
    sub_3806F(v1);
    return 0;
  }
  else
  {
    v4 = (_DWORD *)(1748 * v1 + *(_DWORD *)(a1 + 24));
    v4[1] = 2;
    v5 = sub_43160(v4);
    sub_3806F((int)v5);
    return v4;
  }
}
