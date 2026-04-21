/*
 * func-name: sub_12263
 * func-address: 0x12263
 * callers: 0x10010, 0x13a9f, 0x190ac, 0x35730, 0x35854, 0x35a0d
 * callees: 0x12e38, 0x3702f
 */

char __fastcall sub_12263(__int32 a1, int a2, int a3, int a4)
{
  int v4; // eax
  int i; // esi
  int j; // ebx
  _WORD v8[2]; // [esp-2h] [ebp-10h] BYREF
  char v9; // [esp+2h] [ebp-Ch]
  int v10; // [esp+Ah] [ebp-4h]

  LOBYTE(v4) = sub_3702F(a1, a2, a3, a4, 32);
  v10 = a3;
  for ( i = 0; i < dword_53AC5; ++i )
  {
    for ( j = 0; j < dword_53AC1; ++j )
    {
      sub_12E38(j, i, v8);
      LOBYTE(v4) = v9 & 0x60;
      if ( (v9 & 0x60) == 0x20 )
      {
        LOBYTE(v4) = *(_BYTE *)(v8[1] + dword_53AD5);
        if ( (_BYTE)v4 )
        {
          v4 = dword_53A51 + 4 * (j + i * dword_53AC1) + 4;
          ++*(_WORD *)v4;
          *(_BYTE *)(v4 + 2) = 0;
        }
      }
    }
  }
  return v4;
}
