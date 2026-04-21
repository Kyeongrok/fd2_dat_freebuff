/*
 * func-name: sub_424B0
 * func-address: 0x424b0
 * callers: 0x43270, 0x452f0
 * callees: none
 */

int __cdecl sub_424B0(_DWORD *a1)
{
  int n4; // eax
  int v2; // ecx
  char v3; // bl

  n4 = 4;
  v2 = 0;
  do
  {
    v3 = *(_BYTE *)(*a1)++;
    v2 = v3 & 0x7F | (v2 << 7);
    if ( v3 >= 0 )
      break;
    --n4;
  }
  while ( n4 );
  return v2;
}
