/*
 * func-name: sub_3E536
 * func-address: 0x3e536
 * callers: 0x3e619
 * callees: 0x46e61
 */

_BYTE *__cdecl sub_3E536(_BYTE *a1, int a2, int a3)
{
  _BYTE *v3; // ebx
  _BYTE *result; // eax
  _BYTE *v5; // ecx
  _BYTE *v6; // ebx
  int v7; // [esp+0h] [ebp-4h]

  v3 = a1;
  v7 = a2;
  if ( a2 < 0 )
  {
    v7 = -a2;
    *a1 = 45;
    v3 = a1 + 1;
  }
  if ( *(_DWORD *)(a3 + 8) == -1 )
    *(_DWORD *)(a3 + 8) = 4;
  result = (_BYTE *)sub_46E61(HIWORD(v7), v3, 10);
  v5 = v3;
  while ( *v3 )
    ++v3;
  if ( *(_DWORD *)(a3 + 8) )
  {
    *v3 = 46;
    result = 0;
    ++v3;
    while ( (int)result < *(_DWORD *)(a3 + 8) )
    {
      v7 = 10 * (unsigned __int16)v7;
      ++result;
      *v3++ = BYTE2(v7) + 48;
    }
    *v3 = 0;
  }
  if ( (v7 & 0x8000) != 0 )
  {
    while ( v3 != v5 )
    {
      if ( *--v3 == 46 )
        --v3;
      if ( *v3 != 57 )
      {
        ++*v3;
        return result;
      }
      *v3 = 48;
    }
    v6 = v5 + 1;
    *v5 = 49;
    while ( 1 )
    {
      result = v6 + 1;
      if ( *v6 != 48 )
        break;
      ++v6;
    }
    if ( *v6 == 46 )
    {
      *v6 = 48;
      v6 += 2;
      *result = 46;
      while ( *v6 == 48 )
        ++v6;
    }
    *v6 = 48;
    v6[1] = 0;
  }
  return result;
}
