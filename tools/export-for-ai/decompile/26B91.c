/*
 * func-name: sub_26B91
 * func-address: 0x26b91
 * callers: 0x2872b, 0x2a43e
 * callees: 0x26c9b, 0x3702f, 0x3790a, 0x37b29
 */

void __fastcall sub_26B91(__int32 a1, int a2, int a3, int a4, int a5)
{
  int n8; // esi
  int n8_1; // esi
  int v7; // edi
  int n8_2; // esi
  int n9; // esi
  int n8_3; // ebx
  _BYTE v11[40]; // [esp+0h] [ebp-48h] BYREF
  _BYTE v12[28]; // [esp+28h] [ebp-20h] BYREF
  int v13; // [esp+44h] [ebp-4h]

  sub_3702F(a1, a2, a3, a4, 88);
  v13 = a3;
  sprintf(v12, "%0.8d", n6_6);
  for ( n8 = 0; n8 < 8; ++n8 )
    v12[n8] -= 48;
  n6_6 -= a5;
  sprintf(v11, "%0.8d", n6_6);
  for ( n8_1 = 0; n8_1 < 8; ++n8_1 )
    v11[n8_1] -= 48;
  while ( 1 )
  {
    v7 = 1;
    for ( n8_2 = 0; n8_2 < 8; ++n8_2 )
    {
      if ( v12[n8_2] == v11[n8_2] )
      {
        v11[n8_2 + 20] = 0;
      }
      else
      {
        v11[n8_2 + 20] = 9;
        v7 = 0;
        if ( (unsigned __int8)--v12[n8_2] == 255 )
          v12[n8_2] = 9;
      }
    }
    if ( !v7 )
    {
      for ( n9 = 0; n9 < 9; ++n9 )
      {
        for ( n8_3 = 0; n8_3 < 8; ++n8_3 )
        {
          if ( v11[n8_3 + 20] )
            sub_26C9B(6 * n8_3 + 686736, 320, 9 * (unsigned __int8)v12[n8_3] + (unsigned __int8)v11[n8_3 + 20]-- - 1);
        }
        j___delay(10);
      }
    }
    if ( v7 )
      JUMPOUT(0x26B8A);
  }
}
