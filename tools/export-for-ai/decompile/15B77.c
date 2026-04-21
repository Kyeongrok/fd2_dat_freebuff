/*
 * func-name: sub_15B77
 * func-address: 0x15b77
 * callers: 0x1598a
 * callees: 0x15da2, 0x1c269, 0x1f183, 0x3702f, 0x37af4, 0x4e866
 */

int __fastcall sub_15B77(__int32 a1, int a2, int a3, int a4, int n10, int a6, int a7)
{
  int v7; // edi
  int i; // esi
  double n8_1; // st7
  int v10; // ebx
  int j; // esi
  int v12; // ebx
  int k; // esi
  int m; // esi
  int n; // esi
  int v17; // ebx
  int v19; // [esp+0h] [ebp-20h]
  int v20; // [esp+4h] [ebp-1Ch]
  int n8; // [esp+8h] [ebp-18h]
  int n3; // [esp+8h] [ebp-18h]

  sub_3702F(a1, a2, a3, a4, 52);
  v7 = 0;
  v19 = *(unsigned __int16 *)sub_4E866(n10);
  if ( n10 < 13 )
  {
    for ( i = 0; i < a6; ++i )
    {
      if ( n10 < 10 || !sub_1F183(*(unsigned __int8 *)(i + a7)) )
      {
        v10 = dword_53A45 + 80 * *(unsigned __int8 *)(i + a7);
        if ( *(unsigned __int16 *)(v10 + 64) >= v19 )
          n8 = 8;
        else
          n8 = 24;
        if ( !*(_BYTE *)(v10 + 8) )
        {
          n8_1 = (double)n8 * dbl_50144;
          _CHP();
          n8 = (int)n8_1;
        }
        v7 += n8;
      }
    }
    return v7;
  }
  if ( n10 < 17 )
  {
    for ( j = 0; j < a6; ++j )
    {
      v12 = dword_53A45 + 80 * *(unsigned __int8 *)(j + a7);
      v20 = *(unsigned __int16 *)(v12 + 64);
      if ( *(unsigned __int16 *)(v12 + 66) / 3 <= v20 )
      {
        if ( *(unsigned __int16 *)(v12 + 66) / 2 <= v20 )
          n3 = 0;
        else
          n3 = 3;
      }
      else
      {
        n3 = 8;
      }
      if ( (*(_BYTE *)(v12 + 52) & 1) != 0 )
        n3 *= 2;
      v7 += n3;
    }
    return v7;
  }
  if ( n10 < 20 )
    return sub_15DA2(a6, a7, n10 + 17, 3);
  switch ( n10 )
  {
    case 20:
      for ( k = 0; k < a6; ++k )
      {
        if ( *(_BYTE *)(dword_53A45 + 80 * *(unsigned __int8 *)(k + a7) + 37) )
          v7 += 6;
      }
      break;
    case 21:
      for ( m = 0; m < a6; ++m )
      {
        if ( *(_BYTE *)(80 * *(unsigned __int8 *)(m + a7) + dword_53A45 + 38) )
          v7 += 6;
      }
      break;
    case 22:
      for ( n = 0; n < a6; ++n )
      {
        v17 = 80 * *(unsigned __int8 *)(n + a7);
        if ( !*(_BYTE *)(v17 + dword_53A45 + 39)
          && sub_1C269(*(unsigned __int8 *)(n + a7), *(unsigned __int8 *)(v17 + dword_53A45 + 39)) )
        {
          v7 += 6;
        }
      }
      break;
    case 26:
      return sub_15DA2(a6, a7, 37, 4);
    case 27:
      return sub_15DA2(a6, a7, 38, 4);
    default:
      return v7;
  }
  return v7;
}
