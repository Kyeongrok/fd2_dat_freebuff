/*
 * func-name: sub_427C0
 * func-address: 0x427c0
 * callers: 0x42980
 * callees: none
 */

unsigned int __cdecl sub_427C0(int a1, char a2, unsigned int n6, unsigned __int8 n6_2)
{
  unsigned int n6_1; // eax
  int v5; // ecx
  unsigned int n176; // edi
  _DWORD *v7; // ebx

  n6_1 = n6;
  v5 = a2 & 0xF;
  n176 = a2 & 0xF0;
  v7 = (_DWORD *)(a1 + 4 * v5);
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
              n6_1 = n6_2;
              *(_DWORD *)(a1 + 4 * v5 + 576) = n6_2;
            }
            else if ( n6 == 6 )
            {
              n6_1 = n6_2;
              *(_DWORD *)(a1 + 4 * v5 + 1024) = n6_2;
            }
          }
        }
        else if ( n6 <= 7 )
        {
          n6_1 = n6_2;
          *(_DWORD *)(a1 + 4 * v5 + 640) = n6_2;
        }
        else if ( n6 < 0xB )
        {
          if ( n6 == 10 )
          {
            n6_1 = n6_2;
            *(_DWORD *)(a1 + 4 * v5 + 704) = n6_2;
          }
        }
        else if ( n6 <= 0xB )
        {
          n6_1 = n6_2;
          *(_DWORD *)(a1 + 4 * v5 + 768) = n6_2;
        }
        else if ( n6 == 64 )
        {
          n6_1 = n6_2;
          v7[208] = n6_2;
        }
      }
      else if ( n6 <= 0x5B )
      {
        n6_1 = n6_2;
        v7[224] = n6_2;
      }
      else if ( n6 < 0x70 )
      {
        if ( n6 < 0x6E )
        {
          if ( n6 == 93 )
          {
            n6_1 = n6_2;
            v7[240] = n6_2;
          }
        }
        else
        {
          n6_1 = n6_2;
          if ( n6 <= 0x6E )
            v7[48] = n6_2;
          else
            v7[64] = n6_2;
        }
      }
      else if ( n6 <= 0x70 )
      {
        n6_1 = n6_2;
        v7[80] = n6_2;
      }
      else if ( n6 < 0x73 )
      {
        if ( n6 == 114 )
        {
          n6_1 = n6_2;
          v7[96] = n6_2;
        }
      }
      else if ( n6 <= 0x73 )
      {
        n6_1 = n6_2;
        v7[112] = n6_2;
      }
      else if ( n6 == 119 )
      {
        n6_1 = n6_2;
        v7[128] = n6_2;
      }
    }
  }
  else if ( n176 <= 0xC0 )
  {
    n6_1 = (unsigned __int8)n6;
    *v7 = (unsigned __int8)n6;
  }
  else if ( n176 == 224 )
  {
    v7[16] = (unsigned __int8)n6;
    n6_1 = n6_2;
    v7[32] = n6_2;
  }
  return n6_1;
}
