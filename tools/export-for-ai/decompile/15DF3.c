/*
 * func-name: sub_15DF3
 * func-address: 0x15df3
 * callers: 0x13a9f
 * callees: 0x12e38, 0x3702f
 */

void __fastcall sub_15DF3(__int32 a1, int a2, int a3, int a4, int a5, _BYTE *a6)
{
  int j; // ebx
  _WORD v7[2]; // [esp-2h] [ebp-18h] BYREF
  char v8; // [esp+2h] [ebp-14h]
  int i; // [esp+6h] [ebp-10h]
  int v10; // [esp+12h] [ebp-4h]

  sub_3702F(a1, a2, a3, a4, 40);
  v10 = a3;
  for ( i = 0; ; ++i )
  {
    if ( i >= dword_53AC5 )
      goto LABEL_10;
    for ( j = 0; j < dword_53AC1; ++j )
    {
      sub_12E38((__int32)v7, a2, j, a4, j, i, (int)v7);
      LOBYTE(a2) = v8 & 0x60;
      if ( (v8 & 0x60) == 0x20 && v7[1] == a5 )
      {
        *a6 = j;
        a6[1] = i;
LABEL_10:
        JUMPOUT(0x15677);
      }
    }
  }
}
