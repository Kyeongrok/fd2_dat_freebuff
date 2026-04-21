/*
 * func-name: sub_4EBAB
 * func-address: 0x4ebab
 * callers: 0x15f0e, 0x1c4cc, 0x1cb94, 0x1db65, 0x1df58, 0x22470, 0x22547, 0x32999
 * callees: 0x4ec66
 */

void __cdecl sub_4EBAB(_BYTE *a1, __int16 *a2, int a3)
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
      if ( v7 )
        *a1 = v7;
      ++a1;
      --v6;
    }
    while ( v6 );
    a1 = &v8[a3];
    --v5;
  }
  while ( v5 );
}
