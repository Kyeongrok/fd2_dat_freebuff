/*
 * func-name: sub_4EC31
 * func-address: 0x4ec31
 * callers: 0x15f84, 0x16559, 0x1956b, 0x19953
 * callees: 0x4ec66
 */

void __cdecl __spoils<> sub_4EC31(_BYTE *a1, __int16 *a2, int a3)
{
  __int16 v4; // bp
  __int16 v5; // dx
  int v6; // ecx
  char v7; // al
  _BYTE *v8; // [esp-24h] [ebp-24h]

  v4 = *a2;
  v5 = a2[1];
  HIWORD(v6) = 0;
  do
  {
    v8 = a1;
    LOWORD(v6) = v4;
    do
    {
      sub_4EC66();
      *a1-- = v7;
      --v6;
    }
    while ( v6 );
    a1 = &v8[a3];
    --v5;
  }
  while ( v5 );
}
