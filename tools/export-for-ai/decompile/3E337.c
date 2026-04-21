/*
 * func-name: sub_3E337
 * func-address: 0x3e337
 * callers: 0x3e117
 * callees: 0x3e440
 */

unsigned __int8 *__cdecl sub_3E337(int a1, _DWORD *a2, int a3)
{
  unsigned __int8 *result; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  unsigned __int8 n104; // cl

  *(_BYTE *)(a3 + 23) = 0;
  *(_BYTE *)(a3 + 22) = 32;
  result = (unsigned __int8 *)sub_3E440(a1, a3);
  *(_DWORD *)(a3 + 4) = 0;
  if ( *result < 0x30u || *result > 0x39u )
  {
    if ( *result == 42 )
    {
      *a2 += 4;
      v5 = *(_DWORD *)(*a2 - 4);
      *(_DWORD *)(a3 + 4) = v5;
      if ( v5 < 0 )
      {
        *(_DWORD *)(a3 + 4) = -*(_DWORD *)(a3 + 4);
        *(_BYTE *)(a3 + 20) |= 8u;
      }
      ++result;
    }
  }
  else
  {
    do
    {
      v4 = *result++ - 48 + 10 * *(_DWORD *)(a3 + 4);
      *(_DWORD *)(a3 + 4) = v4;
    }
    while ( *result >= 0x30u && *result <= 0x39u );
  }
  *(_DWORD *)(a3 + 8) = -1;
  if ( *result == 46 )
  {
    ++result;
    *(_DWORD *)(a3 + 8) = 0;
    if ( *result == 42 )
    {
      *a2 += 4;
      v6 = *(_DWORD *)(*a2 - 4);
      *(_DWORD *)(a3 + 8) = v6;
      if ( v6 < 0 )
        *(_DWORD *)(a3 + 8) = -1;
      ++result;
    }
    else
    {
      while ( *result >= 0x30u && *result <= 0x39u )
      {
        v7 = *result++ - 48;
        *(_DWORD *)(a3 + 8) = v7 + 10 * *(_DWORD *)(a3 + 8);
      }
    }
  }
  n104 = *result;
  if ( *result >= 0x4Eu )
  {
    if ( *result > 0x4Eu )
    {
      if ( n104 < 0x6Cu )
      {
        if ( n104 == 104 )
        {
          ++result;
          *(_BYTE *)(a3 + 20) |= 0x10u;
        }
      }
      else if ( n104 <= 0x6Cu || n104 == 119 )
      {
        ++result;
        *(_BYTE *)(a3 + 20) |= 0x20u;
      }
      return result;
    }
LABEL_33:
    ++result;
    *(_BYTE *)(a3 + 20) |= 0x40u;
    return result;
  }
  if ( n104 < 0x46u )
    return result;
  if ( n104 <= 0x46u )
  {
    ++result;
    *(_BYTE *)(a3 + 20) |= 0x80u;
    return result;
  }
  if ( n104 == 76 )
    goto LABEL_33;
  return result;
}
