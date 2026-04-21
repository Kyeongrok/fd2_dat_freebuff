/*
 * func-name: sub_2C67D
 * func-address: 0x2c67d
 * callers: 0x2ff01, 0x31266
 * callees: 0x25a96, 0x25b45, 0x2eb9f, 0x3702f, 0x37af4, 0x3cbd5, 0x3cbe8
 */

int __fastcall sub_2C67D(__int32 a1, int a2, int n3, int a4, int a5, int a6, int a7, int a8, unsigned __int8 n7)
{
  double v9; // rax
  int n5; // ebx
  int v12; // ebx
  int n2; // ebx
  double v14; // st7
  int n2_1; // ebx
  int n2_2; // ebx
  _DWORD dst_[5]; // [esp+0h] [ebp-54h] BYREF
  double v18; // [esp+14h] [ebp-40h]
  double v19; // [esp+1Ch] [ebp-38h]
  void *v20; // [esp+24h] [ebp-30h]
  char v21; // [esp+28h] [ebp-2Ch]
  int v22; // [esp+2Ch] [ebp-28h]
  float v23; // [esp+30h] [ebp-24h]
  int v24; // [esp+34h] [ebp-20h]
  unsigned __int8 n30; // [esp+38h] [ebp-1Ch]
  unsigned __int8 v26; // [esp+3Ch] [ebp-18h]
  char v27; // [esp+40h] [ebp-14h]
  int n3_1; // [esp+50h] [ebp-4h]

  sub_3702F(a1, a2, n3, a4, 108);
  n3_1 = n3;
  v23 = 0.017453277;
  qmemcpy(dst_, &src__52, sizeof(dst_));
  v20 = off_52619;
  v21 = algn_5261D;
  v26 = 0;
  n30 = 30;
  HIDWORD(v9) = 80 * a5;
  v27 = *(_BYTE *)(80 * a5 + n8_0 + 6);
  if ( !v27 )
  {
    n30 = 90;
    for ( n3 = 0; n3 < 3; ++n3 )
    {
      HIDWORD(v9) = -dst_[n3];
      dst_[n3] = HIDWORD(v9);
      *((_BYTE *)&v20 + n3) = 0;
    }
  }
  LODWORD(v9) = n7;
  switch ( n7 )
  {
    case 0u:
      sub_25A96(SLODWORD(v9), SHIDWORD(v9), n3, 0, dword_54153, 2, 1);
      n42 = 0;
      byte_540CA = 0;
      return 7;
    case 3u:
      if ( !byte_540CA )
      {
        for ( n5 = 0; n5 < 5; ++n5 )
        {
          dword_540B0[n5] = -n5;
          byte_540C4[n5] = 0;
        }
        v12 = dword_54090;
        dword_54090 = dword_54098;
        dword_54098 = v12;
        n42_1 = n42_0;
        n42_0 = (unsigned __int8)n42;
        byte_540CA = 1;
      }
      return 12;
    case 6u:
      sub_25A96(6, SHIDWORD(v9), n3, 0, dword_54153, 3, 1);
      n42 = 42;
      return 7;
    case 1u:
    case 2u:
    case 7u:
    case 8u:
      for ( n2 = 0; n2 < 5; ++n2 )
      {
        v22 = 72 * n2;
        v14 = (double)(72 * n2) * v23;
        v19 = v14;
        LODWORD(v9) = cos(v14);
        v18 = v9;
        LOWORD(v9) = n30;
        v24 = LODWORD(v9);
        _CHP(dst_[0], dst_[1], v14);
        v22 = (int)v14;
        dword_54088[n2] = (int)v14;
        LODWORD(v9) = sin(v19);
        v19 = v9;
        LOWORD(v9) = (unsigned __int8)n42;
        v24 = LODWORD(v9);
        _CHP(dst_[0], dst_[1], v14);
        v22 = (int)v14;
        dword_5409C[n2] = (int)v14;
        if ( v27 )
        {
          if ( (n7 == 1 || n7 == 7) && n2 < 2 || (n7 == 2 || n7 == 8) && n2 > 1 )
            sub_2EB9F(a6, 4, a7 + a8 * dword_5409C[n2] + dword_54088[n2], a8, -1);
        }
        else if ( n7 == 2 || n7 == 8 )
        {
          HIDWORD(v9) = dword_54088[n2] + a7 + a8 * dword_5409C[n2];
          sub_2EB9F(a6, 4, SHIDWORD(v9), a8, -1);
        }
      }
      if ( n7 == 2 )
      {
        n42 += 6;
      }
      else if ( n7 == 8 )
      {
        n42 -= 6;
      }
      return 0;
  }
  if ( n7 != 4 && n7 != 5 )
    return 0;
  for ( n2_1 = 0; n2_1 < 5; ++n2_1 )
  {
    if ( dword_540B0[n2_1] < 0 )
      n42 = 4;
    else
      n42 = dword_540B0[n2_1];
    if ( n42 == 1 )
      byte_540C4[n2_1] = 5;
    if ( v27 )
    {
      if ( n7 == 4 && n2_1 < 2 || n7 == 5 && n2_1 > 1 )
      {
LABEL_51:
        HIDWORD(v9) = dst_[(unsigned __int8)n42]
                    + dword_54088[n2_1]
                    + a7
                    + a8 * (dword_5409C[n2_1] + *((unsigned __int8 *)&v20 + (unsigned __int8)n42));
        sub_2EB9F(a6, (unsigned __int8)n42, SHIDWORD(v9), a8, -1);
        continue;
      }
    }
    else if ( n7 == 5 )
    {
      goto LABEL_51;
    }
  }
  LODWORD(v9) = n7;
  if ( n7 == 5 )
  {
    for ( n2_2 = 0; n2_2 < 5; ++n2_2 )
    {
      if ( byte_540C4[n2_2] )
      {
        HIDWORD(v9) = a7 + a8 * (dword_5409C[n2_2] - 20);
        sub_2EB9F(a6, (unsigned __int8)byte_540C4[n2_2], HIDWORD(v9) + dword_54088[n2_2] - 60, a8, -1);
        LODWORD(v9) = (unsigned __int8)++byte_540C4[n2_2];
        if ( LODWORD(v9) == 10 )
          byte_540C4[n2_2] = 0;
      }
      if ( !dword_540B0[n2_2] )
      {
        if ( n2_2 && n2_2 != 2 )
          sub_25B45(SLODWORD(v9), SHIDWORD(v9), n2_2, 0, dword_54153, 1, 1);
        else
          sub_25A96(SLODWORD(v9), SHIDWORD(v9), n2_2, 0, dword_54153, 1, 1);
      }
      LODWORD(v9) = 4 * n2_2;
      if ( ++dword_540B0[n2_2] == 5 )
        dword_540B0[n2_2] = 0;
      if ( dword_540B0[n2_2] == 2 )
        v26 = 1;
    }
  }
  return v26;
}
