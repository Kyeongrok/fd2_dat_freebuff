/*
 * func-name: sub_4BF0C
 * func-address: 0x4bf0c
 * callers: 0x4a58d, 0x4a59e
 * callees: none
 */

unsigned int __fastcall sub_4BF0C(int a1)
{
  int v2; // edx
  unsigned int v3; // eax
  unsigned int n255; // ecx
  _BOOL1 v5; // cf
  unsigned int result; // eax
  __int16 n255_1; // bx
  __int16 n0x7FFF; // cx
  unsigned __int64 v9; // rt0

  v2 = -256;
  v3 = *(_DWORD *)(a1 + 4);
  n255 = v3 << 25;
  LOWORD(n255) = *(_WORD *)(a1 + 8);
  if ( __CFSHL__(v3, 25) )
  {
    if ( !(v3 << 25) && !*(_DWORD *)a1 )
      v2 = -512;
    v5 = __CFADD__(v3, 256);
    v3 += 256;
    if ( v5 )
    {
      v3 = 0x80000000;
      LOWORD(n255) = n255 + 1;
    }
  }
  result = v2 & v3;
  n255_1 = n255;
  n0x7FFF = n255 & 0x7FFF;
  if ( n0x7FFF )
  {
    if ( n0x7FFF == 0x7FFF )
    {
      return ((((2 * result) >> 8) | 0xFF000000) >> 1) | (__CFADD__(n255_1, n255_1) << 31);
    }
    else
    {
      LOWORD(n255) = n0x7FFF - 16256;
      if ( (n255 & 0x8000u) == 0 )
      {
        if ( (__int16)n255 < 255 )
        {
          LODWORD(v9) = 2 * result;
          HIDWORD(v9) = n255;
          return ((unsigned int)(v9 >> 8) >> 1) | (__CFADD__(n255_1, n255_1) << 31);
        }
        else
        {
          return (__CFADD__(n255_1, n255_1) << 31) | 0x7F800000;
        }
      }
      else
      {
        return 0;
      }
    }
  }
  return result;
}
