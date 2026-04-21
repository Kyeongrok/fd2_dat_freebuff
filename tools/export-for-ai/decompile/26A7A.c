/*
 * func-name: sub_26A7A
 * func-address: 0x26a7a
 * callers: 0x28cbd
 * callees: 0x26c9b, 0x3702f, 0x3790a, 0x37b29
 */

int __fastcall sub_26A7A(__int32 a1, int a2, int a3, int a4, int a5)
{
  int n8; // esi
  int result; // eax
  int n8_1; // esi
  int v8; // edi
  int n8_2; // esi
  int n9; // esi
  int n8_3; // ebx
  _BYTE v12[20]; // [esp+0h] [ebp-48h] BYREF
  _BYTE v13[48]; // [esp+14h] [ebp-34h] BYREF
  int v14; // [esp+44h] [ebp-4h]

  sub_3702F(a1, a2, a3, a4, 88);
  v14 = a3;
  sprintf(v13, "%0.8d", n6_6);
  for ( n8 = 0; n8 < 8; ++n8 )
    v13[n8] -= 48;
  n6_6 += a5;
  result = sprintf(v12, "%0.8d", n6_6);
  for ( n8_1 = 0; n8_1 < 8; ++n8_1 )
    v12[n8_1] -= 48;
  do
  {
    v8 = 1;
    for ( n8_2 = 0; n8_2 < 8; ++n8_2 )
    {
      result = (unsigned __int8)v12[n8_2];
      if ( (unsigned __int8)v13[n8_2] == result )
      {
        v13[n8_2 + 20] = 0;
      }
      else
      {
        v13[n8_2 + 20] = 1;
        v8 = 0;
      }
    }
    if ( !v8 )
    {
      for ( n9 = 0; n9 < 9; ++n9 )
      {
        for ( n8_3 = 0; n8_3 < 8; ++n8_3 )
        {
          if ( v13[n8_3 + 20] )
          {
            sub_26C9B(6 * n8_3 + 686736, 320, (unsigned __int8)v13[n8_3 + 20] + 9 * (unsigned __int8)v13[n8_3]);
            if ( ++v13[n8_3 + 20] == 10 && ++v13[n8_3] == 10 )
              v13[n8_3] = 0;
          }
        }
        result = j___delay(10);
      }
    }
  }
  while ( !v8 );
  return result;
}
