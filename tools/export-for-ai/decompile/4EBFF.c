/*
 * func-name: sub_4EBFF
 * func-address: 0x4ebff
 * callers: 0x15f84, 0x16559, 0x17aed, 0x17eef, 0x18c6d, 0x19953, 0x265ec, 0x27079, 0x27738, 0x279bc, 0x27d33, 0x27f4a, 0x2825b, 0x29bcb, 0x29daa, 0x2a29d, 0x2a43e, 0x2a857, 0x2af28, 0x31c49
 * callees: 0x4ec66
 */

void __cdecl __spoils<> sub_4EBFF(_BYTE *a1, __int16 *a2, int a3)
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
      *a1++ = v7;
      --v6;
    }
    while ( v6 );
    a1 = &v8[a3];
    --v5;
  }
  while ( v5 );
}
