/*
 * func-name: sub_41DEB
 * func-address: 0x41deb
 * callers: 0x41ec1, 0x41fee
 * callees: 0x39694, 0x39716, 0x3994c, 0x46f4f
 */

int __cdecl sub_41DEB(int a1, int a2)
{
  int i; // esi
  int v3; // eax
  int j; // esi

  for ( i = a1 + 12; ; i += *(_DWORD *)(i + 4) + 8 + (*(_DWORD *)(i + 4) & 1) )
  {
    v3 = strnicmp(i, aFmt, 4);                  // "fmt "
    if ( !v3 )
      break;
  }
  if ( *(_WORD *)(i + 10) == 1 && *(_WORD *)(i + 22) == 8 )
  {
    v3 = sub_39716(0, a2, 0, 0);
  }
  else if ( *(_WORD *)(i + 10) == 2 && *(_WORD *)(i + 22) == 8 )
  {
    v3 = sub_39716(0, a2, 2, 0);
  }
  else if ( *(_WORD *)(i + 10) == 1 && *(_WORD *)(i + 22) == 16 )
  {
    v3 = sub_39716(0, a2, 1, 1);
  }
  else if ( *(_WORD *)(i + 10) == 2 && *(_WORD *)(i + 22) == 16 )
  {
    v3 = sub_39716(0, a2, 3, 1);
  }
  sub_3994C(v3, a2, *(_DWORD *)(i + 12));
  // "data"
  for ( j = a1 + 12; strnicmp(j, aData, 4); j += (*(_DWORD *)(j + 4) & 1) + *(_DWORD *)(j + 4) + 8 )
    ;
  return sub_39694(0, a2, j + 8, *(_DWORD *)(j + 4));
}
