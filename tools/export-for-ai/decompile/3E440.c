/*
 * func-name: sub_3E440
 * func-address: 0x3e440
 * callers: 0x3e337
 * callees: none
 */

_BYTE *__cdecl sub_3E440(_BYTE *a1, int a2)
{
  *(_BYTE *)(a2 + 20) = 0;
  while ( 1 )
  {
    switch ( *a1 )
    {
      case '-':
        *(_BYTE *)(a2 + 20) |= 8u;
        goto LABEL_13;
      case '#':
        *(_BYTE *)(a2 + 20) |= 1u;
        goto LABEL_13;
      case '+':
        *(_BYTE *)(a2 + 20) |= 4u;
        *(_BYTE *)(a2 + 20) &= ~2u;
        goto LABEL_13;
    }
    if ( *a1 != 32 )
      break;
    if ( (*(_BYTE *)(a2 + 20) & 4) == 0 )
      *(_BYTE *)(a2 + 20) |= 2u;
LABEL_13:
    ++a1;
  }
  if ( *a1 == 48 )
  {
    *(_BYTE *)(a2 + 22) = 48;
    goto LABEL_13;
  }
  return a1;
}
