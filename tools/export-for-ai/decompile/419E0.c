/*
 * func-name: sub_419E0
 * func-address: 0x419e0
 * callers: 0x3a19b
 * callees: none
 */

char __cdecl sub_419E0(_DWORD *a1)
{
  unsigned int v2; // edx
  int v3; // ebx

  if ( !a1 )
    // W?seekoff$:streambuf$n(lii)l
    // doubtful name
    return -1;
  v2 = a1[11];
  if ( v2 < 0xFFFFFFFE )
  {
    v3 = a1[10];
    if ( a1[11] == v3 )
    {
      // W?seekoff$:streambuf$n(lii)l
      // doubtful name
      return -1;
    }
    else
    {
      a1[11] = v3;
      return v3 ^ 1;
    }
  }
  else if ( v2 == -1 )
  {
    a1[11] = a1[10];
    return 1;
  }
  else
  {
    a1[9] = 0;
    a1[11] = -1;
    return 0;
  }
}
