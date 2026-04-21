/*
 * func-name: sub_45698
 * func-address: 0x45698
 * callers: 0x45a20
 * callees: none
 */

_DWORD *__cdecl sub_45698(int a1, char a2, unsigned int n6, unsigned __int8 a4)
{
  unsigned int n176; // esi
  int v5; // ecx
  _DWORD *result; // eax

  n176 = a2 & 0xF0;
  v5 = a2 & 0xF;
  result = (_DWORD *)(a1 + 4 * v5);
  if ( n176 < 0xC0 )
  {
    if ( n176 == 176 )
    {
      if ( n6 < 0x5B )
      {
        if ( n6 < 7 )
        {
          if ( n6 )
          {
            if ( n6 <= 1 )
            {
              result = (_DWORD *)a4;
              *(_DWORD *)(a1 + 4 * v5 + 576) = a4;
            }
            else if ( n6 == 6 )
            {
              result = (_DWORD *)a4;
              *(_DWORD *)(a1 + 4 * v5 + 1024) = a4;
            }
          }
        }
        else if ( n6 <= 7 )
        {
          result = (_DWORD *)a4;
          *(_DWORD *)(a1 + 4 * v5 + 640) = a4;
        }
        else if ( n6 < 0xB )
        {
          if ( n6 == 10 )
          {
            result = (_DWORD *)a4;
            *(_DWORD *)(a1 + 4 * v5 + 704) = a4;
          }
        }
        else if ( n6 <= 0xB )
        {
          result = (_DWORD *)a4;
          *(_DWORD *)(a1 + 4 * v5 + 768) = a4;
        }
        else if ( n6 == 64 )
        {
          result[208] = a4;
        }
      }
      else if ( n6 <= 0x5B )
      {
        result[224] = a4;
      }
      else if ( n6 < 0x70 )
      {
        if ( n6 < 0x6E )
        {
          if ( n6 == 93 )
            result[240] = a4;
        }
        else if ( n6 <= 0x6E )
        {
          result[48] = a4;
        }
        else
        {
          result[64] = a4;
        }
      }
      else if ( n6 <= 0x70 )
      {
        result[80] = a4;
      }
      else if ( n6 < 0x73 )
      {
        if ( n6 == 114 )
          result[96] = a4;
      }
      else if ( n6 <= 0x73 )
      {
        result[112] = a4;
      }
      else if ( n6 == 119 )
      {
        result[128] = a4;
      }
    }
  }
  else if ( n176 <= 0xC0 )
  {
    *result = (unsigned __int8)n6;
  }
  else if ( n176 == 224 )
  {
    result[16] = (unsigned __int8)n6;
    result[32] = a4;
  }
  return result;
}
