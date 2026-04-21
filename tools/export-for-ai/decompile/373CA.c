/*
 * func-name: sub_373CA
 * func-address: 0x373ca
 * callers: 0x10010, 0x11019, 0x111ba, 0x19df7, 0x1f894, 0x20421, 0x25ebb, 0x2968d, 0x2986f, 0x2e95b
 * callees: 0x3cf26, 0x3db46, 0x3dc69, 0x3dce0, 0x3ddb5
 */

int __cdecl sub_373CA(_BYTE *a1, unsigned int a2, int a3, int a4)
{
  int result; // eax
  unsigned int n0x200; // esi
  unsigned int n0x200_2; // edi
  unsigned int n0x200_3; // edi
  int n0x200_4; // eax
  bool v9; // edi
  _BYTE *v10; // esi
  unsigned __int8 *v11; // eax
  int n13; // eax
  unsigned __int8 *v13; // eax
  unsigned int v14; // [esp+0h] [ebp-8h]
  unsigned int n0x200_1; // [esp+24h] [ebp+1Ch]

  if ( (*(_BYTE *)(a4 + 12) & 1) != 0 )
  {
    n0x200_1 = a2 * a3;
    if ( n0x200_1 )
    {
      if ( !*(_DWORD *)(a4 + 8) )
        _ioalloc(a4);
      v14 = 0;
      if ( (*(_BYTE *)(a4 + 12) & 0x40) != 0 )
      {
        n0x200 = n0x200_1;
        while ( 1 )
        {
          if ( *(_DWORD *)(a4 + 4) )
          {
            n0x200_2 = *(_DWORD *)(a4 + 4);
            if ( n0x200_2 > n0x200 )
              n0x200_2 = n0x200;
            memcpy(a1, *(_DWORD *)a4, n0x200_2);
            *(_DWORD *)a4 += n0x200_2;
            v14 += n0x200_2;
            *(_DWORD *)(a4 + 4) -= n0x200_2;
            n0x200 -= n0x200_2;
            a1 += n0x200_2;
            if ( *(_DWORD *)(a4 + 20) + *(_DWORD *)(a4 + 8) != *(_DWORD *)a4 )
              break;
          }
          if ( !n0x200 )
            break;
          if ( n0x200 >= *(_DWORD *)(a4 + 20) || (*(_BYTE *)(a4 + 13) & 4) != 0 )
          {
            n0x200_3 = n0x200;
            if ( (*(_BYTE *)(a4 + 13) & 4) == 0 && n0x200 > 0x200 )
              LOWORD(n0x200_3) = n0x200 & 0xFE00;
            n0x200_4 = _qread(*(_DWORD *)(a4 + 16), a1, n0x200_3);
            if ( n0x200_4 == -1 )
            {
              *(_BYTE *)(a4 + 12) |= 0x20u;
              return v14 / a2;
            }
            if ( !n0x200_4 )
              goto LABEL_22;
            a1 += n0x200_4;
            v14 += n0x200_4;
            n0x200 -= n0x200_4;
            if ( n0x200_4 != n0x200_3 )
              return v14 / a2;
          }
          else if ( !_fill_buffer(a4) )
          {
            return v14 / a2;
          }
        }
      }
      else
      {
        v9 = 1;
        if ( *(_DWORD *)(a4 + 4) )
          v9 = *(_DWORD *)(a4 + 20) + *(_DWORD *)(a4 + 8) == *(_DWORD *)a4;
        v10 = a1;
        while ( 1 )
        {
          if ( !*(_DWORD *)(a4 + 4) )
          {
            if ( !v9 || !_fill_buffer(a4) )
              return v14 / a2;
            if ( *(_DWORD *)(a4 + 20) + *(_DWORD *)(a4 + 8) != *(_DWORD *)a4 )
              v9 = 0;
          }
          --*(_DWORD *)(a4 + 4);
          v11 = (unsigned __int8 *)(*(_DWORD *)a4)++;
          n13 = *v11;
          if ( n13 == 13 )
          {
            if ( !*(_DWORD *)(a4 + 4) )
            {
              if ( !v9 || !_fill_buffer(a4) )
                return v14 / a2;
              if ( *(_DWORD *)(a4 + 20) + *(_DWORD *)(a4 + 8) != *(_DWORD *)a4 )
                v9 = 0;
            }
            --*(_DWORD *)(a4 + 4);
            v13 = (unsigned __int8 *)(*(_DWORD *)a4)++;
            n13 = *v13;
          }
          if ( n13 == 26 )
            break;
          *v10 = n13;
          if ( (*(_BYTE *)(a4 + 12) & 0x30) == 0 )
          {
            ++v10;
            ++v14;
            if ( v10 != &a1[n0x200_1] )
              continue;
          }
          return v14 / a2;
        }
LABEL_22:
        *(_BYTE *)(a4 + 12) |= 0x10u;
      }
      return v14 / a2;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    *(_DWORD *)sub_3DB46() = 4;
    result = 0;
    *(_BYTE *)(a4 + 12) |= 0x20u;
  }
  return result;
}
