/*
 * func-name: sub_42640
 * func-address: 0x42640
 * callers: 0x44ca0
 * callees: none
 */

int __cdecl sub_42640(int a1, char a2, unsigned int n6)
{
  int v3; // ebx
  unsigned int n0xC0; // ecx
  _DWORD *v5; // edx

  v3 = a2 & 0xF;
  n0xC0 = a2 & 0xF0;
  v5 = (_DWORD *)(a1 + 4 * v3);
  if ( n0xC0 >= 0xC0 )
  {
    if ( n0xC0 <= 0xC0 )
      return *v5;
    if ( n0xC0 == 224 )
      return v5[16] | (v5[32] << 7);
    return -1;
  }
  if ( n0xC0 != 176 )
    return -1;
  if ( n6 < 0x5B )
  {
    if ( n6 < 7 )
    {
      if ( !n6 )
        return -1;
      if ( n6 <= 1 )
      {
        return *(_DWORD *)(a1 + 4 * v3 + 576);
      }
      else if ( n6 == 6 )
      {
        return *(_DWORD *)(a1 + 4 * v3 + 1024);
      }
      else
      {
        return -1;
      }
    }
    else if ( n6 <= 7 )
    {
      return *(_DWORD *)(a1 + 4 * v3 + 640);
    }
    else if ( n6 < 0xB )
    {
      if ( n6 == 10 )
        return *(_DWORD *)(a1 + 4 * v3 + 704);
      else
        return -1;
    }
    else if ( n6 <= 0xB )
    {
      return *(_DWORD *)(a1 + 4 * v3 + 768);
    }
    else if ( n6 == 64 )
    {
      return v5[208];
    }
    else
    {
      return -1;
    }
  }
  else if ( n6 <= 0x5B )
  {
    return v5[224];
  }
  else if ( n6 < 0x70 )
  {
    if ( n6 < 0x6E )
    {
      if ( n6 == 93 )
        return v5[240];
      else
        return -1;
    }
    else if ( n6 <= 0x6E )
    {
      return v5[48];
    }
    else
    {
      return v5[64];
    }
  }
  else if ( n6 <= 0x70 )
  {
    return v5[80];
  }
  else if ( n6 < 0x73 )
  {
    if ( n6 == 114 )
      return v5[96];
    else
      return -1;
  }
  else if ( n6 <= 0x73 )
  {
    return v5[112];
  }
  else if ( n6 == 119 )
  {
    return v5[128];
  }
  else
  {
    return -1;
  }
}
