/*
 * func-name: sub_4EB59
 * func-address: 0x4eb59
 * callers: 0x1f1cc, 0x1f30a
 * callees: none
 */

void __cdecl __spoils<> sub_4EB59(int n17, int a2, int n655360)
{
  _BYTE *v3; // esi
  _BYTE *v4; // edi
  int v5; // ebp
  int v6; // ecx
  char v7; // ah
  char n17_1; // dh
  char n17_2; // dl
  _BYTE *v10; // [esp-24h] [ebp-24h]

  v3 = (_BYTE *)(n655360 + 1284);
  v4 = (_BYTE *)(a2 + 1284);
  HIWORD(v5) = 0;
  HIWORD(v6) = 0;
  v7 = -64;
  n17_1 = n17;
  do
  {
    v10 = v3;
    LOWORD(v6) = 312;
    n17_2 = n17;
    do
    {
      *v4++ = *v3;
      if ( !--n17_2 )
      {
        n17_2 = n17;
        v3 += n17;
      }
      --v6;
    }
    while ( v6 );
    v3 = v10;
    v4 += 8;
    if ( !--n17_1 )
    {
      n17_1 = n17;
      LOWORD(v5) = 320 * n17;
      v3 = &v10[v5];
    }
    --v7;
  }
  while ( v7 );
}
