/*
 * func-name: sub_13A44
 * func-address: 0x13a44
 * callers: 0x1300d, 0x13a9f, 0x18890
 * callees: 0x12e38, 0x3702f
 */

char __fastcall sub_13A44(__int32 a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // eax
  int v8; // eax
  int n255; // edx
  _BYTE v11[2]; // [esp-2h] [ebp-8h] BYREF
  unsigned __int16 v12; // [esp+0h] [ebp-6h]
  char v13; // [esp+2h] [ebp-4h]

  sub_3702F(a1, a2, a3, a4, 24);
  LOBYTE(v7) = sub_12E38((__int32)v11, a2, a3, a4, a5, a6, (int)v11);
  if ( (v13 & 0x60) == 0 )
  {
    LOBYTE(v7) = v12;
    if ( v12 )
    {
      v8 = dword_53A55 + 2 * (v12 - 1);
      n255 = *(unsigned __int8 *)(v8 + 51);
      v7 = *(unsigned __int8 *)(v8 + 52);
      if ( n255 != 255 && v7 == a7 )
        ::n255 = n255;
    }
  }
  return v7;
}
